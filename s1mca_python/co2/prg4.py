
def sqr(x):
    x=x**0.5
    if(int(x)==x):
        return True
    return False

def even(x):
    
    while x:
        rem=x%10
        if(rem%2!=0):
            return False
        x=x//10
    
    return True
    


        
a=int(input())
if(even(a)):
    print("even")   
else:
    print("Nope")   


