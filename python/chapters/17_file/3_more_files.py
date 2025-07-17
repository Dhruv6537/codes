f=open("file2.txt")
# for whole para
# lines= f.readlines() # it returns the list
# print(lines, type(lines))

# for line by line
# line1= f.readline() 
# print(line1, type(line1))

# line2= f.readline() 
# print(line2, type(line2))

# line3= f.readline() 
# print(line3, type(line3))

# line4= f.readline() 
# print(line4, type(line4))

# line5= f.readline() 
# print(line5, type(line5))

# line6= f.readline() 
# print(line6 =="") # it gives us empty string bcs no line is left

#by usling while loop

line=f.readline()
while(line!=""):
    print(line)
    line=f.readline()



f.close()