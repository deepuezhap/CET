list1=[]
list2=[]
n=int(input("enter the no of numberss in first list"))
print("enter the number")
for i in range (0,n):
	a=int(input())
	list1.append(a)
m=int(input("enter the no of numberss in second list"))	
print("enter the number")
for i in range (0,m):
	a=int(input())
	list2.append(a)

print(list1)
print(list2)

if len(list1)==len(list2):
	print("same lenght")
else:
	print("not same lenght")

if (sum(list1)==sum(list2)):
	print("Sum is same")
else:
	print("Sum is not same")
	
for x in list1:
	for y in list2:
		if(x==y):
			print("duplicate  " + str(x))	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
