# Problem 1

## Problem Statement


Given a string consisting of only 0, 1, A, B, C where

    A = AND

    B = OR

    C = XOR

Write a function to calculate the value of the string assuming no order of precedence and evaluation is done from left to right.

#### Note:

    * Return -1, if the length of the string is odd.
    * Return -1, if the string is not a valid string. For example, *'1AA0'* is not a valid string and *'1C1B1B0A0'* is a valid string.


## Solutions

### Python 

```` python

def Evaluating_String(string):
    optionsdict = {'A':'&','B':'|','C':'^'}
    if len(string) % 2 != 0:
        return -1
    if len(string) == 1:
        return string
    for index in range(len(string)):
        if string[index] in "ABC":
            if string[index] == string[index + 1]:
                return -1
            string = string.replace(string[index],optionsdict[string[index]])
    return Evaluating_String(string.replace(string[:3], str(eval(string[:3]))))


````

# Problem 2

## Background 

Kaprekar constant, or 6174, is a constant that arises when we take a 4-digit integer, form the largest and smallest numbers from its digits, and then subtract these two numbers. Continuing with this process of forming and subtracting, we will always arrive at the number 6174.

## Problem Statement 

Write a program that returns Kaprekar Constant for a four-digit given number

## Solution

````python

def next_pair(n: int) -> (int, int):
    lo = int(''.join(sorted(str(n))))
    hi = int(''.join(sorted(str(n), reverse=True)))
    return hi, lo

def karp_seq(n: int) -> [int]:
    prev, curr = 0, n
    seq = [n]
    while prev != curr:
        hi, lo = next_pair(curr)
        prev = curr
        curr = hi - lo
        seq.append(curr)
    return seq
````

# Problem 3

## Problem Statement

Write a program to convert roman to arabic.

### Solution

````python

def roman2arabic(r:str) -> int:
    arabics = {'M':1000,'D':500,'C':100,'L':50,'X':10,'V':5,'I':1}
    a=0
    r = r.upper().replace("IV", "IIII")
    r = r.upper().replace("IX", "VIIII")
    r = r.upper().replace("XL", "XXXX")
    r = r.upper().replace("XC", "LXXXX")
    r = r.upper().replace("CD", "CCCC")
    r = r.upper().replace("CM", "DCCCC")
    for i in r:
        a += arabics[i]
    return a

````

# Problem 4

## Problem Statement

Write a program to convert arabic to roman

### Solution

````python

def arabic2roman(a:int) -> str:
    romans = {1000:'M',900:'CM',500:'D',400:'CD',100:'C',90:'XC',50:'L',40:'XL',10:'X',9:'IX',5:'V',4:'IV',1:'I'}
    r= ""
    for ch in sorted(romans.keys(),reverse = True):
        while a >= ch:
            r += romans[ch]
            a -= ch
    return r

````

# Problem 5

## Problem Statement

Write a program to convert number(Figure) to words

### Solution

````python

def convert2digits(n: int) -> str:
    upto20 = ["", "One ", "Two ", "three ", "Four ", "Five ", "Six ",
            "Seven ", "Eight ", "nine ", "Ten ", "Eleven ", "Twelve ",
            "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ",
            "Seventeen ", "Eighteen ", "Ninteen "]
    tens = ["", "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", 
            "Sixty ", "Seventy ", "Eighty ", "Ninety "]

    if n < 20:
        return upto20[n]
    return tens[n // 10] + upto20[ n % 10]

def convert3digits(n: int) -> str:
    if n < 100:
        return convert2digits(n)
    return convert2digits(n // 100) + "Hundred " + convert2digits(n % 100)

def split(n: int, denoms: [int]) -> [(int, int)]:
    if len(denoms) == 1:
        return [(n, denoms[0])]
    return [(n // denoms[0], denoms[0])] + split(n % denoms[0], denoms[1:])

def convert_denoms(pairs: [(int, int)], names: {int:str}) ->[(int, str)]:
    return [(a, names[b]) for a, b in pairs]

def convert_times(pairs:[(int, str)]) -> [(str, str)]:
    denoms = {10000000: "Crore ", 100000: "Lakh ", 1000: "Thousand ", 1:""}
    denom_names = denoms.values()
    denom_values = denom.keys()

````



