# CFP

## Question 1
What is the output of the below code?
````python
print([3, 4, 5][bool(0)])
````
### Options
a. 5
b. 4
c. 3

## Question 2
What is the output of the below code?
````python
def myfunc(p = 10, *args):
   return sum(args)
   
print(myfunc(5, 6, 7, 8))
````
### Options
a. 26
b. 21
c. 18

## Question 3
What is the output of the below code?
````python
def myfunc(n):
    if n > 90:
        return n - 4
    return myfunc(myfunc(n + 10))

print(myfunc(45))
````
### Options
a. 89
b. 91
c. 93

## Question 4
What is the output of the below code?
````python
x = 5
def f1():
    global x
    x = 4
def f2():
    x = 10
def f3(a, b):
    global x
    return a + b + x
f1()
f2()
print(f3(7, 8))
````
### Options
a. 19
b. 25
c. 15

## Question 5
What is the output of following program?
````python
print(sum([x + y for x in [1, 2, 3] for y in [3, 4, 5]]))
````
### Options
a. 55
b. 54
c. 56

## Question 6
What is the output of the below code?
````python
l1 = []
a = 10
while True:
    a = a - 1
    l1.append(a)
    if a < 7:
        break
print(sum(set(l1)))
````
### Options
a. 28
b. 26
c. 30

## Question 7
What is the output of the below code?
````python
def make_adder(n):
    def adder(x):
        return n + x
    return adder
add5 = make_adder(5)
def repeatedly_apply(func, n, x):
    for i in range(n):
        x = func(x)
    return x
print(repeatedly_apply(add5, 5, 1))
````
### Options
a. 6
b. 26
c. 16

## Question 8
What is the output of the below code?
````python
def append(elem, to=[]):
    to.append(elem)
    return to

print(append(1), end = " ")
print(append(2), end = " ")
print(append(3, []), end = " ")
print(append(4))
````
### Options
a. [1] [1, 2] [3] [1, 2, 4]
b. [1] [2] [3] [4]
c. [1, 2, 4] [1, 2, 4] [3] [1, 2, 4]

## Question 9
What is the output of the below code?
````python
def func(v1, v2):
    t1 = [1, 2, 3]
    v1 = t1
    t2 = v2
    return id(v1), id(t2)
l1, l2 = ['None', 'True'], [10, 20]
r1, r2 = func(l1, l2)
print(id(l1) == r1, id(l2) == r2)
````
### Options
a. False True
b. True False
c. True True

## Question 10
What is the output of the below code?
````python
l1 = [3, -4, -2, 5, 1, 7]
print(sorted(l1, key = lambda x: abs(x)))
````
### Options
a. [1, -2, 3, -4, 5, 7]
b. [1, 2, 3, 4, 5, 7]
c. [-4, -2, 1, 3, 5, 7]

