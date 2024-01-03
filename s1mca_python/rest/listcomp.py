l1 = ["apple", "orange", "blue"]
l2 = ["apple", "banana", "blue"]

# Length
if len(l1) == len(l2):
	print("Same length")
else:
	print("Not Same length")
	
# Values
if l1 == l2:
	print("Equal")
else:
	print("Not Equal")


# Same Value

for i in range(len(l1)):
	if l1[i] in l2: 
		print(l1[i])

