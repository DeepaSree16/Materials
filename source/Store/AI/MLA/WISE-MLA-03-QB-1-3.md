# Question 1

Which one of the following is square matrix?

### Options

a. 2 X 3 Matrix
b. 3 X 3 Matrix
c. 3 X 2 Matrix

**Answer:** b

# Question 2

Which of the following is false with regard to upper triangularity?

### Options

a. The sum of two upper triangular matrices is upper triangular
b. The product of two upper triangular matrices is upper triangular.
c. The sum of an upper and a lower triangular matrix is upper triangular

**Answer:** c

# Question 3


The _________ of one matrix is another matrix that is obtained by using rows from the first matrix as columns in the second matrix. 

### Options

a. Transpose
b. Symmetric
c. Diagonal

**Answer:** a

# Question 4

Which one of the following is upper triangular matrix?

### Options

a. [1, 0, 0] [2, 8, 0] [4, 9, 7]
b. [1, 4, 1] [0, 6, 4] [0, 0, 1]
c. [1, 2, 3] [4, 5, 6] [7, 8, 9]

**Answer:** b

# Question 5

What is the output of the below code?

````python

from numpy import array, tril
A = array([[1, 2, 3], [1, 2, 3], [1, 2, 3]])
print(tril(A))

````
### Options

a. [[1 0 0] [1 2 0] [1 2 3]]
b. [[1 2 3] [0 2 3] [0 0 3]]
c. [[1 2 3] [0 2 3] [1 2 3]]

**Answer:** a

# Question 6

What is the output of the below code?

````python

from numpy import array
a, b = array([1, 2, 3]), array([4, 5, 6])
print (a + b)

````
### Options

a. [5 7 9]
b. [2 4 6]
c. [9 7 5]

**Answer:** a

# Question 7

What is the output of the below code?

````python

from numpy import array
a = array([[3, 6, 5], [7, 0, -3]])
b = array([[1, 1], [2, 1], [-3, 3]])
print (a.dot(b))

````
### Options

a. [[ 0 24] [16 -2]]
b. [[36 -12] [-1 2]]
c. [[24 0] [-2 16]]

**Answer:** a

# Question 8

What is the output of the below code?

````python
from numpy import array
a = array([[1, 2], [3, 4]])
print(a.T)

````
### Options

a. [[1 3] [2 4]]
b. [[1 2] [3 4]]
c. [[1 0] [0 1]]

**Answer:** a

# Question 9

Find the (AB) ^ T (means find the transpose of product of A (2 X 2) and B (2 X 3), where,
A = [1, 2] [0, -1] and B = [-1, 3, 0] [4, 1, -6]

### Options

a. [7, 5] [-12, -4] [-1, 6]
b. [7, -4] [5, -1] [-12, 6]
c. [-4, 7] [-1, 5] [6, -12]

**Answer:** b

# Question 10

Check whether the below matrices A (2 X 2) and B (2 X 2) are commutative?

A = [1, 0] [0, 4] and B = [-2, 0] [0, 3]

### Options
a. Above matrices are not commutative
b. Above matrices are commutative
c. Commutative for the above matrices are not defined

**Answer:** b
