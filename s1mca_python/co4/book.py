class Publisher:
    def __init__(self,pub_name):
        self.pub_name=pub_name

class Book(Publisher):
    def __init__(self,title,author,pub_name):
        super().__init__()
        self.title=title
        self.author=author
        self.pub_name=pub_name

    def __str__(self):
        return f"{self.title} and {self.author} and {self.pub_name}"



b= Book("maths","raman","KK books")
b2=Book("kak","kol")

print(b)
print(b2)
