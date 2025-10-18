import numpy as np

maze = np.zeros([5,5],dtype="int32")
maze[1][1] = 1
maze[1][2] = 1
maze[1][3] = 1
maze[2][1] = 1
maze[2][2] = 1
maze[2][3] = 1
maze[3][2] = 1
start = (0,0)
r,c = start
# print(r,c)
# print(maze.shape)
# row,col = maze.shape
# print(row,col)
# # print(maze)
# if(r-1>=0):
#     maze[r-1][c] = -1;
# if r+1 < maze.shape[]
# Check neighbors (up, down, left, right)
# if r-1 >= 0: 
#     maze[r-1][c] = -1
# if r+1 < maze.shape[0]:
#     maze[r+1][c] = -1
# if c-1 >= 0:
#     maze[r][c-1] = -1
# if c+1 < maze.shape[1]:
#     maze[r][c+1] = -1


while r < 5:
    c = 0
    while c < 5:
        if maze[r][c] == -1 or maze[r][c] == 1:
            c += 1   
            continue
        maze[r][c] = -1
        c += 1
    r += 1

while r < 5 and c < 5:
    if(r==5):
        continue
    if(c==5):
        r+=1
    

print(maze)