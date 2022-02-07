# CFU

## Question 1
What is the output of the below code?
````python
def convert(digits): 
    return "".join(ele if ele.isdigit() else "" for ele in digits) 
  
test_list = ["[1, 4]", "[5, 6]", "[7, 10]"] 
res = list(map(convert, test_list)) 
print(str(res))
````

### Options
a. ['14', '56', '7', '10']
b. ['14', '56', '710']
c. [14, 56, 710]

## Question 2
What is the output of the below code?
````python
l1 = [0, 5, 2, 0, 'one', '', [], None, 1, {}] 
print(list(filter(bool, l1))) 
````
### Options
a. [5, 2, 'one', 1]
b. [5, 2, 'one', [], 1, {}]
c. [5, 2, 'one', None, 1]

## Question 3
What is the output of the below code?
````python
def func(l1, l2):
    return l1 + l2

print (sum(map(func, [2, 4, 5], [1, 2, 3])))
````
### Options
a. [3, 6, 8]
b. 17
c. Error

## Question 4
What is the output of the below code?
````python
def call(val, func):
    return func(val)
def square(val):
    return val * val
def cube(val):
    return val * val * val

funcs = [square, cube, square]
from functools import reduce 
print(reduce(call, funcs, 2))
````
### Options
a. 64
b. 4096
c. 8192

## Question 5
What is the output of following program?
````python
def AddNumbers(n1, n2):
    return n1 + n2
def DoubleNumber(val):
    return val + val
def CheckNumbers(num):
    return num >= 3

from functools import reduce
print (reduce(AddNumbers, map(DoubleNumber, filter(CheckNumbers, [1, 2, 3, 4, 5]))))
````
### Options
a. 30
b. [6, 8, 10]
c. 24

## Question 6
What is the output of the below code?
````python
def DoubleNumber(val):
    return val + val
def CheckNumbers(num):
    return num >= 3
print (list(map(DoubleNumber, filter(CheckNumbers, [1,2,3,4]))))
````
### Options
a. [3, 4]
b. [6, 8]
c. [1, 2, 3, 4]

## Question 7
What is the output of the below code?
````python
program = ['wise', 'at', 'bvrit'] 
upperwords = [word[0].upper() for word in program] 
print(upperwords)
````
### Options
a. ['WISE', 'AT', 'BVRIT']
b. ['WISE']
c. ['W', 'A', 'B']

## Question 8
What is the output of the below code?
````python
data1 = [val for val in range(5)] 
data2 = [val for val in range(7) if val in data1 and val % 2 == 0] 
print(data2)
````
### Options
a. [0, 2, 4, 6]
b. [0, 2, 4]
c. [0, 1, 2, 3, 4]

## Question 9
What is the output of the below code?
````python
l1 = [5, 5, 6, 7, 7, 7]
s1 = set(l1)
def test(lst):
    if lst in s1:
        return 1
    return 0
for val in  filter(test, s1):
    print(val, end=" ")
````
### Options
a. 5 5 6 7 7 7
b. 37
c. 5 6 7

## Question 10
What is the output of the below code?
````python
data = [2, 3, 9] 
print ([[val for val in data] for val in range(3)] )
````
### Options
a. [[2, 3, 9], [2, 3, 9], [2, 3, 9]]
b. [[2, 3, 9]], [[2, 3, 9]], [[2, 3, 9]]
c. [[2, 3, 9, 2, 3, 9, 2, 3, 9] ]


