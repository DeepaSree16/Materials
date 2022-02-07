# CFU

## Question 1
What is the output of the below code?
````python
class Foo:
    X = 10
    def hello(self):
        self.X = 20

f = Foo()
f.hello()
print(Foo.X, f.X)
````
### Options
a. 10 10
b. 10 20
c. 20 20

## Question 2
What is the output of the below code?
````python
class A:
    pass

class B(A):
    pass

class C(B):
    pass

o1, o2 = B(), C()
print(isinstance(o1, A), isinstance(o2, B))

````
### Options
a. True True
b. True False
c. False True

## Question 3
What is the output of the below code?
````python
class A:
    X = 10
    def __setattr__(self, key, value):
        print("__setattr__ is called")

a = A()
a.Y = 10
A.k = 90
print(a.X, A.k)
````
### Options
a. 10 90
b. __setattr__ is called
__setattr__ is called
10 90
c. __setattr__ is called
10 90

## Question 4
What is the output of the below code?
````python
class MyClass:
    def __init__(self):
        self.__a = 1

obj = MyClass()
print(obj._MyClass__a)
````
### Options
a. 1
b. AttributeError
c. None

## Question 5
What is the output of following program?
````python
class A():
    def __repr__(self):
        return '__repr__ is called'
    def __str__(self):
        return '__str__ is called'

print(A())
````
### Options
a. __repr__ is called
b. __str__ is called
c. <class '__main__.A'>

## Question 6
What is the output of the below code?
````python
class AttrTest:
    """This is AttrText class doc string"""
    def __init__(self):
        """This is display doc string"""

obj = AttrTest()
print(AttrTest.__doc__)
print(obj.__doc__)
````
### Options
a. Syntax Error
b. This is AttrText class doc string
None
c. This is AttrText class doc string
This is AttrText class doc string

## Question 7
What is the output of the below code?
````python
class MyClass:
    def __init__(self, cost):
        self.cost = cost
        
    def get_name(self):
        return __name__, MyClass.__name__

obj = MyClass(70)
print(obj.get_name())
````
### Options
````python
a. ('__main__', 'MyClass')
b. ('MyClass', 'MyClass')
c. ('__main__', '__main__')
````
## Question 8
What is the output of the below code?
````python
class A:
    def __init__(self):
        self.X = 10

a = A()
a.X = 20
delattr(a, 'X')
setattr(a, 'X', 30)
print(a.X)
````
### Options
a. Attribute Error
b. 30
c. 20

## Question 9
What is the output of the below code?
````python
class MyClass:
    def __init__(self, value):
        self.value = value

obj = MyClass(70)
obj.count = 20
obj.containers = 5

print(obj.count + len(obj.__dict__))
````
### Options
a. 23
b. 21
c. 20

## Question 10
What is the output of the below code?
````python
class A:
    X = 10

a1 = A()
A.X = 30
a2 = A()
print(A.X, a1.X, a2.X)
````
### Options
a. 10 10 30
b. 30 30 10
c. 30 30 30

