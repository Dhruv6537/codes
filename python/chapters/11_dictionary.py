# dictionary is mutable unordered and indexed
marks={
    "harry":100,
    "rohan":83,
    "vikram":88
}
print(marks["harry"])
print(marks.items())
print(marks.keys())
print(marks.values())
marks.update({"harry":99})
print(marks)
marks.update({"harry":99 , "renuka":100})
print(marks)
# print(marks.get("harry2")) #prints none
# print(marks["harry2"]) #prints error
