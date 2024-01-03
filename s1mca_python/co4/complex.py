class complex:
    def __init__(self,a,b):        
        self.real=a
        self.img=b

    def __add__(self,other):
        self.real+=other.real
        self.img+=other.img

        return self

    def __str__(self):

        return f"{self.real} + {self.img}i "


b=complex(4,3)
c=complex(1,7)
print(b)
print(c)
print(b+c)


