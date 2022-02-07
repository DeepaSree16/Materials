# CFU

## Question 1
What is the output of the below code?
````python
def mathfunc(n: int):
    r = 0
    while r * (r + 1) < n * 2:
        r += 1
    return r * (r + 1) == n * 2

l1 = range(1, 20)
print (list(filter(mathfunc, l1)))
````
### Options
a. [1, 4, 9, 16]
b. [1, 3, 6, 10, 15]
c. [1, 5, 12]

## Question 2
What is the output of the below code?
````python
l1 = {'n1', 'n2'}
l2 = [(1, 2), (3, 4)]
print ({v1: v2 for v1, v2 in zip(l1, l2)})
````
### Options
a. {'n1': (1, 2), 'n2': (3, 4)}
b. {(1, 2): 'n1', (3, 4): 'n2'}
c. {'n2': (1, 2), 'n1': (3, 4)}

## Question 3
What is the output of the below code?
````python
l1 = [1, 4, 9, 16, 25, 36]
sorted(l1)
newlist = map(lambda x: x > 4, l1)
print (list(newlist))
````
### Options
a. [9, 16, 25, 36]
b. [False, False, True, True, True, True]
c. [None, None, 9, 16, 25, 36]

## Question 4
What is the output of following program?
````python
l1 = [10, -25, 28, 45, 29, 50]

import functools
print (functools.reduce(max, l1))
````
### Options
a. -25
b. 10
c. 50

## Question 5
What is the output of following program?
````python
cube = lambda v1: v1 ** 3
print (cube(4))
````
### Options
a. 81
b. Error
c. 64

## Question 6
What is the output of the below code?
````python
d1 = {'a':1, 'b':-2, 'c':-3, 'd':7, 'e':0} 
print (list(filter(lambda x: x[1] >= 0, d1.items())))
````
### Options
a. [('b', -2), ('c', -3)]
b. [('a', 1), ('d', 7), ('e', 0)]
c. [('a', 1), ('d', 7)]

## Question 7
What is the output of the below code?
````python
l1 = [10, 25, 28, 45, 29, 50]

mymin = min(l1)
print (list(map(lambda x: x + mymin, l1)))
````
### Options
a. [10, 25, 28, 45, 29, 50]
b. [15, 30, 33, 50, 34, 55]
c. [20, 35, 38, 55, 39, 60]

## Question 8
What is the output of the below code?
````python
num = 123
print (list(map(list, str(num))))
````
### Options
a. [1, 2, 3]
b. [[1], [2], [3]]
c. [['1'], ['2'], ['3']]

## Question 9
What is the output of the below code?
````python
l1 = [1, 2, 3, 4, 5]
l2 = ['a', 'b', 'c', 'd', 'e']
print({val[0]:val[1] for val in zip(l1, l2)})
````
### Options
a. {'c': 3, 'a': 1, 'd': 4, 'e': 5, 'b': 2}
b. {1: 'a', 2: 'b', 3: 'c', 4: 'd', 5: 'e'}
c. [('a', 1), ('b', 2), ('c', 3), ('d', 4), ('e', 5)]

## Question 10
What is the output of the below code?
````python
l1 = [(3, 5, 7), (1, 3, 5), (5, 7, 9)]
print (sum([x + y + z for x, y, z in l1]))
````
### Options
a. 45
b. [15, 9, 21]
c. [9, 15, 21]

