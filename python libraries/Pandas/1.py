import pandas as pd

# df = pd.read_csv("Crop_recommendation.csv")
data = {
    "Name":['Dhruv','Yash','Sakshi'],
    "Age" :[19,25,19],
    "City":['Jaipur','Pali','Ahemdabad']
}
df = pd.DataFrame(data)
print(df)
print(df.shape)
print(df.columns)
fd = df["Name"]
print(fd)

# df.to_csv("output.csv")
# df.to_excel("output.xlsx")
# df.to_json("output.json")
