import pandas as pd
data = {
    "First_Name":['Dhruv','Daksh','Daksh','Radhey'],
    "Last_Name":['Saraf','Shringi','Shringi','Joshi'],
    "City":['Bhilwara','','Bhilwara','Bhilwara']
}

df = pd.DataFrame(data)
# print(df)
# fd = df.drop_duplicates(['First_Name'])
# ds = df.drop(columns = ['City'])
# print(fd)
# print(ds)

# sf = df[["First_Name"]]
# print(sf)

# print(df.isnull())

data1 = {
    "Marks":[10,20,30,40,50]
}

df1 = pd.read_csv("data.csv")
print(df1)
print(df1.isnull())
print(df1.isnull().sum())
print(df1.dropna(axis=0,inplace=False))
print(df1.fillna(35,axis=1))
print(df1.sum)
df2 = pd.DataFrame(data1)
print(df2.mean)
fd = df2["Marks"].mean()
print(fd)

gf = pd.concat([df2,df1],axis=1)
# gs = pd.concat([df2,df1],axis=0)
print(gf)
# print(gs)