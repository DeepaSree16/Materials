# Problem 1

## Problem Statement

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

**Note:** Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

### Solution
    
````python

numbers = {1: 'one', 2: 'two', 3: 'three', 4: 'four', 5: 'five', 6: 'six', 7: 'seven', 8: 'eight', 9: 'nine', 10: 'ten', 11: 'eleven', 12: 'twelve', 13: 'thirteen', 14: 'fourteen', 15: 'fifteen',  16: 'sixteen', 17: 'seventeen', 18: 'eighteen', 19: 'nineteen', 20: 'twenty', 30: 'thirty', 40: 'forty', 50: 'fifty', 60: 'sixty', 70: 'seventy', 80: 'eighty', 90: 'ninety'
    }

    lettersused = ''
    if number >= 1000:
        lettersused += numbers[number / 1000] + ' thousand '
    if number >= 100:
        lettersused += numbers[number / 100] + ' hundred '
        number %= 100
        if not number == 0:
            lettersused += 'and '
    if number >= 20:
        lettersused += numbers[number / 10 * 10] + ' '
        number %= 10
    if number in numbers:
        lettersused += numbers[number]
    return lettersused

print(sum(len(str(num_eng(n)).replace(' ', '')) for n in xrange(1, 1001)))

````

# Problem 2

## Problem Statement

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.

### Solution

````python

LIMIT = 1000
sum(set(range(3, LIMIT, 3)) | set(range(5, LIMIT, 5)))

````

# Problem 3

## Problem Statement

Write a function which returns the occurrance of each letter in a given string.

### Solution

````python
def lettersCount(a: str) -> dict:
    letterscountdict = {}
    for i in a:
            letterscountdict[i] = a.count(i)
    return letterscountdict
````

# Problem 4

## Problem Statement

Write a function which returns the occurance of each words in a given sentence.

### Solution

````python

def wordsCount(sentence:str) -> dict:
    wordscountdict = {}
    indwords = sentence.split(",")
    for i in indwords:
        wordscountdict[i] = indwords.count(i)
    return wordscountdict

```` 

# Problem 5

## Problem Statement

Write a function translate()  that will translate a text into "rovarspraket" (Swedish for "robber's language"). That is, double every consonant and place an occurrence of "o" in between. 

For example, translate("this is fun")  should return the string "tothohisos isos fofunon" .

### Solution

````python
def iscons(a:str) -> bool:
    if a.isalpha():
        return a not in "aeiouAEIOU"
    return False

def translate(a:str) -> str:
    for i in set(a):
        if iscons(i):
            a = a.replace(i, i + "o" + i)
    return a
````
