class Time:
    def __init__(self,h,m,s):
        self.h=h
        self.m=m
        self.s=s
    
    def __add__(self,other):
        t=Time(0,0,0)
        a=self.h*3600 + self.m*60 + self.s
        b=other.h*3600 + other.m*60 + other.s
        c=a+b
        t.h=c//3600
        t.m=(c%3600)//60
        t.s=c%60

        return t

    def __str__(self):
        return f"{self.h:02d} : {self.m:02d}: {self.s:02d}"

t=Time(2,58,48)
t2=Time(4,5,27)
print(t)
print(t2)
print(t + t2)

