a=int(input("enter the age :"))
if(a>18):
    print("AFULT")
    print("HAVE LICENSE")
    print("HAVE VOTER ID")

elif(18>a>13):
    print("TEENAGER")
    print("HAVE FUN BEFORE BECOMING ADULT")

elif(a==0):
    print("PERSON DOES NOT BORNED YET")

elif(a<0):
    print("ARE YOU A GHOST OR WAHT!!!!!!!")
    print("YOU CAN'T HAVE NEAGATIVE AGE")

else:
    print("MINOR")