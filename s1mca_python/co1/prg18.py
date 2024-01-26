a={'Deepu':'red','Raman':'yellow'}
b={'Alida':'blue','cameron':'violet','Deepu':'Man'}
# c=a|b
# print(c)
print(a)
for x in b:
    a[x]=b[x]
    
print(a)