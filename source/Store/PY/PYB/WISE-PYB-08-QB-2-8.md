# CFP

## Question 1
What is the output of the below code?
````python
class A:
    def __init__(self, x, y):
        self.x, self.y = x, y
    def __repr__(self):
        return "%d %d" % (self.x, self.y)
    
    def getA(self):
        return A

a = A(10, 20)
setattr(a, 'z', getattr(a, 'x') * getattr(a, 'y'))
print(getattr(a, 'z'))
````
### Options
a. 200
b. 30
c. Error

## Question 2
What is the output of the below code?
````python
def mylambda(i: int, x: int) -> int:
        return [lambda x: x ** 2, lambda x: x ** 3, lambda x: x ** 4][i](x)

print(mylambda(2, 3))
````
### Options
a. 9
b. 27
c. 81

## Question 3
What is the output of the below code?
````python
def myfunc(x: int) -> int:
    if x > 0:
        result = x + myfunc(x - 1)
    else:
        result = 0
    return result

print (myfunc(4))
````
### Options
a. 6
b. 10
c. 15

## Question 4
What is the output of the below code?
````python
def sumtree(l):
    tot = 0
    items = list(l)
    while items:
        front = items.pop(0)
        if not isinstance(front, list):
            tot += front
        else:
            items[:0] = front
    return tot

L = [1, [2, [3, 4, 5], 6], 7, [8, 9]]
print(sumtree(L), end = " ")
print(sumtree([5, [4, [3, [1, [2, 6]]]]]), end = " ")
print(sumtree([[[[[[[1], 2], 3], 4], 5], 6, 7]]))
````
### Options
a. 45 21 28
b. 36 15 21
c. 14 15 11

## Question 5
What is the output of following program?
````python
def quadratic(a, b, c):
    x = -b / (2 * a)
    y = (b ** 2 - 4 * a * c) ** 0.5 / (2 * a)
    return (x + y), (x - y)

print (quadratic(c = 62, a = 31, b = 93))
````
### Options
a. (-0.5, -1.0)
b. (-1.0, -2.0)
c. (-2.0, -1.0)

## Question 6
What is the output of the below code?
````python
class myClass:
    def __init__(self, x, y, z):
        self.x, self.y, self.z = x, y, z
    
    def __str__(self):
        return "%d %d %d" % (self.x, self.y, self.z)

c1 = myClass(10, 20, 30)
c1.w = c1.x + c1.y + c1.z
c2 = myClass(100, 200, 300)
print (c2.w)
````
### Options
a. 60
b. Error
c. 600

## Question 7
What is the output of the below code?
````python
class Adder:
    def __init__(self, val = 0):
        self.data = val
    
    def __add__(self, other):
        return self.data + other

x = Adder(4 + 5 * 6)
print (7 + x)
````
### Options
a. 41
b. 61
c. Error

## Question 8
What is the output of the below code?
````python
class Number:
    def __init__(self, start):
        self.data = start
    def __sub__(self, other):
        return Number(self.data - other)
    def __mul__(self, other):
        return Number(self.data * other)
        
x = Number(5)
y = x - 2
z = y * 5
print(y.data, z.data)
````
### Options
a. 5 5
b. 3 15
c. 15 3

## Question 9
What is the output of the below code?
````python
def func(x, y, z):
        return [x + y, x * y, x **y][z]
key = 'one'
print ({'already': func(2, 3, 0),
        'got': func(2, 3, 2),
        'one': func(2, 3, 1)}[key])
````
### Options
a. 6
b. 5
c. 8

## Question 10
What is the output of the below code?
````python
l1 = [ [1, 2, 3], 4, [5], (6, 7, 8)]
nl = []

for val in l1:
    if isinstance(val, (list, tuple)) == True:
        nl.extend(val)
    else:
        nl.append(val)
print (sum(nl))
````
### Options
a. 15
b. 36
c. 11

