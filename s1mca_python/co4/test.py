class student:
    
    def __init__(self,roll,mark,name):
        self.roll=roll
        self.mark=mark
        self.name=name

    def __str__(self):
        return f"hai {self.name}  your mark is {self.mark}"

    

a=student(11,55,"deepu")
print(a)