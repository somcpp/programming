/*
    File: mazeNavigation.cpp
    Description:
        A self-contained C++ program that implements:
            - Maze generator (randomized DFS / recursive backtracker)
            - A* pathfinder
            - An online "utility agent" that navigates from start to goal while
                incrementally discovering the maze (sensing adjacent cells).
        The agent plans using its current knowledge, moves one step, senses
        neighbors, and replans if needed. The program prints the full maze
        and the agent's discovered map step-by-step.

    Build:
        g++ -std=c++17 -O2 -o mazeNavigation mazeNavigation.cpp

    Notes:
        - Maze cells: 0 = free, 1 = wall
        - Known map uses: -1 = unknown, 0 = free, 1 = wall
*/

#include <bits/stdc++.h>
using namespace std;

// Simple 2D point
struct Pt { int r, c; };

// Directions: up, right, down, left
const vector<Pt> DIRS = { {-1,0}, {0,1}, {1,0}, {0,-1} };

struct Maze {
        int rows, cols;            // grid dimensions
        vector<vector<int>> grid;  // 0 free, 1 wall

        Maze(int rows_, int cols_) : rows(rows_), cols(cols_) {
                // Ensure odd dimensions for carving algorithm friendliness
                if (rows % 2 == 0) rows++;
                if (cols % 2 == 0) cols++;
                rows = max(3, rows); cols = max(3, cols);
                grid.assign(rows, vector<int>(cols, 1));
        }

        // Helper: check in-bounds
        bool in_bounds(int r, int c) const { return r >= 0 && r < rows && c >= 0 && c < cols; }

        // Carve a perfect maze using randomized DFS (recursive backtracker)
        void generate(unsigned seed = chrono::system_clock::now().time_since_epoch().count()) {
                std::mt19937 rng(seed);
                // Start at (1,1)
                int sr = 1, sc = 1;
                grid[sr][sc] = 0;
                vector<pair<int,int>> stack;
                stack.emplace_back(sr, sc);

                while (!stack.empty()) {
                        auto [r, c] = stack.back();
                        // collect unvisited neighbors two steps away
                        vector<Pt> nbrs;
                        for (auto d : DIRS) {
                                int nr = r + d.r * 2;
                                int nc = c + d.c * 2;
                                if (in_bounds(nr, nc) && grid[nr][nc] == 1) {
                                        nbrs.push_back({nr, nc});
                                }
                        }
                        if (nbrs.empty()) {
                                stack.pop_back();
                        } else {
                                // pick random neighbor and carve through the wall between
                                std::uniform_int_distribution<int> dist(0, (int)nbrs.size() - 1);
                                Pt pick = nbrs[dist(rng)];
                                int wr = (r + pick.r) / 2;
                                int wc = (c + pick.c) / 2;
                                grid[wr][wc] = 0;
                                grid[pick.r][pick.c] = 0;
                                stack.emplace_back(pick.r, pick.c);
                        }
                }
        }

        // Print full maze (for debugging/visualization)
        void print_full(const Pt& start, const Pt& goal) const {
                for (int r = 0; r < rows; ++r) {
                        for (int c = 0; c < cols; ++c) {
                                if (r == start.r && c == start.c) cout << 'S';
                                else if (r == goal.r && c == goal.c) cout << 'G';
                                else cout << (grid[r][c] ? '#' : ' ');
                        }
                        cout << '\n';
                }
        }
};

// A* pathfinding on a grid. Unknown cells can be treated as free or blocked depending on policy.
// Here we will treat any cell != 1 as passable (unknown = -1 treated as free during planning).
// Returns path as vector<Pt> from start to goal inclusive. Empty vector = no path.
vector<Pt> astar(const vector<vector<int>>& known, const Pt& start, const Pt& goal) {
        int R = known.size();
        int C = known[0].size();
        auto inb = [&](int r, int c){ return r>=0 && r<R && c>=0 && c<C; };
        auto passable = [&](int r, int c){ return known[r][c] != 1; /* treat unknown (-1) as passable */ };

        // A* structures
        vector<vector<int>> g(R, vector<int>(C, INT_MAX));
        vector<vector<Pt>> parent(R, vector<Pt>(C, {-1,-1}));
        struct Node { int f, g, r, c; };
        struct Cmp { bool operator()(const Node& a, const Node& b) const { return a.f > b.f; } };
        priority_queue<Node, vector<Node>, Cmp> pq;

        auto h = [&](int r, int c){ return abs(r - goal.r) + abs(c - goal.c); };
        if (!inb(start.r, start.c) || !inb(goal.r, goal.c) || !passable(goal.r, goal.c) || !passable(start.r, start.c))
                return {};

        g[start.r][start.c] = 0;
        pq.push({h(start.r,start.c), 0, start.r, start.c});

        while (!pq.empty()) {
                Node cur = pq.top(); pq.pop();
                if (cur.g != g[cur.r][cur.c]) continue; // stale
                if (cur.r == goal.r && cur.c == goal.c) break;

                for (auto d : DIRS) {
                        int nr = cur.r + d.r;
                        int nc = cur.c + d.c;
                        if (!inb(nr,nc) || !passable(nr,nc)) continue;
                        int ng = cur.g + 1;
                        if (ng < g[nr][nc]) {
                                g[nr][nc] = ng;
                                parent[nr][nc] = {cur.r, cur.c};
                                pq.push({ng + h(nr,nc), ng, nr, nc});
                        }
                }
        }

        if (g[goal.r][goal.c] == INT_MAX) return {};
        // reconstruct
        vector<Pt> path;
        Pt cur = goal;
        while (!(cur.r == start.r && cur.c == start.c)) {
                path.push_back(cur);
                cur = parent[cur.r][cur.c];
        }
        path.push_back(start);
        reverse(path.begin(), path.end());
        return path;
}

