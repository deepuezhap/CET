class Publisher:
    def __init__(self,pub_name):
        self.pub_name=pub_name

class Book(Publisher):
    def __init__(self,title,author,pub_name):
        super().__init__(pub_name)
        self.title=title
        self.author=author
        
class Python(Book):
    def __init__(self,price,nop,title,author,pub_name):
        super().__init__(title,author,pub_name)
        self.price=price
        self.nop=nop

    def __str__(self):
        return f"{self.title} and {self.author} and {self.pub_name} price:{self.price} and Pages : {self.nop}"


b= Python(1500,200,"Harry potter"," jk rowling","KK books")
print(b)
