n=int(input("enter the num"))

def fibo(n):
	a,b=0,1
	print(a)
	print(b)
	for i in range(1,n):
		c=a+b
		a=b
		b=c
		print(c)

fibo(n)


