# CFP

## Question 1
What is the output of the below code?
````python
class represent():
    def __repr__(self):
        return '__repr__'
    def __str__(self):
        return '__str__'
 
print(represent())
````
### Options
````python
a. __repr__
b. __str__
c. Error
````

## Question 2
What is the output of the below code?
````python
class Point:
    def __init__(self, x = 0, y = 0):
      self.x = x
      self.y = y
  
    def __iadd__(self, other):
        self.x += other.x
        self.y += other.y
        return self.x, self.y

    def __repr__(self):
        return "%d %d" % (self.x, self.y)
        
p1, p2 = Point(5, 6), Point(7, 8)
p1 += p2
print(p1)
````
### Options
a. (5, 6)
b. None
c. (12, 14)

## Question 3
What is the output of the below code?
````python
class Point:
    def __init__(self, x = 0, y = 0):
      self.x = x
      self.y = y
  
    def __sub__(self, other):
        x = self.x - other.x
        y = self.y - other.y
        return Point(x,y)
        
p1 = Point(3, 4)
p2 = Point(1, 2)
result = p1 - p2
print(result.x, result.y)
````
### Options
a. 2 2
b. 4 6
c. Error

## Question 4
What is the output of the below code?
````python
def myexpr(l1):
    e1 = l1[0] << l1[1] << l1[2]
    e2 = l1[0] << l1[1] >> l1[2]
    return e1, e2

exprs = ([2, 3, 5], [1, 2, 3], [3, 2, 4])
exprs = ([2, 5, 3], [1, 3, 2], [3, 4, 2])
print(list(map(myexpr, exprs)))
````
### Options
a. [(512, 8), (32, 2), (192, 12)]
b. [(8, 512), (2, 32), (12, 192)]
c. [[512, 8], [32, 2], [192, 12]]

## Question 5
What is the output of following program?
````python
class A:
    def __init__(self, v1 = 0):
      self.v1 = v1

    def __add__(self, other):
        return self.v1 + other
  
    def __radd__(self, other):
        return self.v1 + other

    def __repr__(self):
        return str(self.v1)

print (4 + A(4 * 5 + 6), A(3 + 4 * 5) + 2)
````
### Options
a. 48 25
b. 30 37
c. 30 25

## Question 6
What is the output of the below code?
````python
def add(c, n):
    c.test = c.test + 1
    n = n + 1

class A:
    def __init__(self):
        self.test = 0

Ccntr = A()
Icntr = 0
for _ in range(0, 25):
    add(Ccntr, Icntr)
print(Ccntr.test, Icntr)
````
### Options
a. 0 0
b. 25 0
c. 25 25

## Question 7
What is the output of the below code?
````python
def myfunc(self, mystr, radix):
    return int(mystr, radix)

class MyClass(object):
    myMethod = myfunc
    
myclass = MyClass()
print(myclass.myMethod('JK', 36))
````
### Options
a. Error
b. 514
c. 704

## Question 8
What is the output of the below code?
````python
class A():
    def __init__(self):
        self.__priv = "I am private"
        self._prot = "I am protected"
        self.pub = "I am public"

x = A()
print (x._prot, end = " ")
print (x.__priv)
````
### Options
```python
a. Prints "I am protected" and throws error for x.__priv
b. I am protected I am private
c. Throws error for x._prot attribute
````

## Question 9
What is the output of the below code?
````python
line = '  this is line of text -   '
num = "0000000000004350"
lrstrip = line.rstrip()
print (lrstrip.lstrip(), num.strip('0'))
````
### Options
a. this is line of text - 4350
b. this is line of text - 435
c. $ this is line of text $ - 435

## Question 10
What is the output of the below code?
````python
print ([val if val % 2 else -val for val in range(20) if val % 3 == 0])
````
### Options
a. [0, -3, -6, -9, -12, -15, -18]
b. [0, 3, -6, 9, -12, 15, -18]
c. [0, -3, 6, -9, 12, -15, 18]

