# write a recursive function to add sum of n natural number

def add(n):
    if(n==1):
        return 1
    return add(n-1)+n

n=int(input("enter the number :"))
print(add(n))