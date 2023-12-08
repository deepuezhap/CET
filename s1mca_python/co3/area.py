from graphics.circle import *
from graphics.rectangle import *
from graphics.threeD.cuboid import *
from graphics.threeD.sphere import *
print("\n 1 Rectangle \n 2 circle \n 3 cuboid \n 4 sphere \n 5 exit")


while(1):
    n=int(input("enter the choice : "))
    match n:
        case 1 :
            x=int(input("enter the lenght "))
            y=int(input("enter the breadth "))
            print("area is :" ,rarea(x,y))
            print("perimeter is :" ,rperi(x,y))

        case 2 :
            x=int(input("enter the radius"))
            print("area is :" ,carea(x))
            print("perimeter is :" ,cperi(x))

        case 3 :
            x=int(input("enter the length"))
            y=int(input("enter the breadth"))
            z=int(input("enter the height"))
            print("area is :",cubearea(x,y,z))
            print("perimeter is :",cubeperi(x,y,z))


        case 4 :
            x=int(input("enter the radius of sphere"))
            print("area is :",spherearea(x))
        case 5 : 
            break
        case _:
            print("invalid code")
                