// Agent that navigates the maze while discovering it incrementally.
struct Agent {
        Pt pos;
        Pt goal;
        const Maze& trueMaze;
        vector<vector<int>> known; // -1 unknown, 0 free, 1 wall
        int stepsTaken = 0;

        Agent(const Maze& m, Pt start, Pt goal_) :
                pos(start), goal(goal_), trueMaze(m)
        {
                known.assign(m.rows, vector<int>(m.cols, -1));
                // If the agent starts on a wall in the true maze something is wrong; mark accordingly
                // Agent senses its initial cell and immediate neighbors
                sense_current();
        }

        // Sense current cell and 4-neighbors, update known map
        void sense_current() {
                auto inb = [&](int r, int c){ return r>=0 && r<trueMaze.rows && c>=0 && c<trueMaze.cols; };
                // Sense self
                if (inb(pos.r, pos.c))
                        known[pos.r][pos.c] = trueMaze.grid[pos.r][pos.c];
                // Sense 4-neighbors
                for (auto d : DIRS) {
                        int nr = pos.r + d.r, nc = pos.c + d.c;
                        if (inb(nr, nc)) known[nr][nc] = trueMaze.grid[nr][nc];
                }
        }

        // Display known map with agent and goal and optionally show planned path
        void print_known(const vector<Pt>& planned = {}) const {
                vector<string> out(trueMaze.rows, string(trueMaze.cols, '?'));
                for (int r = 0; r < trueMaze.rows; ++r) {
                        for (int c = 0; c < trueMaze.cols; ++c) {
                                if (known[r][c] == -1) out[r][c] = '?';
                                else if (known[r][c] == 1) out[r][c] = '#';
                                else out[r][c] = ' ';
                        }
                }
                // mark planned path (except start)
                for (size_t i = 1; i < planned.size(); ++i) {
                        auto p = planned[i];
                        if (p.r == goal.r && p.c == goal.c) continue;
                        if (out[p.r][p.c] == ' ') out[p.r][p.c] = '.';
                }
                out[pos.r][pos.c] = 'A';
                out[goal.r][goal.c] = 'G';
                for (int r = 0; r < trueMaze.rows; ++r) {
                        cout << out[r] << '\n';
                }
        }

        // Execute navigation: repeated planning and single-step execution until reach goal or failure
        bool navigate_and_show(int maxSteps = 10000, int pause_ms = 50) {
                // initial sensing done in constructor
                while (!(pos.r == goal.r && pos.c == goal.c) && stepsTaken < maxSteps) {
                        // Plan using current known map
                        vector<Pt> path = astar(known, pos, goal);
                        cout << "Step " << stepsTaken << " - planning from (" << pos.r << "," << pos.c << ") to (" << goal.r << "," << goal.c << ")\n";
                        if (path.empty()) {
                                cout << "No path found with current knowledge. Agent declares failure.\n";
                                return false;
                        }
                        // Show known map + planned path
                        print_known(path);
                        // move one step along path (to next cell)
                        if (path.size() >= 2) {
                                Pt next = path[1];
                                // Before committing, check true maze: if it's a wall, update known map and replan
                                if (trueMaze.grid[next.r][next.c] == 1) {
                                        cout << "Planned next cell (" << next.r << "," << next.c << ") is actually a wall. Updating knowledge and replanning.\n";
                                        known[next.r][next.c] = 1; // discovered wall
                                        // Do not increment steps: agent stays in place but updated map
                                        continue;
                                } else {
                                        // Move into the next cell
                                        pos = next;
                                        stepsTaken++;
                                        sense_current(); // sense neighbors after moving
                                }
                        } else {
                                // path length 1: already at goal (should be caught by while)
                                break;
                        }
                        // small pause (optional) - commented out to avoid requiring platform-specific sleep
                        // std::this_thread::sleep_for(std::chrono::milliseconds(pause_ms));
                }
                if (pos.r == goal.r && pos.c == goal.c) {
                        cout << "Agent reached the goal in " << stepsTaken << " steps.\n";
                        return true;
                } else {
                        cout << "Agent failed to reach goal within step limit.\n";
                        return false;
                }
        }
};

int main() {
        // Configure maze size (rows x cols). Odd sizes work better.
        int rows = 21, cols = 31;
        Maze m(rows, cols);
        m.generate(); // uses time-based seed for randomness

        // Choose start and goal positions on free cells
        Pt start{1,1};
        Pt goal{m.rows - 2, m.cols - 2};
        // Ensure start/goal are free (they should be in perfect maze)
        if (m.grid[start.r][start.c] == 1 || m.grid[goal.r][goal.c] == 1) {
                cerr << "Start or goal is a wall; aborting.\n";
                return 1;
        }

        cout << "Full maze (S=start, G=goal, #=wall):\n";
        m.print_full(start, goal);
        cout << "\n--- Agent exploration (A=agent, .=planned path, ?=unknown) ---\n";

        Agent agent(m, start, goal);
        agent.navigate_and_show(10000);

        cout << "\nFinal discovered map:\n";
        agent.print_known();

        return 0;
}