class Time:
    def __init__(self,h=0,m=0,s=0):
        self.h=h
        self.m=m
        self.s=s

    def __add__(self,other):
        
        a=self.s+other.s
        b=self.m+other.m
        c=self.h+other.h
        rem=a//60
        a=a%60
        b=b+rem
        rem=b//60
        b=b%60
        c=c+rem
        return Time(c,b,a)

    def __str__(self):
        return f"{self.h:02d}:{self.m:02d}:{self.s:02d}"

a=Time(0,55,55)
b=Time(0,45,15)
print(a)
print(b)
print(a+b)




