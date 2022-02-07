# CFU

## Question 1

What is the output of the below code?

````python

numbers = [9999, 33, 55]
numbers.insert(0, 66)

````

### Options

a. [66, 9999, 33, 55]
b. [9999, 33, 55, 66]
c. [9999, 33, 66, 55]

## Question 2

Which of the following is not a string method?

### Options

a. split()
b. len()
c. append()

## Question 3

What is the output of the below code?

````python

sentence = "Good blood, Bad blood"
x = 0
for word in sentence:
    if word.istitle():
        x = x + 1
print(x)

````

### Options

a. 2
b. 4
c. 20

## Question 4

What is the output of the below code?

````python
a = [1, 2, 3, 4, 5]
print(a[3:0:-1])

````
### Options

a. [4, 3]
b. [4, 3, 2, 1]
c. [4, 3, 2]

## Question 5

What is the output of the below code?

````python
word = "flying"
word.zfill(9)

````

### Options

a. 000flying
b. flying000
c. 000000000flying

## Question 6

What is the output of the below code?

````python

print('+', "Hurray".center(3), '+')

````

### Options

a. + Hurray +
b. +   Hurray  +
c. +     Hurray   +

## Question 7

What is the output of the below code?

````python

print('The sum of {0} and {1} is {2}'.format(2, 66, 68))

````

### Options

a. The sum of 2 and 66 is 68
b. The sum of 0 and 1 is 2
c. Error

## Question 8

What is the output of the below code?

````python

s = '$#!'
n = 1
for c in s:
    print (c * n, end=" ")
    n = n + 1

````

### Options

a. $ ## !!!
b. $ # !
c. $$ ### !!!!

## Question 9

What is the output of the below code?

````python

words = ["kite", "session", "fly", "coding", ["problem", "agenda", "week"]]
words.index("agenda")

````

### Options

a. 5
b. 2
c. Error

## Question 10

What is the output of the below code?

````python

words = ["kite", "session", "fly", "coding", ["problem", "agenda", "week"]]
word[-1][::-1][2]

````

### Options

a. week
b. problem
c. ["problem", "agenda", "week"]

