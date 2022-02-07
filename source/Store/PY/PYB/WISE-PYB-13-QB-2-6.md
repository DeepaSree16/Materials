# CFP

## Question 1
What is the output of the below code?
````python
word = "sundaysoulsante"
d = {}

for ch in word:
    if ch not in d: d.setdefault(ch, 1)
    else: d[ch] += 1

print(max(d.values()))
````
### Options
a. 3
b. 2
c. 4

## Question 2
What is the output of the below code?
````python
l1 = [15, 42, 71, 18, 13, 21]
for x in l1:
    if x < 20: l1.remove(x), l1.append(len(l1)); 

print(l1)
````
### Options
a. [42, 71, 18, 21, 5, 5]
b. [42, 71, 13, 21, 5, 5, 5]
c. [42, 71, 13, 21, 5, 5]

## Question 3
What is the output of the below code?
````python
def func(word, numbers):
    return [(x * y) for x in word for y in numbers if y < 3]
    
print(func("tuple", (2, 5, 3)))
````
### Options
a. ['t', 'u', 'p', 'l', 'e']
b. ['tt', 'uu', 'pp', 'll', 'ee']
c. ['ttt', 'uuu', 'ppp', 'lll', 'eee']

## Question 4
What is the output of the below code?
````python
def myFunc(arg1, arg2):
  return zip(arg1[-2:], arg2[1:-1])

print(list(myFunc((1, 4, 5), (3, 6, 9)))[0][-1])
````
### Options
a. 4
b. 6
c. [4, 6]

## Question 5
What is the output of following program?
````python
class Myclass:
 def scope_test():
    def myFunc1():
        mesg = "Emails"

    def myFunc2():
        nonlocal mesg
        mesg = "Messages"

    mesg = "Scope Test"
    myFunc2()
    return mesg

print(Myclass.scope_test())
````
### Options
a. Emails
b. Scope Test
c. Messages

## Question 6
What is the output of the below code?
````python
def summation(nNum):
    if nNum < 1:
        return 0
    else:
        return nNum + summation(nNum - 1)

i = 0 
total = 0
while i < 5:
    total += summation(i)
    i += 1
print(total)
````
### Options
a. 20
b. 10
c. 40

## Question 7
What is the output of the below code?
````python
class Bag:
    def __init__(self, apples, oranges, bananas):
        self.apples = apples 
        self.oranges = oranges
        self.bananas = bananas

    def bagTotal(self):
        return self.apples * self.oranges ** self.bananas

b = Bag(2, 3, 4)
print(b.bagTotal())
````
### Options
a. 24
b. 1296
c. 162

## Question 8
What is the output of the below code?
````python
l1 = [1, [2, 3], 4, 5]
l2 = l1[:]
l1.insert(2, 4)

print(len(l1), len(l2))
````
### Options
a. 5 4
b. 4 4
c. 5 5

## Question 9
What is the output of the below code?
````python
class sample(object): 
    objectNo = 0
    def __init__(self, name1): 
        self.name = name1 
        sample.objectNo = sample.objectNo + 1
        self.objNumber = sample.objectNo 
  
    def myFunc1(self): 
        return self.name, self.objNumber
  
    def alterIt(self, newName): 
        self.name = newName 
  
    @staticmethod
    def myFunc2(): 
        return "I am not a bound method !!!"
  
samp1 = sample("A") 
samp2 = sample("B") 
samp2.alterIt("C") 
print(samp1.myFunc1() + samp2.myFunc1())
print(samp1.myFunc2())
````
### Options
a. prints ('A', 1, 'B', 2) and "I am not a bound method !!!"
b. prints ('A', 1, 'C', 2) and error for 2nd print
c. prints ('A', 1, 'C', 2) and "I am not a bound method !!!"

## Question 10
The feature in object-oriented programming that allows the same operation to be carried out differently, depending on the object, is:
### Options
a. Polymorphism
b. Inheritance
c. Overriding

