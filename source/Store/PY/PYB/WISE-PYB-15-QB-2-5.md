# CFP

## Question 1
What is the output of the below code?
````python
res = 0
for j in range(1, 5): 
    for i in range(j): 
        res += i + j
print(res)
````
### Options
a. 40 
b. 30
c. 10

## Question 2
What is the output of the below code?
````python
l1 = range(1, 20)
print(sum([i for i in filter(lambda x: x % 3, l1)]))
````
### Options
a. 63
b. 127
c. 90

## Question 3
What is the output of the below code?
````python
def myrecursion(n):
    if n == 1:
        return 1
    return n + myrecursion(n // 2 - 1)

print(myrecursion(10))
````
### Options
a. 11
b. 55
c. 15

## Question 4
What is the output of the below code?
````python
class MyClass(object):
    def __init__(self, value, name):
        self.value = value
        self.name = name
    def __gt__(self, other):
        return self.value > other.value
    def __repr__(self):
        return str(self.name)
print(min([MyClass(0x123, 'first'), MyClass(0o123, 'second'), MyClass(123, 'third')]))
````
### Options
a. second
b. third
c. first

## Question 5
What is the output of following program?
````python
class myValues:
    def __init__(self, value):
        self.value = value
        self.setofvalues = set(item for sublist in self.value for item in sublist)

    def __contains__(self, value):
        return value in self.setofvalues
    
a = myValues([ [3, 2, 1], [5, 6, 7], [0, 9, 3]])
print(sum(a.setofvalues), 10 in a, 5 in a)
````
### Options
a. 33 False True
b. 33 True True
c. 31 True False

## Question 6
What is the output of the below code?
````python
class Values:
    def __init__(self):
        self.v1 = 0x10
        self.v2 = 0x20
        self.v3 = 0x30

val1, val2, val3 = Values(), Values(), Values()
val1.v4 = 0x40
res = (hasattr(val1, "v5"), hasattr(val2, 'v4'), hasattr(val3, 'v1'))
print(sum(res))
````
### Options
a. 2
b. 0
c. 1

## Question 7
What is the output of the below code?
````python
fact = lambda n: 1 if n == 0 else n * fact(n - 1)
print(fact(2 ** 0 * 6))
````
### Options
a. 720
b. 120
c. 1

## Question 8
What is the output of the below code?
````python
def myfunc(l):
    return sum(l[:-2])

n1, n2 = 5, 10
n3 = n1 * n2 + 10
mylist = [range(1, n1), range(n1 + 1, n2), range(n1, n3)]
res = 0
for l in mylist:
    res += myfunc(l)
print (res)
````
### Options
a. 1662
b. 1659
c. 1665

## Question 9
What is the output of the below code?
````python
l1 = [5, 5, 6, 7, 7, 7, 8, 9, 7, 6, 4]
s1 = set(l1)

def myfunc(l1):
    if l1 in s1:
        return -1
    else:
        return ""

print(sum(filter(myfunc, l1)))
````
### Options
a. 63
b. 67
c. 71

## Question 10
What is the output of the below code?
````python
class TestAttribs:
    def __init__(self, a, b, c):
        self.X = a + b + c
        
p1, p2 = TestAttribs(6, 7, 8), TestAttribs(6, 7, 8)
x = getattr(p1, 'X')
setattr(p1, 'X', x + 1)
print(p2.X)
````
### Options
a. 21
b. 17
c. 19

