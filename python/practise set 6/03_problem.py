'''A spam comment is defined as text containing following keyword:
"Make a lot of money","buy now", "subscribe this","click this",wap to detect these spams'''
p1="Make a lot of money"
p2="buy now"
p3="subscribe this"
p4="click this"

message=input("enter your comment :")

if((p1 in message) or (p2 in message) or (p3 in message)):
    print("THIS IS A SPAM COMMENT!!!!!!!")

else:
    print("not a spam comment")