# convert farenheit into celsius
def convert(f):
    c=5*(f-32)/9
    return c

f=int(input("enter the temperature in F :"))
print(f"{convert(f):.2f} Degree c")


# NOTE: to prevent python to add a new line, use end=""