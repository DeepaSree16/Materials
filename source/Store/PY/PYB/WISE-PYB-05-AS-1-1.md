# Problem 1

## Problem Statement

Given two strings alpha and beta check if they are circular permutations of each other. For example:
    * "abcde" and "bcdea" are circular permutations, while "abcde" and "abdce" are NOT

**Note:** The problems in this list are from a range of topics. They should be understood clearly and used when you need a filler or a "Wow! Thats kewl!!" reaction.

## Solution

### Python

````python
def isCircularPermutation(a, b):
    return a in b + b
````

# Problem 2

## Problem Statement

A newly constructed jail has 100 cells, numbered 1 to 100.

The newly appointed jailer arrives and decides to walk around as he is bored -- the inmates are yet to arrive.

He notices that all the cells are open. He proceeds to close them, going from cell number 1 to 100 in order.

He returns to the beginning and visits all even numbered cells: 2, 4, 6 .... 100, opening the doors of the visited cells.

Again he returns to the beginning and this times visits cells 3, 6, 9 ... 99. As he encounters both closed and open doors, he closes the open doors and opens the closed doors.

He continues his rounds the same way visiting 4, 8, ... 5, 10, ..., 6, 12 ... till he completes 100 rounds.

Which doors are open and which are closed?

## Discussion

A nested for loop will do the task with a list of 100 elements and adjusting the index or using the cell number as the index and using a list of 101 elements (ignoring index 0).

The most interesting point is how to represent a closed and open cell. A list of booleans is the simplest, as we can write:

    cell[x] = not cell[x]

However if you do not want to use booleans you have three choices:

    * The wordy and clear: if cell[x] == "OPEN":
            cell[x] = "CLOSED"
        else:
            cell[x] = "OPEN"
    * Using 1 and 0
        if cell[x] == 1
            cell[x] = 0
        else:
            cell[x] = 1
    * Using 1 and -1
        if cell[x] == 1
            cell[x] = -1
        else:
            cell[x] = 1
The last two can be rewritten relying on arithmetic, as follows

    Using 1 and 0
        cell[x] = 1 - cell[x]
    Using -1 and 1
        cell[x] *= -1

We can also discuss the readability of these approaches and look
at writing a toggle() function.

## Solution

### Python - Approach 1

````python

jail = []
nCells = 100
Open = True
Closed = False
for i in range(nCells + 1):
    jail.append(Open)

for turn in range(1, nCells + 1):
    for cell in range(turn, nCells + 1, turn):
        jail[cell] = not jail[cell]

for cellnum, cell in enumerate(jail):
    if cell == Closed:
        print(cellnum, end = ' ')
print()

````
### Python - Approach 2

````python

jail = []
nCells = 100
Open = True
Closed = False
for i in range(nCells + 1):
    jail.append(Open)

for cellnum, cell in enumerate(jail):
    for visit in range(1, cellnum + 1):
        if cellnum % visit == 0:
            cell = not cell 
    if cell == Closed:
        print(cellnum, end = ' ')
print()

````

### Python - Approach 3

````python

nCells = 100
for cellnum in range(1, nCells + 1):
    visits = 0
    for visit in range(1, cellnum + 1):
        if cellnum % visit == 0:
            visits += 1
    if visits % 2 == 1:
        print(cellnum, end = ' ')
print()

````
# Problem 3

## Problem Statement


Given a string, write a function to find the rank of the string amongst its permutations sorted lexicographically.
 
**Note:** Assume that no characters are repeated.

## Solution

### Python - Can you optimize the code?

```` python

def fact(n):
    if n == 1 or n == 0:
        return 1
    return n * fact(n-1)

def rank(s):
    n = len(s)-1
    rank = 0
    s1 = sorted(s)
    for i in s:
        ind = s1.index(i)
        rank += ind * fact(n)
        n -= 1
        s1 = s1[:ind] + s1[ind+1:]
    return rank + 1

````

### Python - Ideal Approach

````python

from itertools import permutations
def rankofstring(word):
    permutated_words = sorted([''.join(x) for x in permutations(word)])
    return permutated_words.index(word)+1

````
# Problem 4

## Problem Statement

Given a list of non negative integers, write a function which returns the largest number formed by arranging the elements in the list. 

## Solutions

### Python - Can you optimize this code?

```` python

def largestNumber(listofintegers):
    listofintegers.sort(reverse = True)
    largestnum = listofintegers[0] 
    for i in range(1,len(listofintegers) : 
        largestnum = largestnum * 10 + listofintegers[i] 
    return largestnum


````

### Python - Good Approach

````python

from itertools import permutations 
def largestNumber(listofintegers): 
    return int(max(["".join(map(str,i)) for i in permutations(listofintegers)]))

````

### Python - Ideal Approach

````python

from fractions import Fraction
from math import log10
 
def maxnum(x):
    return ''.join(str(n) for n in sorted(x, reverse=True,
                          key=lambda i: Fraction(i, 10**(int(log10(i))+1)-1)))

````


