# CFU

## Question 1
What is the output of the below code?
````python
print(divmod(5, 3), divmod(-5, 3), divmod(5, -3), divmod(-5, -3))
````
### Options
a. (1, 2) (-2, 1) (-2, -1) (1, -2)
b. (1, 2) (-1, -2) (-1, 2) (1, -2)
c. (1, 2) (-2, 1) (-1, 2) (1, -2)

## Question 2
What is the output of the below code?
````python
class MyValues(object):
     def __init__(self, values):
         self._values = [None] * values
     def __setitem__(self, vindex, val):
          self._values[vindex] = val
     def __getitem__(self, vindex):
          return self._values[vindex]

myvals = MyValues(5)
myvals[0] = 2 * 3 + 4
myvals[1] = 3 * 4 * 5
myvals[2] = 10 // 4 * 2
myvals[3] = 5
myvals[4] = sum(myvals[index] for index in range(0, 3))
print(list(myvals))
````
### Options
a. [10, 60, 1, 5, 71]
b. [10, 60, 4, 5, 74]
c. [14, 60, 4, 5, 78]

## Question 3
What is the output of the below code?
````python
class MyList:
    def __init__(self, cnt):
        self.cnt = cnt
        self.seq = [None] * cnt

    def __setitem__(self, index, value):
        self.seq[index] = value

    def __delitem__(self, index):
        del self.seq[index]

    def __str__(self):
        return str(self.seq)

    def GetSum(self):
        return sum(self.seq)
        
total = 20
l1 = MyList(total)
for i, v in enumerate(range(1, total * 4, total // 5)):
    l1[i] = v
del l1[6], l1[9]

print(l1.GetSum())
````
### Options
a. 888
b. 788
c. 714

## Question 4
What is the output of the below code?
````python
fo = open("NUMBERS.txt", "w")
for index in range(10):
	fo.write(str(index + 1) + "\n")
fo.close()
nl = open('NUMBERS.txt').readlines()
ns = map(int, nl)
print(sum(list(ns)[0:len(nl):2]))
````
### Options
a. 25
b. 55
c. 35

## Question 5
What is the output of following program?
````python
class A(object):
    def myfunc(self, x):
        return "myfunc - %s:%s" % (self, x)

    @classmethod
    def classfunc(cls, x):
        return "classfunc - %s:%s" % (cls, x)

    @staticmethod
    def staticfunc(x):
        return "staticfunc - %s" % x    

a = A()
v1 = a.myfunc("A").split(":")
v2 = a.classfunc("B").split(":")
v3 = a.staticfunc("C").split()
print(ord(v1[-1]) + ord(v2[-1]) + ord(v3[-1]))
````
### Options
a. 201
b. 198
c. 294

## Question 6
What is the output of the below code assuming the contents are written in file named test.py?
````python
fo1 = open("MYFILE1.txt", "w+")
fo2 = open("MYFILE2.txt", "w")
fo3 = open("MYFILE3.txt", "a")
print(__file__, fo1.mode, fo2.name, fo3.fileno())
fo1.close()
fo2.close()
fo3.close()
````
### Options
a. MYFILE1.txt a+ MYFILE2.txt 5
b. test.py w+ test.py 3
c. test.py w+ MYFILE2.txt 5

## Question 7
What is the output of the below code?
````python
fo1 = open("MYFILE.txt", "w")
for index in range(10):
	fo1.write(str(index + 1) + "\n")
fo1.close()
myop = "OUTPUT.txt"

with open("MYFILE.txt") as reader, open(myop, "w+") as writer:
	for index in range(10):
		data = reader.readline()
		if index % 2:
			writer.write(data)
	writer.seek(0)
	print(sum(map(int, writer.readlines())))
````
### Options
a. 30
b. 6
c. 10

## Question 8
What is the output of the below code?
````python
class A:
    data = 'NUMBERS'

    def __init__(self, value):
        self.data = value

    def getData(self):
        return self.data, A.data

a1 = A(10)
a2 = A(20)
print(a1.getData(), a2.getData())
````
### Options
a. (30, 'NUMBERS') ('NUMBERS', 20)
b. (10, 'NUMBERS') (20, 'NUMBERS')
c. ('NUMBERS', 10) ('NUMBERS', 20)

## Question 9
What is the output of the below code?
````python
class RevealAccess(object):
    def __init__(self, initval = None):
        self.val = initval

    def __get__(self, obj, objtype):
        return self.val

    def __set__(self, obj, val):
        self.val = val

class MyClass(object):
    x = RevealAccess(3 + 4 * 5)
    y = 10

m = MyClass()
print(m.x, end = " ")
m.x = 25
print(m.x, m.y)
````
### Options
a. 10 25 35
b. 35 25 10
c. 23 25 10

## Question 10
What is the output of the below code?
````python
class Values:
    def __init__(self):
        self.v1 = 123
        self.s1 = "abcd"

vals1, vals2 = Values(), Values()
setattr(vals1, "v2", 456)
setattr(vals1, "v3", 789)
res = hasattr(vals2, 'v1'), hasattr(vals2, 's1'), hasattr(vals2, 'v2'), hasattr(vals2, 'v3')
print(sum(res))
````
### Options
a. 2
b. 1
c. 3

