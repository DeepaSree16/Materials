# CFP

## Question 1
What is the output of the below code?
````python
class PythonSessions(object):
     def __init__(self, sessions):
         self._sessions = [None] * sessions
     def __setitem__(self, snum, topic):
          self._sessions[snum] = topic
     def __getitem__(self, snum):
          return self._sessions[snum]

sessions = PythonSessions(5)
sessions[0] = "Basics"
sessions[1] = "Functions"
sessions[2] = "HOF"
sessions[3] = "OOP"
sessions[4] = [sessions[session] for session in range(0, 3)]
print(sessions[4])
````
### Options
a. ['BasicsFunctionsHOF']
b. ['Basics', 'Functions', 'HOF', 'OOP']
c. ['Basics', 'Functions', 'HOF']

## Question 2
What is the output of the below code?
````python
class Car:
    __maxspeed = 0
    __name = ""
    
    def __init__(self):
        self.__maxspeed = 100
        self.__name = "Supercar"
    
    def drive(self):
        return 'Driving MaxSpeed: ' + str(self.__maxspeed)

redcar = Car()
print(redcar.drive())
redcar.__maxspeed = 60 
print(redcar.drive())
````
### Options
a. Driving MaxSpeed: 100
Driving MaxSpeed: 100
b. Driving MaxSpeed: 100
Driving MaxSpeed: 60
c. Driving MaxSpeed: 60
Driving MaxSpeed: 60

## Question 3
What is the output of the below code?
````python
class Number:
    def __init__(self, num):
        self.num = num
    
    def __len__(self):
        return len(str(self.num))

n1, n2 = Number(12345), Number(6789)
print(len(n1) + len(n2))
````
### Options
a. 5
b. 9
c. 4

## Question 4
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

    def GetSum(self):
        return sum(self.seq)
        
total = 10
l1 = MyList(total)
for i, v in enumerate(range(1, total * 2, total // 5)):
    l1[i] = v
del l1[7], l1[8]

print(l1.GetSum())
````
### Options
a. 68
b. 66
c. 69

## Question 5
What is the output of following program?
````python
class RevealAccess(object):
    def __init__(self, initval = None, name = 'var'):
        self.val = initval
        self.name = name

    def __get__(self, obj, objtype):
        return self.val

    def __set__(self, obj, val):
        self.val = val

class MyClass(object):
    x = RevealAccess(10, 'var "x"')
    y = 5

m = MyClass()
print(m.x, end = " ")
m.x = 20
print(m.x, m.y)
````
### Options
a. 20 20 5
b. 10 20 20
c. 10 20 5

## Question 6
What is the output of the below code?
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
v1 = a.myfunc("1").split(":")
v2 = a.classfunc("2").split(":")
v3 = a.staticfunc("3").split()
print(ord(v1[-1]) + ord(v2[-1]) + ord(v3[-1]))
````
### Options
a. 150
b. 123
c. 6

## Question 7
What is the output of the below code?
````python
class Values:
    v1 = 123
    s1 = "abcd"

vals1, vals2 = Values(), Values()
setattr(vals1, "v2", 456)
setattr(vals1, "v3", 789)

print(hasattr(vals1, 'v1'), hasattr(vals1, 's1'), hasattr(vals2, 'v3'))
````
### Options
a. True True False
b. True True True
c. True False False

## Question 8
What is the output of the below code?
````python
class NumericList1():
    def __init__(self):
        pass

class NumericList2(list):
    def __init__(self):
        pass
  
num1, num2 = NumericList1(), NumericList2()
print(isinstance(num1, NumericList1), isinstance(num1, list), end = " ")
print(isinstance(num2, NumericList2), isinstance(num2, list))
````
### Options
a. True True True False
b. True False True True
c. True False True False

## Question 9
What is the output of the below code?
````python
class A:
    data = 'HOF'

    def __init__(self, value):
        self.data = value

    def getData(self):
        return self.data, A.data

a1 = A('Python')
a2 = A('Objects')
print(a1.getData(), a2.getData())
````
### Options
a. ('Python', 'Objects') ('Python', 'HOF')
b. ('Objects', 'HOF') ('Python', 'HOF') 
c. ('Python', 'HOF') ('Objects', 'HOF')

## Question 10
What is the output of the below code?
````python
class AttrTest:
    def __init__(self, a, b, c):
        self.X = a + b + c

p = AttrTest(7, 8, 9)
b = getattr(p, 'X')
setattr(p, 'X', b + 1)
print(p.X)
````
### Options
a. 25
b. 24
c. Error

