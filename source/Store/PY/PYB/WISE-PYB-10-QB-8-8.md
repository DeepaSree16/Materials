# CFP

## Question 1
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
    x = RevealAccess(0x10)
    y = 0x5

m = MyClass()
print(m.x, end = " ")
m.x = 0o20
print(m.x, m.y)
````
### Options
a. 16 16 5
b. 20 20 5
c. 20 16 5

## Question 2
What is the output of the below code?
````python
class Values:
    def __init__(self):
        self.v1 = 123
        self.s1 = "abcd"

vals1, vals2 = Values(), Values()
setattr(vals1, "v2", 456)
setattr(vals1, "v3", 789)
print(hasattr(vals2, 'v1'), hasattr(vals2, 's1'), hasattr(vals2, 'v2'), hasattr(vals2, 'v3'))
````
### Options
a. True True False True
b. True True False False
c. True True True False

## Question 3
What is the output of the below code?
````python
class NumericList1(list):
        pass

class NumericList2():
        pass
  
num1, num2 = NumericList1(), NumericList2()
print(isinstance(num1, NumericList1), isinstance(num1, list), end = " ")
print(isinstance(num2, NumericList2), isinstance(num2, list))
````
### Options
a. True True False False
b. True False True False
c. True True True False

## Question 4
What is the output of the below code?
````python
class Classic:
    pass

class NewClass(object):
     pass

class MyClass():
    pass

print([object in cls.__bases__ for cls in {MyClass, NewClass, Classic}])
````
### Options
a. [True, True, False]
b. [True, True, True]
c. [True, False, False]

## Question 5
What is the output of following program?
````python
n = 5
d = { 'x' : 1, 'y' : 2 }
s = "Python"

class A1:
    pass

class A2:
    pass

class A3:
    pass

c1, c2, c3 = A1(), A2(), A3()

res = 0
for obj in (n, d, s, c1, c2, c3):
    res += int(type(obj) is obj.__class__)
print(res)
````
### Options
a. 6
b. 3
c. 4

## Question 6
What is the output of the below code?
````python
class A:
    def __init__(self):
        self.attr = 100
x, y, z = A(), A(), A()
res = (x.attr, y.attr, z.attr)
print(sum(res))
````
### Options
a. 100
b. 200
c. 300

## Question 7
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
v1 = a.myfunc("7").split(":")
v2 = a.classfunc("8").split(":")
v3 = a.staticfunc("9").split()
print(ord(v1[-1]) + ord(v2[-1]) + ord(v3[-1]))
````
### Options
a. 24
b. 789
c. 168

## Question 8
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
        
total = 10
l1 = MyList(total)
for i, v in enumerate(range(1, total * 2, total // 5)):
    l1[i] = v
del l1[7], l1[7]

print(l1.GetSum())
````
### Options
a. 68
b. 66
c. 69

## Question 9
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

    def setMaxSpeed(self,speed):
        self.__maxspeed = speed

redcar = Car()
print(redcar.drive())
redcar.setMaxSpeed(60)
print(redcar.drive())
````
### Options
a. Driving MaxSpeed: 100
Driving MaxSpeed: 60
b. Driving MaxSpeed: 100
Driving MaxSpeed: 100
c. Driving MaxSpeed: 60
Driving MaxSpeed: 60

## Question 10
What is the statement in the dashed line (last line) to print ("Basics", "Functions", "HOF")?
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
sessions[4] = (sessions[session] for session in range(0, 3))
---------------------
````
### Options
a. print(sessions)
b. print(sessions[4])
c. print(tuple(sessions[4]))

