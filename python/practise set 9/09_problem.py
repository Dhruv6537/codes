# wap to find if a file is identical to other 

with open("this.txt") as f:
    content=f.read()

with open("this_copy.txt") as f:
    content2=f.read()

if(content==content2):
    print("yes,it is identical")

else:
    print("not")

