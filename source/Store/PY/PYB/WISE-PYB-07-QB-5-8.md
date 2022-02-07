# CFU

## Question 1
What is the output of the below code?
````python
class Student:
    def __init__(self, sid):
        self.sid = sid
        sid = 100

val = Student(123)
print (val.sid)
````
### Options
a. Error
b. 100
c. 123

## Question 2
Which of the following is required to create a new instance of the class?
A. A constructor
B. A class
C. A value-returning method

### Options
a. A
b. B
c. C

## Question 3
What is built-in class attibute __dict__ represents?

### Options
a. It represents name of the class
b. It represents the dictionary referencing to the class's namespace
c. Its the name of target module containing the class definition

## Question 4
What is the output of the below code?
````python
class Test:
     def __init__(self, s):
         self.s = s
 
     def printTest(self):
         return self.s

t = Test("Python Class")
print(t.printTest())
````
### Options
a. Error
b. It executes successfully but prints nothing
c. Python Class

## Question 5
What is the output of the below code?
````python
class Test:
    def __init__(self):
        self.x = 1
        self.__y = 1
 
    def getY(self):
        return self.__y

val = Test()
print(val.x)
````
### Options
a. Prints 1
b. The program has an error because x is private and cannot be accessed outside of the class
c. The program runs fine and prints nothing.

## Question 6
In Python, a class is ___________ for a concrete object.
### Options
a. a blueprint
b. an instance
c. a function

## Question 7
The correct way to instantiate below Student Class is:
````python
class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age
````
### Options
a. Student.__init__("Priya", 19)
b. Student()
c. Student("Priya", 19)

## Question 8
In Python, a function within a class definition is called a:
### Options
a. a class function
b. a method
c. a factory

## Question 9
Which of these is a private data field?
````python
def Demo:
def __init__(self):
    __a = 1
    self.__b = 1
    self.__c__ = 1
    __d__= 1
````
### Options
a. __b
b. __a
c. __c__

## Question 10
What is the output of the below code?
````python
class MyClass:
    """A simple example class"""
    i = 12345

    def f(self):
        return 'hello world'
        
x = MyClass()
x.counter = 1
while x.counter < 10:
    x.counter = x.counter * 2
print(x.counter)
````
### Options
a. Error
b. 1
c. 16

