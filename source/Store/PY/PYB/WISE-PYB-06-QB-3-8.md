# CFP

## Question 1
What is the output of the below code?
````python
l1 = [6, 7, 0, 1, 0, 2, 0, 12]

res = [idx for idx, val in enumerate(l1) if val != 0]
print(res) 
````
### Options
a. [6, 7, 1, 2, 12]
b. [2, 4, 6]
c. [0, 1, 3, 5, 7]

## Question 2
What is the output of the below code?
````python
def func_default_list(l=[0, 1, 2], v=3):
    l.append(v)
    return l

func_default_list([0, 0, 0], 100)
func_default_list()
print (func_default_list())
````
### Options
a. [0, 1, 2, 3]
b. [0, 1, 2, 3, 3]
c. [0, 0, 0, 100, 3]

## Question 3
What is the output of the below code?
````python
def append_to(element, to=[]):
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

## Question 4
What is the output of the below code?
````python
elements = {'hydrogen':1, 'helium':2, 'carbon':6}
print (list(map(lambda x:x.title(),elements)))
````
### Options
a. {'Hydrogen': 1, 'Helium': 2, 'Carbon': 6}
b. ['HYDROGEN', 'HELIUM', 'CARBON']
c. ['Hydrogen', 'Helium', 'Carbon']

## Question 5
What is the output of following program?
````python
def myArithmetic(data_list):
    total = 0
    for element in data_list:
        if type(element) == type([]):
            total = total + myArithmetic(element)
        else:
            total = total + element
    return total

print(myArithmetic([1, 2, [3,4],[5,6]]))
````
### Options
a. 18
b. 3
c. 21

## Question 6
What is the output of the below code?
````python
l1 = [ [1, 2], [3, 4], [5, 6] ]
total = 0
for mylist in l1:
    for elem in mylist:
        if elem == 3:
            break
        total += elem
else:
    total *= 2
print (total)
````
### Options
a. 42
b. 28
c. 14

## Question 7
What is the output of the below code?
````python
def is_mynumber(n: int):
        r = 0
        while r * (3 * r - 2) < n:
                r += 1
        return r * (3 * r - 2) == n

print (list(filter(is_mynumber, [1, 5, 8, 12, 21, 22, 35, 40, 65])))
````
### Options
a. [1, 5, 21, 22, 65]
b. [1, 8, 21, 40, 65]
c. [1, 5, 12, 22, 35]

## Question 8
What is the output of the below code?
````python
l1 = [[1, 2], [3, 4, 5], [6, 7, 8, 9]] 
print ([elem[::-1] for elem in l1[::-1]])
````
### Options
a. [[6, 7, 8, 9], [3, 4, 5], [1, 2]]
b. [[2, 1], [5, 4, 3], [9, 8, 7, 6]]
c. [[9, 8, 7, 6], [5, 4, 3], [2, 1]]

## Question 9
What is the output of the below code?
````python
square = lambda x: x * x
cube = lambda func: func ** 3

print(cube(square(2)))
````
### Options
a. 64
b. 8
c. 12

## Question 10
What is the output of the below code?
````python
def series(num: int, nums: [int]) -> [int]:
    if num > 0:
        nums.append(num)
        series(num - 1, nums)
    return
    
l1 = []
series(5, l1)
print (l1)
````
### Options
a. [5, 4, 3, 2, 1]
b. [1, 2, 3, 4, 5]
c. []

