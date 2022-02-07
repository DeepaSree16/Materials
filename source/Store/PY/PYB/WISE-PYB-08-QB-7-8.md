# CFU

## Question 1
What is the output of the below code?
````python
class A:
    def __init__(self, x = 1):
        self.x = x

class B(A):
    def __init__(self, y = 2):
        super().__init__()
        self.y = y

b = B()
print(b.x, b.y)
````
### Options
a. 1 2
b. 2 1
c. 0 0

## Question 2
What is the output of the below code?
````python
class Polygon:
    def __init__(self, no_of_sides, s1 = 0, s2 = 0, s3 = 0, s4 = 0):
        pass
        
class Triangle(Polygon):
    def __init__(self, s1, s2, s3):
        Polygon.__init__(self, 3, s1, s2, s3)

class Rectangle(Polygon):
    def __init__(self, s1, s2):
        Polygon.__init__(self, 4, s1, s2, s1, s2)

t = Triangle(3, 5, 4)
r = Rectangle(10, 20)
print (isinstance(t, Polygon), end = " ")
print (isinstance(r, Triangle))
````
### Options
a. True False
b. True True
c. False True

## Question 3
What is the output of the below code?
````python
print(issubclass(float, int), end = " ")
print(issubclass(bool, int))
````
### Options
a. False True
b. True False
c. False False

## Question 4
What is the output of the below code?
````python
class Point:
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y
    
    def __str__(self):
        return "({0}, {1})".format(self.x,self.y)
    
    def __add__(self,other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x,y)

p1 = Point(2, 3)
p2 = Point(-1)
print(p1 + p2)
````
### Options
a. (1, 3)
b. (3, 3)
c. (2, 3)

## Question 5
What is the output of following program?
````python
class A:
    def __init__(self, num = 0):
        self.x = num

class B(A):
    def __init__(self, num):
        self.y = num
        super().__init__(self.y - 1)

obj = B(11)
print (obj.x, obj.y)
````
### Options
a. 11 10
b. 0 11
c. 10 11

## Question 6
What is the output of the below code?
````python
class A:
    def __str__(self):
        return "A"

class B(A):
    def __init__(self):
        super().__init__()

class C(B):
    def __init__(self):
        super().__init__()

b = B()
a = A()
c = C()
print(a, b, c)
````
### Options
a. Executes successfully but prints nothing
b. A B C
c. A A A

## Question 7
What is the output of the below code?
````python
class A:
    def __init__(self, x = 0):
       self.x = x

    def func1(self):
       self.x += 1

class B(A):
    def __init__(self, y = 0):
       A.__init__(self, 3)
       self.y = y

    def func1(self):
       self.y += 1

b = B()
b.func1()
print(b.x, b.y)
````
### Options
a. 3 0
b. 2 0
c. 3 1

## Question 8
What is the output of the below code?
````python
class BaseClass:
    "This is my base class"
    def __init__(self):
        pass
    
class DerivedClass(BaseClass):
    "This is my derived class"
    def __init__(self):
        pass
        
dc = DerivedClass()
print(dc.__doc__)
````
### Options
a. This is my base class
b. This is my derived class
c. The most base type

## Question 9
What is the output of the below code?
````python
class Base:
    pass
class Derived1(Base):
    pass
class Derived2(Derived1):
    pass

print(Derived2.mro())
````
### Options
a. [<class '__main__.object'>, <class '__main__.Base'>, <class '__main__.Derived1'>, <class 'Derived2'>]
b. [<class '__main__.Derived2'>, <class '__main__.Derived1'>, <class '__main__.Base'>]
c. [<class '__main__.Derived2'>, <class '__main__.Derived1'>, <class '__main__.Base'>, <class 'object'>]

## Question 10
What is the output of the below code?
````python
class Person:
    def __init__(self, id):
        self.id = id

p1 = Person(100)
p1.__dict__['age'] = 49
print (p1.age + len(p1.__dict__))
````
### Options
a. 49
b. 51
c. 149

