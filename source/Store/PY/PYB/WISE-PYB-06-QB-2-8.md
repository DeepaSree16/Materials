# CFP

## Question 1
What is the output of the below code?
````python
def math_formula(r: int):
    return r * (2 * r - 1)
def mymath_func(f, n: int) -> int:
    return f(n)
def nth_value(n: int) -> int:
    return mymath_func(math_formula, n)

print (nth_value(5))
````
### Options
a. 28
b. 66
c. 45

## Question 2
What is the output of the below code?
````python
l1 = [1, 2, 3, 4]
l2 = [5, 6, 7, 8, 9, 10]
print (list(map(lambda x, y: x * y, l1, l2)))
````
### Options
a. [5, 12, 21, 32, False, False]
b. [5, 12, 21, 32]
c. [5, 12, 21, 32, None, None]

## Question 3
What is the output of the below code?
````python
def swap_values(v1, v2):
    temp = v1
    v1 = v2
    v2 = v1
    return

v1, v2 = 10, 20
swap_values(v1, v2)
print (v1, v2)
````
### Options
a. 10 10
b. 20 10
c. 10 20

## Question 4
What is the output of the below code?
````python
nums1 = [j for i in range(2, 8) for j in range(i*2, 20, i)]
nums2 = [x for x in range(2, 20) if x not in nums1]
print(nums2[5])
````
### Options
a. 11
b. 17
c. 13

## Question 5
What is the output of following program?
````python
def sum_values(v1 = 80, v2 = 30, v3 = 40):
    return v1 + v2 + v3

print (sum_values(10, 20, 70))
````
### Options
a. 150
b. 100
c. 102070

## Question 6
What is the output of the below code?
````python
l1 = [1, 2, 5, 6]
print ([[val, pow(val, 3)] for val in l1[::-1]])
````
### Options
a. [[216, 6], [125, 5], [8, 2], [1, 1]]
b. [[6, 216], [5, 125], [2, 8], [1, 1]]
c. [[1, 1], [2, 8], [5, 125], [6, 216]]

## Question 7
What is the output of the below code?
````python
l1 = [[1, 2], [3, 4, 5], [6, 7, 8, 9]] 
print ([elem[::-1] for elem in l1])
````
### Options
a. [[2, 1], [5, 4, 3], [9, 8, 7, 6]]
b. [[6, 7, 8, 9], [3, 4, 5], [1, 2]]
c. [[9, 8, 7, 6], [5, 4, 3], [2, 1]]

## Question 8
What is the output of the below code?
````python
def mymath(n):
    if n <= 0:
        return 0
    elif n <= 1:
        return 1
    return mymath(n-1) + mymath(n-2) + mymath(n-3)

print(mymath(5))
````
### Options
a. 4
b. 5
c. 7

## Question 9
What is the output of the below code?
````python
for i in range(10, -20, -3):
    if i <= 0:
        break
    else:
        print(i, end = " ")
````
### Options
a. -2 -5 -8 -11 -14 -17
b. 10 7 4 1
c. 10 13

## Question 10
What is the output of the below code?
````python
def process_it(l1):
    l1 = l1 * 2
    return l1

mylist = [1, 2, 3]
print (process_it(mylist))
````
### Options
a. [2, 4, 6]
b. [1, 2, 3]
c. [1, 2, 3, 1, 2, 3]

