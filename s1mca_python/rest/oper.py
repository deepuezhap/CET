a=int(input("Enter 1st number: "))
b=int(input("Enter 2nd number: "))

choice=int(input("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: "))

if choice==1:
	x=int(a+b)
	print("Sum =",x)
elif choice==2:
	x=int(a-b)
	print("Difference =",x)
elif choice==3:
	x=int(a*b)
	print("Product =",x)
elif choice==4:
	x=int(a/b)
	print("Quotient =",x)
else:
	print("Invalid choice")
