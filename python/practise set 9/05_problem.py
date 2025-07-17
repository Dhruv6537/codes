#repeat a program 4 for a list to be censored

l=("donkey","monkey","key")

with open("file.txt","r") as f:
    content=f.read()

for word in l:
    content=content.replace(word,"#"*len(word))

with open("file.txt","w") as f:
    f.write(content)