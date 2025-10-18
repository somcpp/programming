count = 1
while count <=5:
    print("Count:",count)
    count +=1
for i in range(1,6): # range(start, stop) → stop is excluded
    print("Number:",i)

for letter in "Python":
    print(letter)

fruits = ["apple","bannana","cherry"]
for fruit in fruits:
    print(fruit)

#range() in loops
for i in range(2,10,2): #starts from 2, goes up to 9, step of 2
    print(i)

#break
for i in range(1,6): # range(start, stop) → stop is excluded
    if i == 3:
        break  # Stops the loop when i is 3
    print("Number:",i)

#continue
for i in range(1, 6):
    if i == 3:
        continue  # Skips iteration when i is 3
    print(i)

#Nested Loops
for i in range(1,4):
    for j in range(1,4):
        print(i,j)



