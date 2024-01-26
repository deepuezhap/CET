
#run progm from this folders terminal
f=open("kai2.txt")
a=[]
for i,x in enumerate(f,start=1):
    if i%2!=0:
        a.append(x.strip())

print(a)
f.close()

f1=open("new.txt","w")
for x in a:
    f1.write(x+'\n')
   
f1.close()