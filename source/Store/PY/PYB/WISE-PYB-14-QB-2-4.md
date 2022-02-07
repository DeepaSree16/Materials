# CFP

## Question 1
What is the output of the below code?
````python
class A(object):
    def __init__(self, item):
        self.item = item

    def __eq__(self, other):
        return self.item == other.item
a = A(50)
b = A(3 * 2 ** 3 + 2 ** 3 * 3 + 2 ** 0 + 21 ** 0)
print(a == b, a != b, a is b)
````
### Options
a. True False True
b. True False False
c. False True False

## Question 2
What is the output of the below code?
````python
for i in (0, 1, 2, 3, 4, 5):
    if i == 2 or i == 4:
        continue
    print(i, end = " ")
````
### Options
a. 0 2 4
b. 5
c. 0 1 3 5

## Question 3
What is the output of the below code?
````python
print([2 * (x if x % 2 == 0 else -1) + 1 for x in range(5)])
````
### Options
a. [1, -1, 5, -1, 9]
b. [-1, -3, 3, -3, 7]
c. [-1, 3, -1, 7, -1]

## Question 4
What is the output of the below code?
````python
print([x if x > 2 else '*' for x in range(10) if x % 2 == 0])
````
### Options
````python
a. ['*', 3, 5, 7, 9]
b. ['*', '*', 4, 6, 8]
c. [0, '*', '*', '*', '*']
````

## Question 5
What is the output of following program?
````python
a = [1, 2, 3, 4, 5]
print (a[::-1] == a[5::-1], a[::-1] == a[5:0:-1])
````
### Options
a. True False
b. True True
c. False True

## Question 6
What is the output of the below code?
````python
def shift_list(array, s):
    s %= len(array)
    s *= -1
    return array[s:] + array[:s]

myarray = [1, 2, 3, 4, 5]
print(shift_list(myarray, -7), end = " ")
print(shift_list(myarray, 5))
````
### Options
a. [5, 1, 2, 3, 4] [1, 2, 3, 4, 5]
b. [2, 3, 4, 5, 1] [5, 1, 2, 3, 4]
c. [3, 4, 5, 1, 2] [1, 2, 3, 4, 5]

## Question 7
What is the output of the below code?
````python
v1, v2 = 10, 3
v3 = -10
print(v1 // v2, v1 % v2, end = " ")
print(v3 // v2, v3 % v2)
````
### Options
a. 3 1 -4 2
b. 3 1 -3 -1
c. 3 1 -4 -1

## Question 8
What is the output of the below code?
````python
class AssignValue(object):
    def __init__(self, value):
        self.value = value

my_value = AssignValue(0o16)
print('My value is: {0.value}'.format(my_value))
````
### Options
a. My value is: 16
b. My value is: 14
c. My value is: 0o16

## Question 9
What is the output of the below code?
````python
sentence = "This is a sentence."

print(len(sentence.split('e', maxsplit = 0)), end = " ")
print(len(sentence.split('e', maxsplit = 1)), end = " ")
print(len(sentence.split('e', maxsplit = 2)), end = " ")
print(len(sentence.split('e', maxsplit = 3)), end = " ")
print(len(sentence.split('e', maxsplit = -1)), end = " ")
````
### Options
a. 0 1 2 3 4
b. 1 2 3 4 5
c. 1 2 3 4 4

## Question 10
What is the output of the below code?
````python
s = "She sells seashells by the seashore."
print(s.count("sh"), s.count("se"), s.count("sea"), s.count("seashells"))
````
### Options
a. 3 3 2 1
b. 2 3 2 1
c. 3 3 2 2

