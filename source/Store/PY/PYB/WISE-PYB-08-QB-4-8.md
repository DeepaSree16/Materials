# CFP

## Question 1
What is the output of the below code?
````python
class A(object):
    def __init__(self, x):
        self.x = x
    def __add__(self, other):
        return A(self.x + other.x)
    def __iadd__(self, other):
        self.x += other.x
        return A(self.x)

x, y = A(32), A(3)
print (x.x, y.x, end = " ")
x += y
print (x.x, y.x)
````
### Options
a. 35 5 35 5
b. 32 3 35 3
c. 32 3 35 5

## Question 2
What is the output of the below code?
````python
def mycalc(x):
    return ~x

print(mycalc(0o27), end = " ")
print(mycalc(0x12), end = " ")
print(mycalc(123))
````
### Options
a. -24 18 -124
b. 23 18 4
c. -24 -19 -124

## Question 3
What is the output of the below code?
````python
class D(object):
    @staticmethod
    def is_date_valid(datestr):
        day, month, year = map(int, datestr.split('-'))
        return day <= 31 and month <= 12 and year <= 3999

    @staticmethod
    def g(name):
        return "Hello -> %s" % name

d = D()
is_date = d.is_date_valid('11-09-2012')
print (d.g("Python is"), is_date)
````
### Options
a. Hello -> Python is 11-09-2012
b. Hello -> Python is True
c. Hello -> Python is False

## Question 4
What is the output of the below code?
````python
class Rectangle2D(object):
    def __init__(self, width, height, pos=[5, 0], color='blue'):
        self.width = width
        self.height = height
        self.pos = pos
        self.color = color

r1 = Rectangle2D(5, 3)
r2 = Rectangle2D(7, 8)

r1.pos[0] = 4
print(r1.pos, end = " ")
print(r2.pos)
````
### Options
a. [4, 0] [4, 0]
b. [4, 0] [5, 0]
c. [5, 0] [5, 0]

## Question 5
What is the output of following program?
````python
class D:
    x = []
    def __init__(self, item):
        self.x.append(item)

d1 = D(3)
d2 = D(4)
print(sum(d1.x + d2.x + D.x))
````
### Options
a. 14
b. 7
c. 21

## Question 6
What is the output of the below code?
````python
def product(*nums, start = 1):
    res = start
    for n in nums:
        res *= n
    return res

print(product(5, 7, 3, start = 2), end = " ")
print(product(4, 6), end = " ")
print(product(2, 5, 4, start = 3))
````
### Options
a. 210 24 40
b. 210 24 120
c. 105 24 40

## Question 7
What is the output of the below code?
````python
l1 = [1, 3, 6, 10, 14, 16]
rl = (x ** 2 for x in l1 if x <= 10)
print (list(rl))
````
### Options
a. [1, 9, 36, 100, 196, 256]
b. [1, 9, 36]
c. [1, 9, 36, 100]

## Question 8
What is the output of the below code?
````python
print(list(map(abs, [-1, -2, 0, 1, 2])))
````
### Options
a. [0, 1, 2]
b. [-1, -2, 0, 1, 2]
c. [1, 2, 0, 1, 2]

## Question 9
What is the output of the below code?
````python
l = lambda x, y: x if x > y else y
print(l("aabac", "aaaac"))
````
### Options
a. aaaac
b. aabac
c. aaaacaabac

## Question 10
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
            items.extend(front)
    return tot

L = [1, [2, [3, 4], 5], 6, [7, 8]]
print(sumtree(L), end = " ")
print(sumtree([1, [2, [3, [4, [5]]]]]), end = " ")
print(sumtree([[[[[[1], 2], 3], 4], 5], 6]))
````
### Options
a. 14 15 11
b. 7 1 6
c. 36 15 21

