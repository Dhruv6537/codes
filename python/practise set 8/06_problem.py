# write a python function to remove a given word from list and strip it at the same time
def rem(l, word):
    n=[]
    for item in l:
        if not(item==word):
            n.append(item.strip(word))
    return n
    

l=["dhruv","rohan","Shubham","an"]

print(rem(l, "an"))
