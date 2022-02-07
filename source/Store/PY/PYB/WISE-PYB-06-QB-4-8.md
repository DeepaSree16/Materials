# CFP

## Question 1
What is the output of the below code?
````python
l1, l2, l3 = [1, 2, 3], [1, 4, 9], [1, 16, 27]
print (list(map(lambda x, y, z: x + y + z, l1, l2, l3)))
````
### Options
a. [9, 36, 83]
b. [6, 14, 44]
c. [3, 22, 39]

## Question 2
What is the output of the below code?
````python
def series(num: int, nums: [int]) -> [int]:
    if num > 0:
        series(num - 1, nums)
        nums.append(num)
    return

l1 = []
series(5, l1)
print (l1)
````
### Options
a. []
b. [1, 2, 3, 4, 5]
c. [5, 4, 3, 2, 1]

## Question 3
What is the output of the below code?
````python
l1 = [ [1, 2], [3, 4], [5, 6] ]
total = 0
for mylist in l1:
    for elem in mylist:
        if elem == 3:
            continue
        total += elem
else:
    total *= 2
print (total)
````
### Options
a. 36
b. 28
c. 42

## Question 4
What is the output of the below code?
````python
l1 = range(0, 11, 2)
l2 = range(0, 21, 4)
print (list(filter(lambda x : x not in l2, l1)))
````
### Options
a. [0, 4, 12, 16, 20]
b. [2, 6, 10]
c. [0, 4, 8, 10]

## Question 5
What is the output of following program?
````python
def append_to(element, to=None):
    if to is None:
        to = []
    to.append(element)
    return to

print(append_to(12))
print(append_to(42))
````
### Options
a. Error
b. [12]
[12, 42]
c. [12]
[42]

## Question 6
What is the output of the below code?
````python
def mycalc(v1 = 10, v2 = 20, v3 = 30):
    return v1 * 2 + v2 * 3 - v3

print (mycalc(50))
````
### Options
a. 50
b. 180
c. 130

## Question 7
What is the output of the below code?
````python
def changer(x, y, z):
    x = 2
    y = "three"
    z[0] = 'zero'
    return

v1, v2, l1 = 1, "THREE", [1, 2]

l1 = [1, 2]
changer(v1, v2, l1)
print (v1, v2, l1)
````
### Options
a. 2 THREE ['zero', 2]
b. 1 THREE ['zero', 2]
c. 2 three ['zero', 2]

## Question 8
What is the output of the below code?
````python
def make_mynumber(n):
    return lambda x: x + n

f = make_mynumber(0o42)
print (f(5))
````
### Options
a. 47
b. 39
c. Error

## Question 9
What is the output of the below code?
````python
l1 = [10, 0, 25, 32, 0, 78, 0, 89, 14, 0, 26]

res = [idx for idx, val in enumerate(l1) if val == 0]
print(res)
````
### Options
a. [0, 2, 3, 5, 7, 8, 10]
b. [1, 4, 6, 9]
c. [10, 25, 32, 78, 89, 14, 26]

## Question 10
What is the output of the below code?
````python
def math_formula(r: int):
    return r * (3 * r - 2)
def mymath_func(f, n: int) -> int:
    return f(n)

print (mymath_func(math_formula, 6))
````
### Options
a. 133
b. 176
c. 96

