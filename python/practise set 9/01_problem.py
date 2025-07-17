'''wap to read the text from a given file 'poem.txt and find out 
whwther it contains the word 'twinkle' 
'''
f=open("poem.txt")
content=f.read()
if("twinkle" in content):
    print("twinkle is present")

else:
    print("not present")

f.close()