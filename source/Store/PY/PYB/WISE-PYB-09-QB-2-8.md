# CFP

## Question 1
What is the output of the below code?
````python
def sfactorial(n):
    val = 1
    ans = [] 
    for i in range(1, n + 1): 
        val = val * i 
        ans.append(val)
    arr = [1]
    for i in range(1, len(ans)): 
        arr.append((arr[-1] * ans[i])) 
    return arr 

arr = sfactorial(4) 
print(arr[-1])
````
### Options
a. 12
b. 34560
c. 288

## Question 2
What is the output of the below code?
````python
def mylistoperations(l1):
    l2, l3 = l1, list(l1)
    return [l1 == l2, l1 is l2, l1 == l3, l1 is l3]
l1 = [1, 2, 3]
print(mylistoperations(l1))
````
### Options
a. [True, True, True, False]
b. [True, True, True, True]
c. [True, False, True, False]

## Question 3
What is the output of the below code?
````python
def changeme(l1, l2 ):
    nl1 = l1;
    nl2 = l2[:];
    nl1.append(len(l1) + 1)
    nl2.append(l2[0] + l2[-1])

l1 = [1, 2, 3];
l2 = [10, 20, 30];
changeme(l1, l2);
print(l1, l2)
````
### Options
a. [1, 2, 3] [10, 20, 30]
b. [1, 2, 3, 4] [10, 20, 30, 40]
c. [1, 2, 3, 4] [10, 20, 30]

## Question 4
What is the output of the below code?
````python
class S(object):
    __slots__ = ['v1', 'v2']
    def __init__(self, v1 = 10, v2 = 20):
        self.v1 = v1
        self.v2 = v2
        
x = S(42)
x.v2 = x.v2 + 100
x.v3 = x.v1 + x.v2
print(x.v3)
````
### Options
a. 162
b. Error
c. 152

## Question 5
What is the output of following program?
````python
class A(object):
    pass

a1, a2, a3 = A(), A(), A()
a1.v1 = 66
a1.v2 = "Attribute - Created Dynamically"

a2.v1 = "Attribute - Created Dynamically"
a2.v2 = 100
a2.v3 = 12.345e2

print(a3.__dict__)
````
### Options
a. {}
b. {'v1': 66, 'v2': 'Attribute - Created Dynamically'}
c. {'v1': 'Attribute - Created Dynamically', 'v2': 100, 'v3': 1234.5}

## Question 6
What is the output of the below code?
````python
class A(object):
    def __init__(self, v1):
        self.v1 = v1
        
    def __eq__(self, other):
        return self.v1 == other.v1
        
a1, a2, a3 = A(10), A(20), A(10)
print (a1 == a2, a1 == a3)
````
### Options
a. False True
b. True False
c. False False

## Question 7
What is the output of the below code?
````python
class A:
    def myfunc(self):
        return "Class A - myfunc() method"
 
class B(A):
    def myfunc(self):
        return "Class B - myfunc() method"

b = B()
a = A()
print (b.myfunc(), a.myfunc())
````
### Options
a. Class A - myfunc() method Class B - myfunc() method
b. Class B - myfunc() method Class A - myfunc() method
c. Class B - myfunc() method Class B - myfunc() method

## Question 8
What is the output of the below code?
````python
def myexpr(l1):
    e1 = l1[0] ** (l1[1] + l1[2])
    e2 = (l1[0] * l1[1]) ** l1[2]
    return e1, e2

exprs = ([2, 3, 5], [1, 2, 3], [3, 2, 4])
print(list(map(myexpr, exprs)))
````
### Options
a. [(256, 486), (1, 8), (729, 48)]
b. [[256, 7776], [1, 8], [729, 1296]]
c. [(256, 7776), (1, 8), (729, 1296)]

## Question 9
What is the output of the below code?
````python
def mycomplex(l1):
    v1, v2, v3, v4, v5, v6 = l1
    c1 = complex(**{'real': v1, 'imag': v3})
    c2 = complex(*(v4, v5))
    c3 = complex(real=2, imag=v2)
    c4 = complex(v6, v5)
    return c1 + c2 * c3 + c4
l1 = range(3, 9)
print (mycomplex(l1))
````
### Options
a. (-8+50j)
b. (-5+50j)
c. (-5+49j)

## Question 10
What is the output of the below code?
````python
def myfunc(l):
    l = list(l)
    for index in range(len(l)):
        l[index] = 2 * l[index]

l1 = [2, 5, 9]
myfunc(l1)
print(l1)
````
### Options
a. Error
b. [4, 10, 18]
c. [2, 5, 9]

