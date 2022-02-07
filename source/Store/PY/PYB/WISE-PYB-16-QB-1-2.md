# CFP

## Question 1
What is the output of the below code?
````python
def factorize(n: int) -> [int]:
    factor, factors = 2, []
    while factor * factor <= n:
        while n % factor == 0:
            factors += [factor]
            n //= factor
        factor += 1
    factors += [n]
    return factors
print(sum(factorize(13195)))
````
### Options
a. 54
b. 56
c. 52

## Question 2
What is the output of the below code?
````python
import math, functools
def lcm(a: int, b: int) -> int:
    return a * b // math.gcd(a, b)
print(functools.reduce(lcm, range(1, 11)))
````
### Options
a. 2510
b. 2520
c. 2540

## Question 3
What is the output of the below code?
````python
p = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]
print(sum(filter(lambda x: x % 6 == 1, p)))
````
### Options
a. 127
b. 117
c. 107

## Question 4
What is the output of the below code?
````python
f = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
print([2 * e + 1 for e in f if e % 5 == 0])
````
### Options
a. [1, 11, 111]
b. [11, 111]
c. [1, 11, 22, 111]

## Question 5
What is the output of following program?
````python
def change(a: int) -> int:
    if a % 2 == 0:
        return a
    else:
        return 2 * a + 1
    
f1 = [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
f2 = [change(n) for n in f1]
s1 = set(map(lambda x, y: y - x, f1, f2))
print([n for n in s1 if n % 7 == 0])
````
### Options
a. [0, 6, 90]
b. [0, 14, 56]
c. [0, 56]

## Question 6
What is the output of the below code?
````python
class myList(object):
    def __init__(self, elements = 1):
        self.my_list = [None] * elements

    def __str__(self):
        return str(self.my_list)

    def __setitem__(self, index, value):
        self.my_list[index] = value

    def __getitem__(self, index):
        return "{}".format(index, self.my_list[index])

l1 = myList(5)
l1[2] = 2 + 3 * 4
l1[1] = "2" * 2
l1[0] = chr(7 + 8 * 6)
l1[3] = ord('C')
print(l1)
````
### Options
a. ['7', 22, 14, 0, None]
b. [7, '22', 14, 67, 0]
c. ['7', '22', 14, 67, None]

## Question 7
What is the output of the below code?
````python
class Test(object):
    def __init__(self):
        self.a = 'a'
        self.b = 'b'

    def __getattr(self, name):
        return self.name
        
    def __setattr__(self, name, value):
        if name in ('a', 'b'):
            object.__setattr__(self, name, value)
        else:
            object.__setattr__(self, name, 'X')

t = Test()
t.c = 'z'
setattr(t, 'd', '789')
res = getattr(t, 'a') + getattr(t, 'b') + getattr(t, 'c') + getattr(t, 'd')
print(res)
````
### Options
a. abXX
b. abz789
c. abz7

## Question 8
What is the output of the below code?
````python
p = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]
rsize, nrows = 3, 4
sp1 = [str(n) for n in p] 
sp2 = [ [sp1[row * rsize + elem] for elem in range(rsize)] for row in range(nrows)]

with open('PRIMES.txt', 'w') as fo:
	for index in range(nrows):
		fo.writelines(map(lambda x: x + " ", sp2[index]))
		fo.write("\n")
fo = open('PRIMES.txt')
line = 3
for l in range(1, line):
	res = fo.readline()
print(sum(map(int, res.split())))
````
### Options
a. 97
b. 31
c. 59

## Question 9
What is the output of the below code?
Assuming PRIMES.txt has following numbers:
$ cat PRIMES.txt 
2 3 5 7
11 13 17 19
23 29 31 37
$
````python
fo = open('PRIMES.txt')
fc = list(fo)[3]
fc = fc[3:]
print(sum([int(n) for n in fc.split()]))
````
### Options
a. 52
b. 36
c. 68

## Question 10
Invoking the following method converts raw byte data to a string.
### Options
a. encode()
b. decode()
c. convert()

