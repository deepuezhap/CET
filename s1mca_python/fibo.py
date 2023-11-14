n=int(input("enter the num"))
a,b=0,1
print(a)
print(b)
for i in range(1,n):
	c=a+b
	a=b
	b=c
	print(c)
