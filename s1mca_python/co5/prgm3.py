import csv
#we need csv module and csv.reader to make it work


f=open("kai.csv")
content=csv.reader(f)
for x in content:
    print(x)
