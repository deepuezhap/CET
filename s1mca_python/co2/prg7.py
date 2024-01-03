a=input("enter the string : ")

if(a.endswith("ing")):
    a=a+"ly"
else:
    a=a+"ing"
print(a)
