# CFP

## Question 1
What is the output of the below code?
````python
l1 = [1, 2, 4, 8, 10, 13, 15, 20]
mynums = filter(lambda x: x % 2 == 0, l1)
print(list(mynums), end = " ")
for index in range(len(list(mynums))):
    mynums[index] += 1
print (list(mynums))
````
### Options
a. [2, 4, 8, 10, 20] [2, 3, 5, 9, 11, 14, 16, 21]
b. [2, 4, 8, 10, 20] [3, 5, 9, 11, 21]
c. [2, 4, 8, 10, 20] []

## Question 2
What is the output of the below code?
````python
print(list(map(sum, ([1, 2, 3], (4, 5, 6), {7, 8, 9, 8}))))
````
### Options
a. [6, 15, 24]
b. [6, 15, 32]
c. (6, 15, 24)

## Question 3
What is the output of the below code?
````python
def myfunc(val, l1 = []):
    l1.append(val)
    return l1

for val in range(1, 4):
    print(myfunc(val), end = " ")
````
### Options
a. [1, 2, 3]
b. [1] [2] [3]
c. [1] [1, 2] [1, 2, 3]

## Question 4
What is the output of the below code?
````python
for i in reversed(range(1, 10, 2)):
    print(i, end = " ")
````
### Options
a. 1 3 6 12 18 30
b. 1 3 5 7 9
c. 9 7 5 3 1

## Question 5
What is the output of following program?
````python
basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for f in sorted(set(basket)):
    print(f, end = " ")
````
### Options
a. apple banana orange pear
b. orange pear banana
c. apple apple banana orange orange pear

## Question 6
What is the output of the below code?
````python
nsum = 0
for n in range(2, 20):
    for x in range(2, n // 2):
        if n % x == 0:
            break
    else:
        nsum += n
else:
    print(nsum)
````
### Options
a. 104
b. 62
c. 81

## Question 7
What is the output of the below code?
````python
vec = [ [1, 2, 3], [4, 5, 6], [7, 8, 9]]
print ([num for elem in vec for num in elem])
````
### Options
a. [1, 2, 3, 4, 5, 6, 7, 8, 9]
b. [1, 4, 7, 2, 5, 8, 3, 6, 9]
c. [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

## Question 8
What is the output of the below code?
````python
def myfunc(funcname, val):
    return funcname(val)

print(myfunc(max, [1, 2, 3]), end = " ")
print(myfunc(min, [1, 2, 3]))
````
### Options
a. 3 3
b. 3 1
c. 1 3

## Question 9
What is the output of the below code?
````python
print ([(x, x**3)[::-1] for x in range(5)])
````
### Options
a. [(0, 0), (1, 1), (2, 8), (3, 27), (4, 64)]
b. [(0, 0), (1, 1), (8, 2), (27, 3), (64, 4)]
c. [(4, 64), (3, 27), (2, 8), (1, 1), (0, 0)]

## Question 10
What is the output of the below code?
````python
def f(val, L=None):
    if L is None:
        L = []
    L.insert(-1, val)
    return L

l1 = [10, 20, 30]
print(f(1, l1), end = " ")
print(f(2))
````
### Options
a. [10, 20, 1, 30] [2]
b. [10, 20, 30, 1] [2]
c. [10, 20, 30, 1, 2]

