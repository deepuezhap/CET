class Time :
    def __init__(self,h,m,s):
        self.h=h
        self.m=m
        self.s=s

    def __str__(self):
        return f"{self.h} : {self.m} : {self.s}"

    def __add__(self,other):

        t=Time()
        t.h=self.h+other.h
        t.m=self.m+other.m
        t.s=self.s+other.s

        





        return t


a= Time(12,44,22)
b= Time(3,22,25)
c=a+b
print(a)
print(b)
print(c)

