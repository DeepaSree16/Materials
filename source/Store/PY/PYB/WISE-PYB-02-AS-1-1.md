# Problem 1

## Problem Statement

Write a function which returns the individual digits of a given number. For example,

````python

123 -> [1, 2, 3]

````

### Solution

````python

def num2digits(n: int) -> [int]:
    if n < 10:
        return [n]
    return num2digits(n//10) + [n % 10]

````

# Problem 2

## Problem Statement

Write a function which returns the number from digits. For example, 

````python

[1, 2, 3] -> 123

````

### Solution

````python

def digits2num(a: [int]) -> int:
    if len(a) == 1:
        return a[-1]
    return digits2num(a[:-1]) * 10 + a[-1]

````

# Problem 3

## Problem Statement

Write a function which check whether a given number is power of 2 or not

### Solution

````python

def is_power_of2(n: int) -> bool:
    if n == 1:
        return True
    if n % 2 != 0:
        return False
    return is_power_of2(n // 2)

````

#### Power of n

````python

def is_power_of(n: int, x: int) -> bool:
    if n == 1:
        return True
    if n % x != 0:
        return False
    return is_power_of(n // x)
````

# Problem 4

## Problem Statement

Write a function which checks whether a given string is anagram or not.

### Solution

````python

def is_anagram(word1: str, word2: str) -> bool:
    return sorted(word1) == sorted(word2)

````

# Problem 5

## Problem Statement

Write a function which returns the length of an integer.

### Solution

````python

def size(n: int) -> int:
    if n < 10:
        return 1
    return size(n // 10) + 1

```` 

# Problem 6

## Background

The Collatz sequence, also called the Hailstone sequence. Collatz sequence is defined corresponding to n as the numbers formed by the following operations :

* If n is even, then n = n / 2
* If n is odd, then n = 3 * n + 1
* Repeat above steps, until it becomes 1

## Problem Statement

Write a function which returns the collatz sequence for a given number.

## Solution

````python

def nextcollatz(number: int) -> int:
    if number % 2 == 0:
        return number // 2
    return 3 * number + 1


def collatzSequence(number: int) -> list:
    if number == 4:
        return [4, 2, 1]
    return [number] + collatzSequence(nextcollatz(number))

````

# Problem 7

## Problem Statement

Write a function which returns the count of vowels in a given string.

### Solution

````python

def isvowel(a:str) -> bool:
    return a in "aeiouAEIOU"

def vowelCount(a:str) -> int:
    answer = 0
    for letter in a:
        if isvowel(letter):
            answer = answer + 1
    return answer

````
