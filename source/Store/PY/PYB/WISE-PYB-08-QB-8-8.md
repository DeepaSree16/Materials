# CFU

## Question 1
What is the output of the below code?
````python
class A:
     def __init__(self):
         self.__x = 1
         self.y = 10
 
     def getA(self):
         return(self.__x, self.y)

class B(A):
     def __init__(self):
         super().__init__()
         self.__x = 2
         self.y = 20
         
c = B()
print(c.getA())
````
### Options
a. 1 20
b. 2 20
c. 1 10

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
print (isinstance(t, int), end = " ")
print (isinstance(r, object))
````
### Options
a. True False
b. False False
c. False True

## Question 3
What is the output of the below code?
````python
print(issubclass(super, object), end = " ")
print(issubclass(tuple, list))
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
    
    def __repr__(self):
        return "({0},{1})".format(self.x,self.y)
    
    def __lt__(self, other):
        self_mag = (self.x ** 2) + (self.y ** 2)
        other_mag = (other.x ** 2) + (other.y ** 2)
        return self_mag < other_mag

print (Point(1, 1) < Point(-2, -3), end = " ")
print (Point(1, 1) < Point(0.5, -0.2))
````
### Options
a. True False
b. False False
c. True False

## Question 5
What is the output of following program?
````python
class A:
    def __init__(self):
        self.x = 1

    def func(self):
        self.x += 10
        return self.x

class B(A):
    def func(self):
        self.x += 1
        return self.x

b = B()
print(b.func())
````
### Options
a. 1
b. 11
c. 2

## Question 6
What is the output of the below code?
````python
class A:
    def __init__(self, x = 2, y = 3):
        self.x = x
        self.y = y

    def __repr__(self):
        return "A"

    def __ne__(self, num ):
        return self.x * self.y != num.x * num.y

a = A(1, 2)
b = A(2, 1)
print(a != b)
````
### Options
a. False
b. True
c. 6

## Question 7
What is the output of the below code?
````python
class A:
    def __init__(self):
        self.mydata = "Class A's constructor"
    
    def getInfo(self):
        return self.mydata
  
class B(A):
    def __init__(self):
        self.mydata = "Class B's constructor"
        
    def getInfo(self):
        return self.mydata

print(A().getInfo(), end = " ")
print(B().getInfo())
````
### Options
a. Executes successfully but nothing gets printed
b. Class B's constructor Class A's constructor
c. Class A's constructor Class B's constructor

## Question 8
What is the output of the below code?
````python
class BaseClass:
    "This is my base class"
    def __init__(self):
        pass
    def getDocstring(self):
        return super().__doc__
    
class DerivedClass(BaseClass):
    "This is my derived class"
    def __init__(self):
        pass
        
dc = DerivedClass()
print(dc.getDocstring())
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
class Derived2(Base):
    pass
class HybridDerived(Derived2, Derived1):
    pass

print(HybridDerived.__mro__)
````
### Options
a. (<class '__main__.HybridDerived'>, <class '__main__.Derived2'>, <class '__main__.Base'>, <class 'object'>)
b. (<class '__main__.HybridDerived'>, <class '__main__.Derived1'>, <class '__main__.Base'>, <class 'object'>)
c. (<class '__main__.HybridDerived'>, <class '__main__.Derived2'>, <class '__main__.Derived1'>, <class '__main__.Base'>, <class 'object'>)

## Question 10
What is the output of the below code?
````python
class Parrot:
    def fly(self):
        return "Parrot can fly"
    def swim(self):
        return "Parrot can't swim"

class Penguin:
    def fly(self):
        return "Penguin can't fly"
    def swim(self):
        return "Penguin can swim"

def flying_test(bird):
    return bird.fly()

blu = Parrot()
peggy = Penguin()

print(flying_test(blu), end = " ")
print(flying_test(peggy))
````
### Options
a. Parrot can fly Parrot can't swim
b. Parrot can fly Penguin can't fly
c. Parrot can't fly Penguin can swim
