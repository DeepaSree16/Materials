# CFP

## Question 1
What is the output of the below code?
````python
class MathAdd:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def add(self):
        return self.x + self.y

class MathMul:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def mul(self):
        return self.x * self.y

class MyMath:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.m1 = MathAdd(x, y)
        self.m2 = MathMul(x, y)
    def add(self):
        return self.m1.add()
    def mul(self):
        return self.m2.mul()

m1 = MyMath(3 + 4 * 5, 4 + 6)
print (m1.add(), end = " ")
print (m1.mul())
````
### Options
a. 33 350
b. 45 350
c. 33 230

## Question 2
What is the output of the below code?
````python
l1 = [lambda x: x ** 2, lambda x: x ** 3, lambda x: x ** 4]
vsum, val = 0, 3
for item in l1:
        vsum += item(val)
print(vsum)
````
### Options
a. 28
b. 117
c. 336

## Question 3
What is the output of the below code?
````python
l1 = [ [1, 2, 3], 4, [5], (6, 7, 8)]
nl = []

for val in l1:
    if isinstance(val, list) == True:
        nl.extend(val)
    elif isinstance(val, int):
        nl.append(val)
print (sum(nl))
````
### Options
a. 15
b. 36
c. 11

## Question 4
What is the output of the below code?
````python
key = 'got'
print ({'already': (lambda: 1 + 5),
        'got': (lambda: 2 ** 6),
        'one': (lambda: 2 + 6)}[key]())
````
### Options
a. 8
b. 6
c. 64

## Question 5
What is the output of following program?
````python
def f(x, y, z):
    return x, y, z

print(f(z = 3, y = 2, x = 1))
````
### Options
a. (1, 2, 3)
b. 1 2 3
c. [1, 2, 3]

## Question 6
What is the output of the below code?
````python
class Number: 
    one = 1
    def __init__(self, val): 
        self.val = val 
    def __repr__(self): 
        return "%d %d" % (self.one, self.val)

n = Number(15) 
print(n.__dict__, end = " ")
print(vars(n))
````
### Options
a. {'val': 15} {'val': 15, 'one': 1}
b. {'val': 15, 'one': 1} {'val': 15}
c. {'val': 15} {'val': 15}

## Question 7
What is the output of the below code?
````python
class Adder:
    def __init__(self, val = 0):
        self.data = val
    
    def __add__(self, other):
        return self.data + other

x = Adder(2 + 3 * 4)
print (x + 6)
````
### Options
a. Error
b. 20
c. 26

## Question 8
What is the output of the below code?
````python
class Numbers:
    def __init__(self, x, y, z = 10):
        self.x, self.y, self.z = x, y, z
    def __repr__(self):
        return "%d %d %d" % (self.x, self.y, self.z)
    def getNumbers(self):
        return Numbers(self.x, self.z, self.y)
        
x = Numbers(5, 20)
print (x, end = " ")
print (Numbers(10, 20, 30).getNumbers())
````
### Options
a. 5 20 10 10 30 20
b. 10 20 30 5 20 10
c. 10 30 20 5 20 10

## Question 9
What is the output of the below code?
````python
class Prod:
    def __init__(self, val):
        self.val = val 
    def __call__(self, other):
        return self.val * other

x, y = Prod(4), Prod(5)
print (x(3) * y(4))
````
### Options
a. 108
b. 240
c. 32

## Question 10
What is the output of the below code?
````python
class A:
    counter = 0
    def __init__(self): 
        A.counter += 1
    def __del__(self):
        A.counter -= 1

x = A()
y = A()
z, w = A(), A()

print (A.counter, end = " ")
del x, w
print (z.counter)
````
### Options
a. 4 2
b. 4 1
c. 1 2

