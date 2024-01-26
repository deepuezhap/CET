dict={'deepu':8,'raman':77,'Alida':98,'z':1}


print(sorted(dict.items()))
print(sorted(dict.items(),reverse=True))

print(sorted(dict.items(),key=lambda item : item[1]))