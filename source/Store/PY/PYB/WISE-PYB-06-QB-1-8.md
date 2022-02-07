# CFP

## Question 1
What is the output of the below code?
````python
def process_list(l1, val):
    l1.append(val)
    return

l1 = [10, 20, 30]
process_list(l1, 40)
print (l1)
````
### Options
a. 60
b. [10, 20, 30, 40]
c. [10, 20, 30]

## Question 2
What is the output of the below code?
````python
def sum_values(v1, v2 = 30, v3 = 40):
    return v1 + v2 + v3

print (sum_values(30, 50, 120))
````
### Options
a. 303040
b. 100
c. 200

## Question 3
What is the output of the below code?
````python
def mymath(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    return mymath(n-1) + mymath(n-2)

print (mymath(6))
````
### Options
a. 8
b. 13
c. 5

## Question 4
Which of the below statement is false with regard to filter function?
### Options
a. Filter function argument function object returns a boolean value and is called for each element of the iterable.
b. Filter returns only those elements for which the function object returns true.
c. Filter can accept multiple iterables as input.

## Question 5
What is the output of following program?
````python
l1 = [21, 19, 18, 46, 6, 29]
print (list(filter(lambda x: x % 3 == 1, l1)))
````
### Options
a. [19, 46]
b. [21, 18, 6, 29]
c. Map object

## Question 6
What is the output of the below code?
````python
mul = lambda x, y, z: x * y * z
print (type(mul))
````
### Options
a. <class 'str'>
b. <class 'function'>
c. <class 'int'>

## Question 7
What is the output of the below code?
````python
def myfactors(n: int) -> [int]:
    l1 = []
    while n % 2 == 0:
        l1.append(2)
        n = n // 2
    
    for val in range(3, n // 2):
        while n % val == 0:
            l1.append(val)
            n = n / val
    if n > 2:
        l1.append(n)
    return l1

print (myfactors(315))
````
### Options
a. [7, 5, 3, 3]
b. [1, 3, 3, 5, 7]
c. [3, 3, 5, 7]

## Question 8
What is the output of the below code?
````python
for i in range(1, 6):
    if i == 3: 
        continue
    else: 
        print(i, end = " ")
````
### Options
a. 1 2 3 4 5
b. 1 2 
c. 1 2 4 5

## Question 9
What is the output of the below code?
````python
def process_it(l1):
    l1 = [1, 2, 3]
    return l1

mylist = [10, 20, 30]
process_it(mylist)
print (mylist)
````
### Options
a. [10, 20, 30]
b. [1, 2, 3]
c. None

## Question 10
What is the output of the below code?
````python
def math_formula(r: int):
    return r * (3 * r - 1) // 2
def mymath_func(f, n: int) -> int:
    return f(n)
def nth_value(n: int) -> int:
    return mymath_func(math_formula, n)

print (nth_value(6))
````
### Options
a. 35
b. 51
c. 70

