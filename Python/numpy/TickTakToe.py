import numpy as np
board = np.array([
    [" "," "," "],
    [" "," "," "],
    [" "," "," "]
])

def check_rows(board):
    for i in range (3):
        value = board[i][0]
        flag = 1
        if(value==" "):
            flag = 0
            continue
        for j in range (3):
            if(board[i][j]!=value):
                flag = 0
                break
        if flag==1:
            return 1
    return 0

def check_cols(board):
    for i in range (3):
        value = board[0][i]
        flag = 1
        if(value==" "):
            flag = 0
            continue
        for j in range (3):
            if(board[j][i]!=value):
                flag = 0
                break
        if flag==1:
            return 1
    return 0

def check_diag(board):
    value = board[0][0]
    flag = 1
    if(value==" "):
        return 0
    for i in range (3):
        if board[i][i] != value:
            flag = 0
            break
    if flag==1:
        return 1
    else:
        return 0
def check_oppDiag(board):
    value = board[0][2]
    flag = 1
    if(value==" "):
        return 0
    if(board[1][1]==value or board[2][0]==value):
        return 1;
    else:
        return 0;

def check_winner(board):
    if(check_rows(board) or
    check_cols(board) or 
    check_diag(board)):
        return 1
    else:
        return 0
def game(board):
    print("Welcome to TickTakToe!!!")
    print(board)
    p1 = 'X'
    p2 = 'O'
    flag = 0
    for i in range(9):
        if(i%2==0):
            print("Player 1's turn : ")
        else:
            print("Player 2's turn : ")
        rows = int(input("Enter rows: "))
        cols = int(input("Enter cols: "))
        while(board[rows][cols]!=' '):
            print("already filled!! , Enter rows and cols again.")
            rows = int(input("Enter rows: "))
            cols = int(input("Enter cols: "))
        if i%2==0:
            board[rows][cols] = p1
        else:
            board[rows][cols] = p2
        print(board)
        if(check_winner(board)):
            if i%2==0:
                print("Player 1 won!")
            else:
                print("Player 2 won!")
            flag = 1
            break
    if flag==0:
        print("Match Tied")
    return
        


        
game(board)