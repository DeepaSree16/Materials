# CFP

## Question 1
What is the output of the below code?
````python
def isValid(s: str) -> bool:
    return all(x[0] <= x[1] for x in zip(s, s[5:]))

print(isValid("HELLoPYThon"))
````
### Options
a. True
b. False
c. Error

## Question 2
What is the output of the below code?
````python
l = (lambda x, y: x if x < y else y)
print(l("aabac", "aaaac"))
````
### Options
a. aaaac
b. aabac
c. aaaacaabac

## Question 3
What is the output of the below code?
````python
print (pow(-4, 4), pow(3, 4, 10))
````
### Options
a. 256 91
b. 256 1
c. -64 91

## Question 4
What is the output of the below code?
````python
class A(object):
    def f(self, x, y):
        return x ** y ** 2
print(A().f(2, 4))
````
### Options
a. 65536
b. 256
c. 16

## Question 5
What is the output of following program?
````python
class D(object):
    multiplier = 2
    @classmethod
    def f(cls, x):
        cls.multiplier *= x
        return cls.multiplier
D.f(12)
d = D()
d.multiplier = 1234
print(D.multiplier, d.multiplier)
````
### Options
a. 24 1234
b. 12 1234
c. 24 24

## Question 6
What is the output of the below code?
````python
l = [1, 2, 3]
l[1:2] = [4, 5]
l[1:1] = [6, 7]
l[1:2] = []
print (l)
````
### Options
a. [1, 7, 4, 5, 3]
b. [1, 7, 4, 5]
c. [1, 4, 5, 3]

## Question 7
What is the output of the below code?
````python
class update:
    def __init__(self, v1, v2, v3 = 2):
        self.w = v1 ** v2 ** v3

x = update(2, 3)
y = getattr(x, 'w')
setattr(x, 'w', y + 8)
print(x.w)
````
### Options
a. 72
b. 520
c. 20

## Question 8
What is the output of the below code?
````python
def sumtree(l):
    tot = 0
    for x in l:
        if not isinstance(x, list):
            tot += x
        else:
            tot += sumtree(x)
    return tot

L = [1, [2, [3, 4], 5], 6, [7, 8]]
print(sumtree(L), end = " ")
print(sumtree([1, [2, [3, [4, [5]]]]]), end = " ")
print(sumtree([[[[[[1], 2], 3], 4], 5], 6]))
````
### Options
a. 36 9 18
b. 15 5 6
c. 36 15 21

## Question 9
What is the output of the below code?
````python
class Adder:
    def __init__(self, val = 0):
        self.data = val
    
    def __radd__(self, other):
        return self.data + other

x = Adder(3 + 4 * 5)
print (7 + x)
````
### Options
a. Error
b. 30
c. 42

## Question 10
What is the output of the below code?
````python
l1 = [lambda x, y=3: x ** y, lambda x=4, y=4: x * y]
print(l1[0](2), end = " ")
print(l1[0](4, 4), end = " ")
print(l1[1]())

````
### Options
a. 6 16 256
b. 6 16 16
c. 8 256 16

