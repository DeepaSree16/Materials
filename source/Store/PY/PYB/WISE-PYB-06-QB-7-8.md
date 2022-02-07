# CFU

## Question 1
What is the output of the below code?
````python
l1 = [(1, 1, 2), (2, 2, 4), (3, 3, 9)]
print (list(map(lambda x: sum(x), l1)))
````
### Options
a. 27
b. [4, 8, 15]
c. [6, 6, 15]

## Question 2
What is the output of the below code?
````python
l1 = [1, 3, 4, 5, 7, 15] 
l2 = [2, 3, 5, 6, 9, 15] 
print (list(filter(lambda x: x in l1, l2)))
````
### Options
a. [3, 5, 15]
b. [2, 6, 9]
c. [15, 5, 3]

## Question 3
What is the output of the below code?
````python
l1 = [0, 1, 2]
l2 = [0, 1, 3]
print ({v1:v2 for v1, v2, v3 in zip(l1, l2, range(1, 6))})
````
### Options
a. {0: 0, 1: 1, 2: 3, 0:4, 0:5}
b. {0: 0, 1: 1, 2: 3}
c. {0: 1, 1: 2, 3: 3}

## Question 4
What is the output of the below code?
````python
def myfunc(base, index):
    return base ** index

bases = [2, 3, 4, 5]
index = [1, 2, 3, 4]
print (list(map(myfunc, bases, index)))
````
### Options
a. [2, 6, 12, 20]
b. [2, 9, 64, 625]
c. [3, 5, 7, 9]

## Question 5
What is the output of the below code?
````python
myfunc = lambda r:  r * (3 * r - 1) // 2
print (myfunc(8))
````
### Options
a. Error
b. 92
c. 35

## Question 6
What is the output of the below code?
````python
l1 = [6, 9, 11, 57, 35, 10] 
print (list(filter(lambda x: x % 2 != 0, l1)) ) 
````
### Options
a. [11, 35, 10]
b. [6, 10]
c. [9, 11, 57, 35]

## Question 7
What is the data type after execution of below code?
````python
l1 = [12, 15, 25]
l2 = [144, 225, 625]
print (type({v2 for v1, v2 in zip(l1, l2)}))
````
### Options
a. <class 'dict'>
b. <class 'set'>
c. <class 'list'>

## Question 8
What is the output of the below code?
````python
print ([y for y in range(50) if y % 3 == 0 if y % 5 == 0])
````
### Options
a. [5, 10, 20, 25, 35, 40]
b. Error
c. [0, 15, 30, 45]

## Question 9
What is the output of the below code?
````python
matrix = [[1, 2], [3,4], [5,6], [7,8]]
print ([[row[i] for row in matrix] for i in range(2)])
````
### Options
a. [[1, 2, 3, 4], [5, 6, 7, 8]]
b. [[1, 3, 5, 7], [2, 4, 6, 8]]
c. [[2, 4, 6, 8], [1, 2, 3, 4]]

## Question 10
What is the output of the below code?
````python
l1 = [(3, 5, 7), (1, 3, 5), (5, 7, 9)]
print ([x[0] * x[2] for x in l1])
````
### Options
a. 71
b. [15, 35, 63]
c. [21, 5, 45]

