import csv
#to print a particular line of code
f=open("kai.csv")
content=csv.reader(f)
n=3

for i,x in enumerate(content,start=1):
    if(i==n):
        print(x)


#to print a particular column...

for x in content:
    print(x[0])