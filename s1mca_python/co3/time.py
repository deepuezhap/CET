class Time :
    def __init__(self,h,m,s):
        self.h=h
        self.m=m
        self.s=s

    def __str__(self):
        return f"{self.h} : {self.m} : {self.s}"

    def __add__(self,other):
        self.h=self.h+other.h
        self.m=self.m+other.m
        self.s=self.s+other.s
        return f"{self.h} : {self.m} : {self.s}"


a= Time(12,44,22)
b= Time(3,22,25)
print(a)
print(b)
print(a+b)

