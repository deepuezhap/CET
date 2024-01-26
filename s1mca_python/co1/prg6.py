a=[input() for i in range(5)]
c=0
for x in a:
    for y in x:
        if(y=="a"):
            c+=1

print(c)