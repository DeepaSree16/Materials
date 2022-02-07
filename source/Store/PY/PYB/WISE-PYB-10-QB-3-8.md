# CFP

## Question 1
What is the output of the below code?
````python
D = dict()
for x in enumerate(range(2)):
    D[x[0]] = x[1]
    D[x[1] + 7] = x[0]
print(D)
````
### Options
a. {7: 0, 0: 0, 8: 1, 1: 1}
b. {0: 0, 7: 0, 1: 1, 8: 1}
c. {0: 1, 7: 0, 1: 0, 8: 1}

## Question 2
What is the output of the below code?
````python
def compute(x, y):
   while(y):
       x, y = y, x % y
   return x

res = (compute(300, 400), compute(98, 56), compute(60, 48))
print(sum(res))
````
### Options
a. 106
b. 126
c. 116

## Question 3
What is the output of the below code?
````python
l1 = [12, 65, 54, 39, 102, 339, 221]
print(list(map(lambda x: x + 1, filter(lambda x: x % 0o15 == 0, l1))))
````
### Options
a. [66, 40, 222]
b. [65, 39, 221]
c. [67, 41, 223]

## Question 4
What is the output of the below code?
````python
x = y = z = 10, 20, "30"
print(x, y, z)
````
### Options
a. Error
b. (10, 20, '30') (10, 20, '30') (10, 20, '30')
c. 10 20 '30'

## Question 5
What is the output of following program?
````python
print(0x76 | 0x23, 0x76 | 0o23, 0o76 | 0x23)
````
### Options
a. 34 119 63
b. 34 18 34
c. 119 119 63

## Question 6
What is the output of the below code?
````python
class AttrTest:
    def __init__(self, a, b, c):
        self.X = a + b + c
        
p1, p2 = AttrTest(7, 8, 9), AttrTest(7, 8, 9)
b = getattr(p1, 'X')
setattr(p1, 'X', b + 1)
print(p2.X)
````
### Options
a. 24
b. 25
c. Error

## Question 7
What is the output of the below code?
````python
def myfunc(l):
    return sum(l[:-2])

mylist = [ [1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [10, 20, 30, 40, 50, 60] ]
res = 0
for l in mylist:
    res += myfunc(l)
print (res)
````
### Options
a. 190
b. 87
c. 127

## Question 8
What is the output of the below code?
````python
v3 = int("1234", 9)
v4 = int("1234", 12)
v5 = int("1234", 20)
v6 = int("1234", 36)
vals = [0o1234, v3, 1234, v4, 0x1234, v5, v6]
print(min(vals) + max(vals))
````
### Options
a. 668
b. 49360
c. 50028

## Question 9
What is the output of the below code?
````python
print(bin(10 - 2) + bin(12 ^ 4))
````
### Options
a. 0b10000b1000
b. 0b10000
c. Error

## Question 10
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
my_hand = str(repr(ace_of_spades))
print(my_hand)
````
### Options
a. Ace of Spades (S)
b. Ace of Spades (R)
c. Ace of Spades (S) Ace of Spades (R)

