class Rectangle :
    def __init__(self,l,b):
        self.length=l
        self.breadth=b

    def area(self):
        return self.length*self.breadth

    def __lt__(self,other):
        if(self.area() < other.area()):
            return f"{self.area()} is less than {other.area()}"
        else:
            return f"{self.area()} is greater than {other.area()}"
        

    def __str__(self):
        return f"length is {self.length} and breadth is {self.breadth}"
    


r=Rectangle(10,5)
r2=Rectangle(2,2)
print(r)
print(r2)
print(r < r2)