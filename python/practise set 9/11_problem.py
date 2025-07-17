# wap to rename a file 

with open("old.txt") as f:
    content=f.read()

with open("renamed_by_pyhton.txt","w") as f:
    f.write(content)
