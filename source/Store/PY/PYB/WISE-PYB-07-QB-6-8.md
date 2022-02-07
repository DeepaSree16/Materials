# CFU

## Question 1
What are the methods which begin and end with two underscore characters called?
### Options
a. User-defined methods
b. Additional methods
c. Special methods

## Question 2
What is the output of following program?
````python
class Test:
     def __init__(self, s = "Constructor"):
         self.s = s
 
     def printTest(self):
         return self.s

t = Test()
print(t.printTest())
````
### Options
a. It executes successfully but prints nothing
b. Constructor
c. The program has an error because of the constructor call is made without an argument.

## Question 3
What is the output of the below code?
````python
class Test:
    def __init__(self):
        self.x = 1
        self.__y = 1
 
    def getY(self):
        return self.__y

val = Test()
print(val.__y)
````
### Options
a. Prints 1
b. The program has an error because y is private and cannot be accessed outside of the class
c. The program runs fine and prints nothing.

## Question 4
What is the output of the below code?
````python
class MyClass:
    """A simple example class"""
    i = 12345

    def f(self):
        return 'hello world'

x = MyClass()
xf = x.f
print(xf())
````
### Options
a. Prints object address
b. hello world
c. Error

## Question 5
What is the output of following program?
````python
def f1(self, x, y):
    return min(x, y)

class C:
    f = f1

c = C()
print(c.f(10, 20))
````
### Options
a. Error
b. 10
c. 20

## Question 6
What is the output of the below code?
````python
class C:
    def g(self):
        return 'hello world'
c = C()
print(c.g)
````
### Options
a. Error
b. hello world
c. Prints objects address

## Question 7
What is the output of the below code?
````python
class Bag:
    def __init__(self):
        self.data = []

    def add(self, x):
        self.data.append(x)

    def addtwice(self, x):
        self.add(x)
        self.add(x)
    
    def getdata(self):
        return self.data

b1 = Bag()
b1.addtwice(10)

b2 = Bag()
b2.addtwice(20)
print(b2.getdata())
````
### Options
a. [10, 10]
b. [20, 20]
c. [10, 10, 20, 20]

## Question 8
What is the output of the below code?
````python
class car(): 
    def __init__(self, model, color): 
        self.model = model 
        self.color = color 
          
    def display(self): 
        return "Model is %s" % self.model + " and color is %s" % self.color
          
audi = car("audi a4", "blue") 
print(car.display(audi))
````
### Options
a. Model is audi a4 and color is blue
b. Executes sucessfully but prints nothing
c. Error

## Question 9
What is the output of the below code?
````python
class Cls:
    x = 3

inst = Cls()
inst.x += 1
print(Cls.x)
````
### Options
a. 3
b. 4
c. Error

## Question 10
What is the output of the below code?
````python
class Test:
    def __init__(self, a, b):
        self.a = a  
        self.b = b  
            
t = Test(1234, 5678)
print(t)
````
### Options
a. Error indicating undefined __str__() method
b. Error indicating undefined __repr__() method
c. Used default method and prints the object address

