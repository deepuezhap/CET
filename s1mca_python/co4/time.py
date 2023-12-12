class Time :
    def __init__(self,h,m,s):
        self.h=h
        self.m=m
        self.s=s

    def __str__(self):
        return f"{self.h} : {self.m} : {self.s}"

    def __add__(self,other):

        t=Time(0,0,0)
        a=self.s+other.s
        
        b=self.m+other.m + t.s

        c=self.h+other.h + t.h
        
        t.s=a%60
        t.m = b%60 + a//60

        t.h=c


        
        return t


a= Time(12,44,50)
b= Time(3,10,22)
c=a+b
print(a)
print(b)
print(c)

