def fun1():
    global x #using ‘global’ keyword
    x=x+1

print(3,x)

x=10

print(3,x)

fun1()
