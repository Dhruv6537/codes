a=1
b=25
c=3

def greatest():
    if(a>b and a>c):
        return a
    elif(b>c and b>a):
        return b
    elif(c>a and c>b):
        return c



print(greatest())

