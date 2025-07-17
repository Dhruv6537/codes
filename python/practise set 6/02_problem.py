''' wap to find out whether a student has passed or failed if it requires a total of 40% and atleast 33% in each subject to pass. 
assume 3 subjects and take marks as an input user'''
a=int(input("enter marks :"))
b=int(input("enter marks :"))
c=int(input("enter marks :"))

total_percentage=(100)*(a+b+c)/300

if(total_percentage>=40 and a>33 and b>33 and c>33):
    print(f"YOU ARE PASSED YOUR PERCENTAGE IS {total_percentage:.2f} %)")

else:
    print("YOU FAILED")

