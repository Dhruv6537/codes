'''write a word donkey and replace with #### and store it
in a file'''
word="donkey"

with open("file.txt","r") as f:
    content=f.read()

contentnew=content.replace(word,"#####")

with open("file.txt","w") as f:
    f.write(contentnew)