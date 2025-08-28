name = input("enter your name: ")

def greet(name):
    if len(name) == 0:
        print("Hello World")
    else:
        print("Hello", name)
        
greet(name)