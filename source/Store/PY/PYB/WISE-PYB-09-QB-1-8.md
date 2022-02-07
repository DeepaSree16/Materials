# CFP

## Question 1
What is the output of the below code?
````python
class A(object):
    def __init__(self, v1):
        self.v1 = v1
    def getValue(self):
        return self.v1
 
class B(object):
    def __init__(self, v1, v2):
        self.v1 = v1
        self.v2 = v2
        self.v3 = A(self.v1)
    def getValues(self):
        return self.v1, self.v2, self.v3.getValue()
 
b = B(600, 500)
print(b.getValues())
````
### Options
a. (600, 500, 600)
b. (600, 500, 500)
c. (1100, 600)

## Question 2
What is the output of the below code?
````python
def myfunc(l):
    for index in range(len(l)):
        l[index] = 2 * l[index]

l1 = [2, 5, 9]
myfunc(l1)
print(l1)
````
### Options
a. Error
b. [2, 5, 9]
c. [4, 10, 18]

## Question 3
What is the output of the below code?
````python
class A():
    m = 1
    n = 2
    def __int__(self, x=1, y=2, z=3):
        self.x = x
        self._y = y
        self.__z__ = z
 
    def myfunc(self):
        return x, y, z

obj = A()
print([a for a in dir(obj) if not a.startswith('__')])
````
### Options
a. ['m', 'n', 'x']
b. ['m', 'myfunc', 'n']
c. ['m', 'n']

## Question 4
What is the output of the below code?
````python
class myclass(object):
    def __init__(self):
        self.v1 = 2
        self.v2 = 'Two'
        self.v3 = 'One Zero'
        self.v4 = 4
 
c = myclass()
c.v5 = 15
temp = vars(c)
myitems = {}
for item in temp:
    myitems[item] = temp[item]
print (myitems)
````
### Options
a. {'v1': 2, 'v4': 4, 'v5': 15}
b. {'v1': 2, 'v2': 'Two', 'v3': 'One Zero', 'v4': 4, 'v5': 15}
c. {'v1': 2, 'v2': 'Two', 'v3': 'One Zero', 'v4': 4}

## Question 5
What is the output of following program?
````python
class Shape:
    def __new__(cls, sides, **kwargs):
        if sides == 3:
            return Triangle(**kwargs)
        else:
            return Square(**kwargs)
            
class Triangle(object):
    def __init__(self, base, height):
        self.base = base
        self.height = height
    def area(self):
        return (self.base * self.height) / 2
        
class Square(object):
    def __init__(self, length):
        self.length = length
 
    def area(self):
        return self.length*self.length
 
a = Shape(3, base=2, height=12)
b = Shape(sides=4, length=2)
 
print(a.area(), b.area())
````
### Options
a. 12.0 16
b. 36.0 16
c. 12.0 4

## Question 6
What is the output of the below code?
````python
class ReturnValue(object):
    def __init__(self, y0, y1, y2):
        self.y0 = y0
        self.y1 = y1
        self.y2 = y2
    def displayValues(self):
        return self.y0, self.y1, self.y2

def func(val):
    y0 = val + 1
    y1 = val * 3
    y2 = y0 ** y1
    return ReturnValue(y0, y1, y2)
print (func(2).displayValues())
````
### Options
a. (3, 6, 729)
b. (2, 3, 8)
c. (1, 0, 1)

## Question 7
What is the output of the below code?
````python
import math
def f(x):
    return x + 1

x, y = 42, 4.34e2
print (type(x), type(y), type(f), type(math))
````
### Options
a. (<type 'int'>, <type 'float'>, <type 'function'>, <type 'module'>)
b. <class 'int'> <class 'float'> <class 'function'> <class 'module'>
c. <class 'int'> <class 'float'> <class 'function'> <class 'package'>

## Question 8
What is the output of the below code?
````python
class Counter(object):
    def __init__(self, floors):
        self._floors = [None] * floors
 
    def __setitem__(self, floor_number, data):
        self._floors[floor_number] = data
 
    def __getitem__(self, floor_number):
        return self._floors[floor_number]
 
cntr = 4
index = Counter(cntr)
index[0:3] = [val * 10 for val in range(1, cntr)]
print(index[0:2], index[2], index[3])
````
### Options
a. [10, 20] 30 None
b. 10 20 30 40
c. 10 20 30 None

## Question 9
What is the output of the below code?
````python
class A():
    def __init__(self, x, y):
        self.__x = x
        self.__y = y
    def GetX(self):
        return self.__x
    def GetY(self):
        return self.__y
    def SetX(self, x):
        self.__x = x
    def SetY(self, y):
        self.__y = y

a = A(10, 20)
xy1 = a.GetX() * a.GetY()
xy2 = a.GetX() + a.GetY()
a.SetX(xy1)
a.SetY(xy2)
print (a.GetX() + a.GetY())
````
### Options
a. 210
b. 20
c. 230

## Question 10
What is the output of the below code?
````python
def myexpr(l1):
    e1 = l1[0] ** l1[1] + l1[2]
    e2 = l1[0] * l1[1] ** l1[2]
    return e1, e2

print(myexpr([2, 3, 5]))
````
### Options
a. (13, 486)
b. (13, 7776)
c. (256, 7776)

