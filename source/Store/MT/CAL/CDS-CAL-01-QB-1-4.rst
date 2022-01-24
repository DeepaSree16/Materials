Module-0 Quiz-1 Question & Answers with Explanation, 29 May, 2021
==================================================
**PYTHON QUIZ**

1.  What is a[:-1] of list a = [13, 26, 39, 52, 65]?

'A.'13

'B.'[65, 52, 39, 26, 13]

'C.'[13, 65]

'D.'[13, 26, 39, 52]

**Answer  'D'**

**Solution 1**  a[:-1] selects all list elements, as denoted by ‘ : ’, upto i.e. excluding the last element, denoted by index ‘-1’. So all elements except the last element in the original list are returned, so we see the output as [13, 26, 39, 52].

2.  What is the output of the following?

.. code-block:: PYTHON

a = ['qr', 'st']

for i in a:

     i.upper()

print(a)

'A.'['QR', 'ST']

'B.'['qr', 'st']

'C.'['qr', 'ST']

'D.'['QR', 'st']
 
**Answer 'B'**
 
**Solution 2:** Here, the original string is not modified in-place and the new string is not stored anywhere. Therefore we will obtain the original list as output.
 
3. If you pass input 15 for “nextnumber” function which is defined below then what is the output?

.. code-block:: PYTHON 

def nextnumber(n):

    a, b = 0, 1

    numbers = []

    while a < n:

        numbers.append(a)

        a, b = b, a+b

    return numbers
 
Options:

'A.' [0, 1, 1, 2, 3, 5, 8, 13]

'B.' [0, 1, 2, 3, 4, 5, 6,  7]

'C.' [1, 1, 2, 3, 5, 6, 6,  12]

'D.' [2, 3, 4, 5, 7, 8, 9, 10]
 
Answer: A
 
Solution: This function’s output is the Fibonacci sequence of numbers, upto but not including 15. The first two numbers, 0 and 1, are assigned simultaneously to variables a and b for initiation; all other terms are obtained by adding the preceding two terms i.e. the nth term is the sum of (n-1)th and (n-2)th term. 
 
4. If you pass  input 2345 for the “number” function which is defined below, then what is the output?

.. code-block:: PYTHON
def number(n):
    
    r = 0
    
    while n > 0:
    
        r = r * 10 + n % 10
    
        n //= 10
    
    return r
 
'A.' 2345
 
'B.' 4325
 
'C.' 5432
 
'D.' 2354

**Answer: C**

**Solution 4:** 

This function returns the reverse of the input number ‘n’. While n>0, it keeps on adding the rightmost digit into another variable r. Therefore for input 2345, the output will be its reverse i.e. 5432

5. Why do we get the output of the following code as TypeError?

.. code-block:: PYTHON

series = (20, 50, 60, 80, 100)

series[1] = 40

print (series)

'A.' ’series’ is a list and lists are immutable

'B.' ’series’ is a tuple and tuples are immutable

'C.' ’series’ is a dictionary and dictionaries are immutable

'D.' incorrect indentation

**Answer: B**

**Solution 5:** 

‘series is a tuple (tuples are created by placing a sequence of values separated by 'comma' with or without the use of parentheses). Tuple elements cannot be modified as they are immutable, therefore a TypeError is seen upon executing the given code.
