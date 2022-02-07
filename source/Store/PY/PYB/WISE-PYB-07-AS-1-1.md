# Problem 1

## Problem Statement

Find the most frequently occurring words in a text file.

## Focus

    * Reading files and using dictionaries
    * No special points to cover; except the definition of a word is simplistic.

## Solution

### Python

````python

APOSTROPHE = "'"
SPACE = ' '
permitted = "abcdefghijklmnopqrstuvwxyz"  + SPACE + APOSTROPHE
textFile = 'WarAndPeace.txt'
words = {}

for line in open(textFile):
    cleanedLine = ''.join([ch for ch in line.lower() if ch in permitted])
    for word in cleanedLine.split():
        if word not in words:
            words[word] = 0
        words[word] += 1

i = 0
for word in sorted(words, key = lambda w: words[w], reverse = True):
    print('%-20s %6d' %(word, words[word]))
    i += 1
    if i == 9: break

````

# Problem 2

## Problem Statement

Given a large file, say the quarter-million words sowpods, find all anagrams.

**In other words,**

**INPUT:** a file with each line having one word

**OUTPUT:** each line having many words where the words in a line are anagrams of each other.

**Sample input:** cloud ditto plus could spear reaps pulls spare

**Output:** cloud could spare spear reaps

Start by asking students to write a function that checks if two words are
anagrams of each other.

    * Solution :: sorted(a) == sorted(b)

### Typical Errors

    * Some students will strike upon the idea of using set(a) == set(b). Ask them to check, 'leap' and 'lapel'. Some will correct this to say len(a) == len(b) and set(a) == set(b). Check 'costs' and 'scoot'!
    * But comparing all combinations of two strings will lead to more than 35 billion comparisons! So this function cannot be used for the full problem.

## Approach

The correct way is to build a dictionary with the key as the sorted string of all letters in a word and the value as a list of all words that can be made up of those letters:

    words['eoprs'] = ['spore', 'ropes', 'pores']

After building it, go through it picking those values that are having more than one string. 

## Solution

### Python

````python

possible = {}
for line in open('sowpods.txt'):
    word = line.strip().lower()
    letters = ''.join(sorted(word))
    if letters not in possible:
        possible[letters] = []
    possible[letters].append(word)
for anagram in (possible[key] for key in possible if len(possible[key]) > 1):
    anagram.sort()
    print(anagram)

````
