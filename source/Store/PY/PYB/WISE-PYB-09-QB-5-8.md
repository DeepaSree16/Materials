# CFU

## Question 1
What is the output of the below code?
````python
class D(object):
    multiplier = 2
    @classmethod
    def f(cls, x):
        cls.multiplier *= x
        return cls.multiplier

for val in range(5, 20, 5):
    D.f(val)
print(D.f(1))
````
### Options
a. 1500
b. 750
c. 2

## Question 2
What is the output of the below code?
````python
class A(object):
    def f(self, x):
        return 2 * x
a1, a2 = A(), A()
print(sum([a1.f(7), A.f(a2, 20)]))
````
### Options
a. Error
b. 54
c. 34

## Question 3
What is the output of the below code?
````python
class Total:
    v1, v2, v3 = 3, 4, 2
    
    def __index__(self):
        return self.v1 + self.v2 + self.v3
        
print(bin(Total()))
````
### Options
a. 0b0110
b. 0b0011
c. 0b1001

## Question 4
What is the output of the below code?
````python
def myfunc(v1, v2, v3): 
    return v1 + v2 + v3

func = myfunc
num = 3 + 4 * 5
print(callable(func), callable(num))
````
### Options
a. False True
b. True True
c. True False

## Question 5
What is the output of following program?
````python
class A:
    def testAll(self, l1):
        return all(l1)

l1, l2, l3 = [1, 3, 4, 5], [0, False], [1, 3, 4, 0]
print(A().testAll(l1), end = " ")
print(A().testAll(l2), end = " ")
print(A().testAll(l3), end = " ")
````
### Options
a. True True True
b. True False False
c. True False True

## Question 6
What is the output of the below code?
````python
class Test(object):
    def __init__(self):
        self.a = 'x'
        self.b = 'y'

    def __getattr(self, name):
        return self.name
        
    def __setattr__(self, name, value):
        if name in ('a', 'b'):
            object.__setattr__(self, name, value)
        else:
            object.__setattr__(self, name, "")

t = Test()
t.c = 'z'
setattr(t, 'd', '789')
res = getattr(t, 'a') + getattr(t, 'b') + getattr(t, 'c') + getattr(t, 'd')
print(res)
````
### Options
a. xy
b. xyz789
c. xycd

## Question 7
What is the output of the below code?
````python
class Test(object):
    def __init__(self):
        self.a = 'a'
        self.b = 'b'

    def __getattr__(self, name):
        return 123456

t = Test()
print (t.__dict__.keys())
print (t.a, t.b, t.c, getattr(t, 'd'), hasattr(t, 'x'))
````
### Options
```python
a. dict_keys(['a', 'b'])
a b 123456 123456 True

b. dict_keys(['a', 'b'])
a b "" "" False

c. dict_keys([a, b])
a b 123456 False True
```

## Question 8
What is the output of the below code?
````python
class Test(object):
    def __getitem__(self, items):
        return '%-15s %s' % (type(items), items)

t = Test()
print(t[1])
print(t['hello world'])
print(t[1, 'b', 3.0])
print(t[5:200:10])
print(t['a':'z':3])
````
### Options
````python
a. <class 'int'>   1
<class 'str'>   hello world
<class 'tuple'> (1, 'b', 3.0)
<class 'slice'> slice(5, 200, 10)
<class 'list'> slice('a', 'z', 3)
b.<class 'int'>   1
<class 'str'>   hello world
<class 'tuple'> (1, 'b', 3.0)
<class 'list'> slice(5, 200, 10)
<class 'list'> slice('a', 'z', 3)
c. <class 'int'>   1
<class 'str'>   hello world
<class 'tuple'> (1, 'b', 3.0)
<class 'slice'> slice(5, 200, 10)
<class 'slice'> slice('a', 'z', 3)
````

## Question 9
What is the output of the below code?
````python
class myList(object):
    def __init__(self, elements = 1):
        self.my_list = [0] * elements

    def __str__(self):
        return str(self.my_list)

    def __setitem__(self, index, value):
        self.my_list[index] = value

    def __getitem__(self, index):
        return "{}".format(index, self.my_list[index])

l1 = myList(3)
l1[2] = 2 + 3 * 4
l1[1] = "2" * 2
l1[0] = 0
print(l1)
````
### Options
a. [0, '22', '14']
b. [0, '22', 14]
c. [0, 28, 14]

## Question 10
What is the output of the below code?
````python
class A:
    def __init__(self):
        pass
    
    def testAny(self, val):
        return any(val)
        
v1, v2, v3 = "Python", [0, '0'], {0: 'False', 1: 'True'}
print(A().testAny(v1), end = " ")
print(A().testAny(v2), end = " ")
print(A().testAny(v3), end = " ")
````
### Options
a. True True False
b. True False True
c. True True True

