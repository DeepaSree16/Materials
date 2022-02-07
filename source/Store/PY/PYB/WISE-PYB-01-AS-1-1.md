# Problem 1

## Background

A pair of numbers α and β are called amicable if the sum of the proper divisors of α is equal to β **and** the sum of proper divisors of β is equal to α.

For example, 1184 and 1210 form an amicable pair

 * 1184 has the divisors, 1, 2, 4, 8, 16, 32, 37, 74, 148, 296 and 592 which sum to 1210 and
 * 1210 has the divisors, 1, 2, 5, 10, 11, 22, 55, 110, 121, 242 and 605 which sum to 1184.

<i>Note: The sum of proper factors of a number is also known as the *aliquot* of a number.</i>


## Problem Statement

Write a function to check whether given pair is amicable.


## Analysis

The naive implementation for finding the aliquot will check for factors from 1 to n - 1; some people will figure out that there can be no factor larger than n/2 and use that as the upper limit. But we can do a lot better, by observing that for every factor of n smaller than the square root of n, say f, n/f is a factor too. So there is no need to look for factors beyond square root of n.

A small but important detail is to ensure that for perfect squares we do not add the square root factor twice.

A trivial optimization is not to test for divisibility by 1!

### Python

````python

def aliquot(n):
    aliq = 1
    r = 2
    while r * r < n:
        if n % r == 0:
            aliq += r + n//r
        r += 1
    if n % r == 0:
        aliq += r
    return aliq

def is_amicable(a, b):
    return aliquot(a) == b and aliquot(b) == a

````

# Problem 2

## Problem Statement

Write a function that transforms the input string as follows: 

   1. changes all vowels to lower case
   2. changes all consonants to upper case

The function should return the transformed string


## Solutions

### Python - What is wrong with the code?

````python

def convertCase(string):
    aList = list(string)
    for i in range(len(aList)): 
        if aList[i] in 'aeiouAEIOU':
            aList[i] = aList[i].lower() 
        else:
            aList[i] = aList[i].upper() 
    return "".join(aList)
  

````

Following are the disadvantages with the above code or approach:

* Bad Naming
* Using the auxillary memory 
* Converting a string into a list is bad idea because string is internally a list. 

### Python - Good Code

```` python

def is_vowel(letter):
    return letter in "aeiouAEIOU"

def convertCase(string):
    for letter in string:
        if is_vowel(letter):
            string = string.replace(letter,letter.lower())
        else:
            string = string.replace(letter,letter.upper())
    return string

````

### Python - Ideal Approach 

```` python
def convertCase(string):
    return (''.join(letter.lower() if letter in 'aeiouAEIOU' else letter.upper() for letter in string))

````

# Problem 3

## Problem Statement

Write a function that transforms the input (array of three words) as follows: 

    - Replace all the vowels in first word by $
    - Replace all consonants in second word by #
    - Covert all  characters in third word to upper case
    - Then concatenate the three words

The function should return the concatenated string

## Solutions

### Python

```` python

def replaceVowels(word):
    return (''.join('$' if ch.lower() in 'aeiou' else ch for ch in word))
  

def replaceconsonant(word):
    return (''.join('#' if ch.lower() in 'bcdfghjklmnpqrstvwxyz' else ch for ch in word))
           

def transformStrings(array):
    return (replaceVowels(array[0]) + replaceconsonant(array[1]) + array[2].upper())

````
# Problem 4

## Problem Statement

To multiply two numbers, say 18 and 85, write them in two columns. Divide the first column  by 2 and multiply the second column by 2. When dividing ignore remainder, but if remainder is 1 make a PLUS mark against that row. Stop when first column is 1 (marking that row with a PLUS).

Now add all numbers in the second column, in those rows marked with a PLUS.
The total is the product. Thus knowing to divide by 2, multiply by 2 and 
adding we can multiply any two numbers.

   18     85
   
   9    170 +
   
   4    340 
   
   2    680
   
   1   1360 +
  
   ===========
   
       1530
 
   ============

Write a program to accept the two numbers and generate the tableau.

### Python

````python
a = 18
b = 85
PLUS = '+'
SPACE = ' '
total = 0
while a > 0:
    if a % 2 == 1:
        sign = PLUS
        total += b
    else:
        sign = SPACE
    print('{:5} {:5}'.format(a, b), sign)
    a //=2
    b *= 2
print('{:11}'.format(total))

````
