# CFP

## Question 1
What is the output of the below code?
````python
class Card:
    special_names = {1:'Ace', 11:'Jack', 12:'Queen', 13:'King'}
    def __init__(self, suit, pips):
        self.suit = suit
        self.pips = pips

    def __str__(self):
        card_name = Card.special_names.get(self.pips, str(self.pips))
        return "%s of %s (S)" % (card_name, self.suit)

    def __repr__(self):
        card_name = Card.special_names.get(self.pips, str(self.pips))
        return "%s of %s (R)" % (card_name, self.suit)

ace_of_spades = Card('Spades', 1)
my_hand = repr(str(ace_of_spades))
print(my_hand)
````
### Options
a. 'Ace of Spades (S)' 'Ace of Spades (R)'
b. 'Ace of Spades (R)'
c. 'Ace of Spades (S)'

## Question 2
What is the output of the below code?
````python
def myfunc(l):
    return sum(l[:-1])

l1, l2, l3 = [1, 2, 3, 4, 5, 6], [6, 7, 8, 9, 10, 11], [10, 20, 30, 40, 50]
mylist = [l1, l2, l3]
res = 0
for l in mylist:
    res += myfunc(l)
print (res)
````
### Options
a. 155
b. 100
c. 222

## Question 3
What is the output of the below code?
````python
D = {1 : {'A' : {1 : "A"}, 2 : "B"}, 3 :"C", 'B' : "D", "D": 'E'}
print(D[1][2], D[D[D[1][2]]])
````
### Options
a. B B
b. E B
c. B E

## Question 4
What is the output of the below code?
````python
print("" or {}, {} or [], 1 and (0), 0 and (1))
````
### Options
a. {} [] 1 0
b. {} [] 0 0
c. "" [] 1 1

## Question 5
What is the output of following program?
````python
class Plist(list):
    def __init__(self, l):
        list.__init__(self, l)

    def push(self, item):
        self.append(item)

x = Plist([3, 4])
x.push(47)
print(x)
````
### Options
a. [3, 4, 47]
b. None
c. [3, 4]

## Question 6
What is the output of the below code?
````python
def foo(x):
    if x == 0:
        return 2
    elif x == 1:
        return 3
    else:
        return foo(x - 1) + foo(x - 2)
for i in range(0, 6):
    print(foo(i), end=" ")
````
### Options
a. 1 2 3 5 8 13
b. 2 3 5 8 13 21
c. 0 1 1 2 3 5

## Question 7
What is the output of the below code?
````python
L = []

def foo(y):
    if y == 0:
        return L
    num = y % 2
    L.append(num)
    foo(y//2)
foo(6)
L.reverse()
print(L)
````
### Options
a. [1, 1, 0]
b. [0, 1, 1]
c. [1, 0, 0]

## Question 8
What is the output of the below code?
````python
v3 = int("123", 9)
v4 = int("123", 12)
v5 = int("123", 20)
v6 = int("123", 36)
vals = [0o1234, v3, 1234, v4, 0x1234, v5, v6]
print(sum(vals))
````
### Options
a. Error
b. 3695
c. 8649

## Question 9
What is the output of the below code?
````python
def myfunc():
    global x
    x = 100
    x = x + 1

x = 10
myfunc()
print(x)
````
### Options
a. 10
b. 101
c. 100

## Question 10
What is the output of the below code?
````python
res = 0
for i in range(1, 5): 
    for j in range(i):
        if i == j:
            break
        res += i
print(res)
````
### Options
a. 30
b. 14
c. 55

