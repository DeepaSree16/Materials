# CFP

## Question 1
What is the output of the below code?
````python
class MyClass(object):
    pass

def myfunc(self, mystr, radix):
    return int(mystr, radix)

MyClass.myMethod = myfunc
myclass = MyClass()
print(myclass.myMethod('AF', 18))
````
### Options
a. 175
b. 195
c. 215

## Question 2
What is the output of the below code?
````python
class Point:
    def __init__(self, x = 0, y = 0):
      self.x = x
      self.y = y
  
    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)
    
    def __eq__(self, other):
        return self.x == other.x and self.y == other.y
        
p1, p2 = Point(5, 6), Point(7, 8)
p3 = p2
p4 = p1 + p2
print(p4.x, p4.y, p2 == p3)
````
### Options
a. 12 14 True
b. 12 14 False
c. 2 2 True

## Question 3
What is the output of the below code?
````python
$ python3
>>> class verbose:
...     def __repr__(self):
...             return "__repr__"
...     def __str__(self):
...             return "__str__"
... 
>>> v = verbose()
>>> v
````
### Options
````python
a. Error
b. __str__
c. __repr__
````

## Question 4
What is the output of the below code?
````python
class B(object):
  def first(self):
    return "First method"
  def second(self):
    return "Second method"

b = B()
print(B.first(b), b.second())
````
### Options
a. Error
b. Second method First method
c. First method Second method

## Question 5
What is the output of following program?
````python
class adder(object):
    def __init__(self, first):
        self.first = first

    def __call__(self, second):
        return self.first + second
add2 = adder(2)
sadd = 0
for _ in range(1, 5):
    sadd += add2(_)
print(sadd, add2(2))
````
### Options
a. 18 4
b. 12 2
c. 18 2

## Question 6
What is the output of the below code?
````python
class fruits:
    def __init__(self, price, qty):
        self.price = price
        self.quantity = qty

obj = fruits(50, 10)
obj.bags = 2

print(obj.quantity + len(obj.__dict__))
````
### Options
a. 12
b. 13
c. 14

## Question 7
What is the output of the below code?
````python
def extendList(val, ml=[]):
    ml.append(val)
    return ml

l1 = extendList(10)
l2 = extendList(123,[])
l3 = extendList('a')
print (l1, l2, l3)
````
### Options
a. [10, 'a'] [123] [10, 'a']
b. [10] [123] ['a']
c. [10] [10, 123] [10, 123, 'a']

## Question 8
What is the output of the below code?
````python
def strl_intl_sum(l1):
    res = [[int(i) for i in sub] for i in l1 for sub in i]
    return sum([x[0] * x[1] for x in res])
    
l1 = [['12'], ['23'], ['45'], ['67']]
print(strl_intl_sum(l1))
````
### Options
a. 30
b. 10080
c. 70

## Question 9
Which of the following is not an OOP feature in Python?

### Options
a. Abstraction
b. Exceptions
c. Polymorphism

## Question 10
What is the output of the below code?
````python
print([val for val in range(20) if val % 3 > 1])
````
### Options
a. [2, 3, 6, 7, 10, 11, 14, 15, 18, 19]
b. [3, 6, 9, 12, 15, 18]
c. [2, 5, 8, 11, 14, 17]

