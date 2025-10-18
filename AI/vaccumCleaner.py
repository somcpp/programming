import random
import time
import matplotlib.pyplot as plt

class UtilityVacuumAgent:
    def __init__(self):
        self.rooms = ["A", "B", "C", "D"]
        self.location = random.choice(self.rooms)
        dirty_rooms = random.sample(self.rooms, 2)
        self.environment = {room: ("dirty" if room in dirty_rooms else "clean") for room in self.rooms}
        self.history = []

    def perceive(self):
        return self.environment[self.location]

    def utility(self, action, status):
        """
        Assigns utility (usefulness) to actions:
        Higher = better choice
        """
        if action == "clean":
            return 10 if status == "dirty" else -2  # cleaning dirty room = +10, cleaning clean = waste = -2
        elif action == "move":
            return 0 if status == "dirty" else 5    # moving when clean = +5, moving when dirty = bad = 0
        return 0

    def choose_action(self, status):
        """
        Choose the action that maximizes expected utility.
        """
        possible_actions = ["clean", "move"]
        utilities = {a: self.utility(a, status) for a in possible_actions}
        # Pick the action with the highest utility
        best_action = max(utilities, key=utilities.get)
        print(f"Evaluated utilities: {utilities} -> Best action: {best_action.upper()}")
        return best_action

    def act(self, action):
        """
        Perform the chosen action.
        """
        if action == "clean":
            if self.environment[self.location] == "dirty":
                print(f"Vacuum in {self.location}: DIRTY -> CLEANING...")
                self.environment[self.location] = "clean"
            else:
                print(f"Vacuum in {self.location}: Already CLEAN, cleaning wasted effort.")
        elif action == "move":
            old_loc = self.location
            curr_index = self.rooms.index(self.location)
            self.location = self.rooms[(curr_index + 1) % len(self.rooms)]
            print(f"Moving from {old_loc} -> {self.location}")

    def is_done(self):
        return all(state == "clean" for state in self.environment.values())

    def record_state(self):
        self.history.append((self.environment.copy(), self.location))

    def visualize(self):
        fig, axes = plt.subplots(1, len(self.history), figsize=(3*len(self.history), 4))
        if len(self.history) == 1:
            axes = [axes]
        for i, (env, loc) in enumerate(self.history):
            colors = []
            explode = []
            labels = []
            for room in self.rooms:
                if room == loc:
                    labels.append(f"{room} (V)")
                    explode.append(0.1)
                else:
                    labels.append(room)
                    explode.append(0.02)
                colors.append("#4CAF50" if env[room] == "clean" else "#F44336")
            axes[i].pie([1]*4, labels=labels, colors=colors, explode=explode, startangle=90, wedgeprops={"edgecolor": "black"})
            axes[i].set_title(f"Step {i+1}\nVacuum at {loc}")
        plt.tight_layout()
        plt.show()


# --- Running the agent ---
agent = UtilityVacuumAgent()
step = 1

print("Initial Environment:", agent.environment, "\n")
agent.record_state()

while not agent.is_done():
    print(f"--- Step {step} ---")
    status = agent.perceive()
    action = agent.choose_action(status)
    agent.act(action)
    print("Current Environment:", agent.environment, "\n")
    agent.record_state()
    step += 1
    time.sleep(1)

print("All 4 rooms are clean! Task Complete.")
agent.visualize()
