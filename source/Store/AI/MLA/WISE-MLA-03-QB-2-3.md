# Question 1

What is the output of following program?

````python
from numpy import array, triu
A = array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
print(triu(A))

````
### Options

a. [[1 0 0] [4 5 0] [7 8 9]]
b. [[1 2 3] [0 5 6] [0 0 9]]
c. [[0 0 9] [0 5 6] [1 2 3]]

**Answer:** b

# Question 2

The _________ of one matrix is another matrix that is obtained by using rows from the first matrix as columns in the second matrix. 

### Options

a. Transpose
b. Symmetric
c. Diagonal

**Answer:** a

# Question 3

Which one of the following statements is false about identity matrix?

### Options

a. Identity matrix can be square or rectangular matrix
b. Identity matrix sometimes ambiguously called a unit matrix
c. Identity matrix has the property that, when it is the product of two square matrices, the matrices can be said to be the inverse of one another

**Answer:** a

# Question 4

Consider the following matrices:

A = [2, -1] [3, 0] [-5, 2]

B = [4, 4, -3] [0, -1, -2]

C = [1, 6] [-1, -2] [0, -3]

Which of the following 2 matrices can be added?

### Options

a. A & B
b. A & C
c. B & C

**Answer:** b

# Question 5

Given the two matrices A (2 X 3) and B (3 X 4) as follows:

A = [1, 0, -3] [-2, 4, 1] and B = [1, 0, 4, 1] [-2, 3, -1, 5] [0, -1, 2, 1]

determine which matrix produce, AB or BA is defined and what is result after evaluation.

### Options

a. Operation not allowed or not defined
b. [1, 3, -2, -2] [-10, 11, -10, 19]
c. [1, -10, 3, 11] [-2 -10, -2, 19]

**Answer:** b

# Question 6

Which of the following is not correct with respective to matrix multiplications, assuming A and B are matrices?

### Options

a. If both products of AB and BA are defined then AB is equal BA
b. If the product AB is defined, then the transpose of the product is equal to the product of the transposes in the reverse order.
c. If A, B, and C are any three matrices such that the product (AB)C is defined, then the product A(BC) is also defined then it is always associative.

**Answer:** a

# Question 7

What is the output of the below code?

````python
from numpy import array, diag
A = array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
d = diag(A)
print(diag(d))

````
### Options
a. [[1 0 0] [0 2 0] [0 0 3]]
b. [[1 0 0] [0 5 0] [0 0 9]]
c. [1 5 9]

**Answer:** b

# Question 8

What is the output of the below code?

````python
from numpy import identity
print(identity(3))

````
### Options

a. [[1. 0. 0. 0.] [0. 1. 0. 0.] [0. 0. 1. 0.] [0. 0. 0. 1.]]
b. [[1. 0.] [0. 1.]]
c. [[1. 0. 0.] [0. 1. 0.] [0. 0. 1.]]

**Answer:** c

# Question 9

What is the output of the below code?

````python
from numpy import array
from numpy.linalg import inv
a = array([[1, 2], [3, 4]])
print(a.dot(a.T))

````
### Options

a. 52
b. [[ 5 11] [11 25]]
c. [[11 5] [25 11]]

**Answer:** b

# Question 10

What is the output of the below code?

````python

from numpy import array
a, b = array([1, 2, 3]), array([4, 5, 6])
print (a * b)

````
### Options

a. [6 10 12]
b. [18 10 4]
c. [ 4 10 18]

**Answer:** c
