'''wap to generate multiplication table from 2 to 20 and 
write it to the differnt files. place these files in a folder for a 13 year old.'''

# def table():
#     for n in range(2,21):
#         for i in range(1,11):
#             print(f"{n}X{i}={n*i}")
#         print("\n")
#     
#     return n

# n=int
# table()




def table(n):
    table= ""
    for i in range(1,11):
        table+=f"{n}X{i}={n*i}\n"

    with open(f"tables/table_{n}.txt","w") as f:
        f.write(table)

for n in range(2,21):
    table(n)


