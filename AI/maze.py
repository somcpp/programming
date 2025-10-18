from pyamaze import maze

if __name__ == "__main__":
    size = int(input("Enter the size of maze: "))
    m = maze(size, size)
    m.CreateMaze(saveMaze=True)
    m.run()  


