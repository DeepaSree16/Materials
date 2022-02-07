# Problem 1

## Background

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once. 

For example, anagrams of word **cat** are **tac, act**.

## Problem Statement

Given an array of strings, write a function to group anagrams together.

**Before solving this problem, think what are limitations of c which makes it difficult to solve.**

## Solutions

### Python - Can you optimize the code?

```` python

def groupAnagrams(words):
    anagrams_dict = defaultdict(list)
    for word in words:
        word = word.lower()
        anagrams_dict["".join(sorted(set(word)))].append(word)
    return list(anagrams_dict.values())

````

### Python - Ideal Approach

````python

from itertools import groupby

def get_anagrams(words):
        return [list(group) for key,group in groupby(sorted(words,key=sorted),sorted)]
````

### Python - Approach without sorting

````python

from collections import defaultdict

def pick_prime(ch):
    prime_numbers =  [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101]
    return prime_numbers[ord(ch) - ord('a')]

def groupAnagrams(words):

    anagrams_groups = defaultdict(list)
    count = 0
    for word in words:
        key = 1
        word = word.lower()
        for letter in word:
            key *= pick_prime(letter)
        anagrams_groups[key].append(word)
    return list(anagrams_groups.values())

````

In above approach, for each char in the string, we can compute the multiplication for one prime number corresponding to the char. In such way, only anagram strings become the same number.

For the prime numbers, we can just precompute since there are only 26 prime numbers we need.

# Problem 2

## Background 

You are given a file that has all 7-letter combinations (lower case only) in sorted order. That is, the first line is **aaaaaaa**, the next is **aaaaaab** ...  the 26th is **aaaaaaz**. Of course **zzzzzzz** is the last.

## Problem Statement

Given a seven letter word determine the line number where it occurs. Please note that there is no need to do any file reading. Your input is a string and the output is the line number where it occurs. That is given "aaaaaaa" the function should return 1, and given "rishabh" it should return 


## Analysis

It is best to look at an analogy. If the file contained 7 digit numbers starting from 0000000 to 9999999, then the answer is obvious. If the file was containing one octal number per line instead, you will be able to calculate the line number by just evaluating the octal number -- that is converting the octal to decimal. Now think of abcde..z as numerals to the base 26. The answer is almost trivial

### Python

````python

def letter_value(ch):
    return ord(ch) - ord('a')

def calc_string_position(s):
    int pos = 0
    for ch in s:
        pos = pos * 26 + letter_value(ch)
    return pos + 1 # Because the first line is 1 and not 0

````

# Problem 3

## Problem Statement

Given a list of words, determine whether the words can be chained to form a circle.

A word X can be placed in front of another word Y in a circle if the last character of X is same as the first character of Y.


For example, the words ['chair', 'height', 'racket', 'touch', 'tunic'] can form the following circle:
chair --> racket --> touch --> height --> tunic --> chair. 

## Solutions

### Python - Ideal Approach

```` python

def checkForCycle(usedWords, remainingWords):
    if len(remainingWords) == 0:
        return True
    
    lastLetter = usedWords[-1][-1]
    for i in range(len(remainingWords)):
        nextWord = remainingWords[i]
        if nextWord.startswith(lastLetter) and checkForCycleHelper(usedWords+[nextWord], remainingWords[:i]+remainingWords[i+1:]):
            return True
    
    return False


def isCycle(words):
    return checkForCycle([words[0]], words[1:])

````

# Problem 4

## Problem Statement

Given a list of points, a central point, and an integer k, write a function which returns the nearest k points from the central point.

For example, given the list of points [(0, 0), (5, 4), (3, 1)], the central point (1, 2), and k = 2, return [(0, 0), (3, 1)].

## Solutions

### Python - Good Approach

```` python

import math


def calculate_distance(a, b):
    return math.sqrt((a[0] - b[0]) ** 2 +(a[1] - b[1]) ** 2)

def get_k_closest_points(points, centralpoint, k):
    if k >= len(centralpoint):
        return centralpoint
    closest_points = sorted(centralpoint, key=lambda x: calculate_distance(points, x))[:k]

    return closest_points

````

# Problem 5

## Problem Statement

Given a string, write a function which returns whether the string represents a number. Here are the different kinds of numbers:

    - "10", a positive integer
    - "-10", a negative integer
    - "10.1", a positive real number
    - "-10.1", a negative real number
    - "1e5", a number in scientific notation

And here are examples of non-numbers:
    
    - "a"
    - "x 1"
    - "a -2"
    - "-"

## Solutions

### Python - Ideal Approach

```` python

import re

def isValidNumber(numStr):
    numStr = numStr.strip()
    regex = re.compile("^[-+]?\d+(\.\d+)?([eE][+-]?\d+(\.\d+)?)?$")
    return regex.match(numStr) != None


````
