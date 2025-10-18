x = 10; #int
y = 3.14 #float
name = "saubhagya"
is_student = True

x = 5
y = float(x)
a = 10
b = 3
print(a/b) #3.33
print(a//b) #3
print(a**b) #1000

x = True
y = False
print(x and y)  # False
print(x or y)   # True
print(not x)    # False

x = [1, 2, 3]
y = [1, 2, 3]
print(x is y)       # False (Different memory locations)
print(x == y)       # True (Same values)

#Membership Operators
text = "Hello"
print("h" in text) #true
print("z" not in text) #True