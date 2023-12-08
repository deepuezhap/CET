class Lists:
    def __init__(self,elements=None):
        if elements==None :
            elements=[]
        

    def add(self,val):
        self.elements.append(val)


    def display(self):
        return f"{self.elements}"

a=["deepu","lol"]
obj=Lists(a)
obj