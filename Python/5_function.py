# def  greet():
#     print("Hello")
# greet()

def greet(name):
    print("Hello,", name + "!")

greet("Saubhagya")

def add(a, b):
    return a + b

result = add(5, 3)
print("Sum:", result)

#variable length Arguments
def sum_all(*numbers):
    return sum(numbers)
print(sum_all(1,2,3,4,5))

#Keyword Arguements
def info(**details):
    for key, value in details.items():
        print(key, ":", value)
info(name="Saubhagya",age =19,city = "Dehli")

def multiply(a,b):
    return a*b
result = multiply(4,5)
