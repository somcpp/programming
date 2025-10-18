a = str(input())

list = [x for x in a if(ord(x)>=65 and ord(x)<=90) or (ord(x)>=97 and ord(x)<=122)]
print("".join(map(str,list)))