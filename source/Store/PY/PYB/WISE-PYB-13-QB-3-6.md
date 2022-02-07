# CFP

## Question 1
What is the output of the below code?
````python
t1, t2, t3 = 'a', ('a'), ('a',)
tdata = isinstance(t1, (tuple, list)), isinstance(t2, (tuple, str)), isinstance(t3, tuple)
print(tdata.count(True))
````
### Options
a. 3
b. 1
c. 2

## Question 2
What is the output of the below code?
````python
def f(v1, v2 = 42, s1 = 'mystr', l1 = []):
    pass

print(f.__defaults__)
````
### Options
a. (42, 'mystr', [])
b. (v2, s1, l1)
c. (0, 42, 'mystr')

## Question 3
What is the output of the below code?
````python
def append(elem, to = []):
    to.append(elem)
    return to
print(append(1), end = " ")
print(append(2), end = " ")
print(append(3, []), end = " ")
print(append(4), end = " ")
````
### Options
a. [1] [1, 2] [3] [3, 4]
b. [1] [1, 2] [3] [1, 2, 4]
c. [1] [2] [3] [4]

## Question 4
What is the output of the below code?
````python
a, res = 10, 0
while True:
    a = a - 1
    res += a
    if a < 7:
        break
else:
    res += 10
print(res, end = " ")

a, res = 10, 0
while a >= 7:
    a = a - 1
    res += a
else:
    res += 1
print(res)
````
### Options
a. 30 31
b. 31 31
c. 30 30

## Question 5
What is the output of following program?
````python
nl = [ [1, 2, 3], [4, 5, 6], [7, 8, 9]]
res = []
for l1 in nl:
    res += [len(l1)]
else:
    res = sum(res)
print(res)
````
### Options
a. 3
b. 45
c. 9

## Question 6
What is the output of the below code?
````python
nl = [ [ [111, 112, 113, 114], [121, 122, 123, 124], [131, 132, 133, 134] ],
       [ [211, 212, 213, 214], [221, 222, 223, 224], [231, 232, 233, 234] ] 
     ]

res1 = res2 = res3 = 0
for l1 in nl:
    res1 += 1
    for l2 in l1:
        res2 += 1
    else:
        res3 = len(l2)
else:
    res2 = res2 // res1
print(res1, res2, res3)
````
### Options
a. 4 3 2
b. 2 3 4
c. 3 3 3

## Question 7
What is the output of the below code?
````python
x = 1
y = 1
z = x and y
print(x, y, z, end = " ")

x = 0
y = 1
z = x and y
print(x, y, z, end = " ")

x = 1
y = 1
z = x or y
print(x, y, z, end = " ")
````
### Options
a. 1 1 1 0 1 0 1 1 1
b. 0 1 0 1 1 1 1 1 1
c. 1 1 1 1 1 1 0 1 0

## Question 8
What is the output of the below code?
````python
class C:
    dcntr = 0
    def __init__(self):
        self.a = 1

    def __delattr__(self, v):
        C.dcntr += 1
    
    def dattrcntr(self):
        return C.dcntr
        
c1, c2, c3 = C(), C(), C()
delattr(c1, "a")
delattr(c2, "a")
print(c3.dattrcntr())
````
### Options
a. 1
b. 2
c. 3

## Question 9
What is the output of the below code?
````python
a = 1
if a == 3 or 4 or 6:
    print('yes')
else:
    print('no')
````
### Options
a. yes no
b. no
c. yes

## Question 10
What is the output of the below code?
````python
import datetime
mydate = datetime.date(2020, 3, 1) - datetime.timedelta(1)
print(mydate)
````
### Options
a. 2019-02-29
b. 2020-03-02
c. 2020-02-29

