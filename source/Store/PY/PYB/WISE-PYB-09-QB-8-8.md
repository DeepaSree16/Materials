# CFU

## Question 1
What is the output of the below code?
````python
class Vowels:
    vowels = ['a', 'e', 'i', 'o', 'u']
    def __reversed__(self):
        return reversed(self.vowels)

v = Vowels()
res = 0
for val in reversed(v):
    res += ord(val)
print(res)
````
### Options
a. 15
b. 371
c. 531

## Question 2
What is the output of the below code?
````python
class Squares:
    @staticmethod
    def getSquares(l):
        return map(lambda x: x * x, l)

mylist = [(1, 2, 3), [13, 14, 15]]
res1 = sum(Squares.getSquares(mylist[0]))
s = Squares()
res2 = sum(s.getSquares(mylist[1]))
print(res1 + res2)
````
### Options
a. 604
b. 96
c. 523

## Question 3
What is the output of the below code?
````python
class CollatzSequence():
    def __init__(self):
        self.seq = []
        
    def nextCollatz(self, num):
        return num // 2 if num % 2 == 0 else 3 * num + 1
        
    def getCollatzSequence(self, num):
        while num != 4:
            self.seq.append(num)
            num = self.nextCollatz(num)
        else:
            self.seq.extend([4, 2, 1])
        return self.seq

print(len(CollatzSequence().getCollatzSequence(9)))
````
### Options
a. 18
b. 19
c. 20

## Question 4
What is the output of the below code?
````python
class MultiIndexingList:
    def __init__(self, value):
        self.value = value
        
    def __repr__(self):
        return repr(self.value)
    
    def __getitem__(self, item):
        if isinstance(item, (int, slice)):
            return self.__class__(self.value[item])
        return [self.value[i] for i in item]

a = MultiIndexingList([1, 2, 3, 4, 5, 6, 7, 8])
print(a[4, 1, 5:, 2, ::3])
````
### Options
a. [2, 5, [3, 4, 5, 6, 7, 8], 4, [1, 6]]
b. [5, 2, [5, 6, 7, 8], 3, [1, 5]]
c. [5, 2, [6, 7, 8], 3, [1, 4, 7]]

## Question 5
What is the output of following program?
````python
class myclass():
    def __init__(self):
        self.res = 0

    def func(self, v1, v2 = 0, *args):
        self.res = v1 * v2 + sum(args)

c = myclass();
c.func(9, 10, 12, 15, 16, 18)
print(c.res)
````
### Options
a. 151
b. 80
c. 619

## Question 6
If return statement is not used inside the function, the function will return
### Options
a. 0 or NULL
b. None 
c. Arbitrary value

## Question 7
Which feature of OOP encourages the code reusability?
### Options
a. Inheritance
b. Polymorphism
c. Encapsulation

## Question 8
What is the output of the below code?
````python
class MyClass:
    def __init__(self, val):
        self.val = val

    def __hash__(self):
        return int(self.val)
    
    def __eq__(self, other):
        return self.val == other.val

o1, o2 = MyClass(0x123), MyClass(291)
o3, o4 = MyClass(83), MyClass(0o123)
print(o1 == o2, o3 == o4)
````
### Options
a. False False
b. True False
c. True True

## Question 9
What is the output of the below code?
````python
class EvenNumber:
    def __set_name__(self, owner, name):
        self.name = name

    def __get__(self, obj, type=None) -> object:
        return obj.__dict__.get(self.name) or 0

    def __set__(self, obj, value) -> None:
        obj.__dict__[self.name] = (value if value % 2 == 0 else 0)

class Values:
    value1 = EvenNumber()
    value2 = EvenNumber()

my_values = Values()
my_values.value1, my_values.value2 = 11, 14
print(my_values.value1, my_values.value2)
````
### Options
a. 0 14
b. 11 14
c. False 14

## Question 10
What is the output of the below code?
````python
class IntegerContainer(object):
    def __init__(self, value):
        self.value = value
    def __repr__(self):
        return "{}({})".format(self.__class__.__name__, self.value)
    def __gt__(self, other):
        return self.value > other.value

alist = [IntegerContainer(5), IntegerContainer(3), IntegerContainer(10), IntegerContainer(7)]
print(sorted(alist, reverse = False))
````
### Options
a. Error
b. [IntegerContainer(10), IntegerContainer(7), IntegerContainer(5), IntegerContainer(3)]
c. [IntegerContainer(3), IntegerContainer(5), IntegerContainer(7), IntegerContainer(10)]

