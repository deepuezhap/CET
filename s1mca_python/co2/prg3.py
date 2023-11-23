list1=[]
n=int(input("enter the no of numberss in first list"))
print("enter the number")
for i in range (0,n):
	a=int(input())
	list1.append(a)

print(list1)

def summ(list1):	
	sum=0
	for x in list1:
		sum=sum+x
	return sum


print(summ(list1))
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
