Module-2 Quiz-1 Question & Answers with Explanation
==================================================

**Based on Probability Basics, Conditional Probability, Bayes Rule**

1. Tickets are numbered from 1 to 100. They are well shuffled and a ticket is drawn at random. What is the probability that the drawn ticket has:

(i)  An odd number
(ii) A number greater than 25
(iii) A number which is a square

Options:

A. (i) 0.6 (ii) 0.25 (iii) 0.6 
B. (i) 0.5 (ii) 0.75 (iii) 0.1
C. (i) 0.25 (ii) 0.25 (iii) 0.25 
D. (i) 0.5 (ii) 0.75 (iii) 0.2

**Answer: B**

**Solution:**

(i) Probability of an odd number in tickets numbered 1 - 100: 
     50/100 = ½ = 0.5
(ii) Probability of a number greater than 25 in tickets numbered 1 - 100:
     75/100 = ¾ = 0.75
(iii) Probability of a square number in tickets numbered 1-100:
      10/100 = 0.1


2. If an experiment has three possible and mutually exclusive outcomes, A, B and C, check in each case whether the given assignment of probabilities is permissible:

(i) P(A) = ⅓, P(B) = ⅓, P(C) = ⅓
(ii) P(A) = 0.64, P(B) = 0.38, P(C) = -0.02
(iii) P(A) = 0.35, P(B) = 0.52, P(C) = 0.26
(iv) P(A) = 0.57, P(B) = 0.24, P(C) = 0.19

Options: 

A. (i) Yes (ii) No (iii) Yes (iv) No
B. (i) Yes (ii) No (iii) No (iv) No
C. (i) Yes (ii) No (iii) No (iv) Yes
D. (i) Yes (ii) Yes (iii) No (iv) No

**Answer: C**

**Solution:**

The 3 axioms of probability are:

    1. For any event A, P(A) ≥ 0 i.e. Probability of an event A is always non-negative
    2. When S is the sample space of an experiment; i.e., the set of all possible outcomes, P(S) = 1, i.e. The probability of any of the outcomes happening is one hundred percent
    3. If A and B are mutually exclusive outcomes, the probability of either A or B happening is the probability of A happening plus the probability of B happening i.e. P(A ∪ B ) = P(A) + P(B)

**Statement (ii) does not satisfy the first axiom so it is not permissible
Statement (iii) does not satisfy the second axiom so it is not permissible
Therefore the correct option is C: (i) Yes (ii) No (iii) No (iv) Yes**

3. A probability mass function example is given below :
Let X be a random variable, and P(X=x) is the PMF given in the table below. Determine the value of k. Hint: ∑P(xi)=1.

+------------+----+----+----+----+----+------+--------+---------+
| X          | 0  | 1  | 2  | 3  | 4  | 5    | 6      | 7       |
+------------+----+----+----+----+----+------+--------+---------+
| P(X=x)     | 0  | 3k | 4k | 3k | 5k | 8k^2 | 12k^2  | 16k^2+k |
+------------+----+----+----+----+----+------+--------+---------+

Options:

A. 1/10
B. 1/18
C. 1/6
D. 2/9

**Answer: B**

**Solution :**

(1) We know that;

∑P(xi)=1

Therefore,

0 + 3k + 4k + 3k + 5k + 8k^2 + 12k^2 + 16k^2+ k = 1

16k + 36k^2 = 1

36k^2 + 16k – 1 = 0

36k^2 + 18k – 2k - 1 = 0

18k(2k + 1) -1(2k + 1) = 0

(18k – 1) ( 2k + 1 ) = 0

So, 18k – 1 = 0 and 2k + 1 = 0

Therefore, k = 1/18 and k = -1/2

k=-1/2 is not possible because probability value ranges from 0 to 1.

Hence, the value of k is 1/18.

4. Match the correct pairs:

+---------------------------------------+------------------------------------------------+
| (i) Continuous random variable        | (a) quantities such as the number of           |
|                                       | students in a class, the number of voters      |
|                                       | who showed up to the polls, the number         |
|                                       | of passing scores on an exam                   |
+---------------------------------------+------------------------------------------------+
| (ii) Discrete random variable         | (b) quantities such as pressure, height,       |
|                                       | mass, weight, density, volume, temperature     |
|                                       | i.e. between any two values of these           |
|                                       | quantities there are an infinite number        |
|                                       | of other valid values                          |
+---------------------------------------+------------------------------------------------+
| (iii) Probability mass function       | (c) a function, f(X), that defines the         |
|                                       | probability of the discrete random variable    |
|                                       | X taking on a particular value x.              |
+---------------------------------------+------------------------------------------------+
| (iv) Cumulative distribution function | (d) a function, f(x), that is the probability  |
|                                       | that a random variable c, from a particular    |
|                                       | distribution, is less than x                   |
+---------------------------------------+------------------------------------------------+ 

Options:

A. (i) - (a), (ii) - (b), (iii) - (c), (iv) - (d)
B. (i) - (a), (ii) - (b), (iii) - (d), (iv) - (c)
C. (i) - (b), (ii) - (a), (iii) - (d), (iv) - (c)
D. (i) - (b), (ii) - (a), (iii) - (c), (iv) - (d)

**Answer: D**

5. Consider the data in the following table, recorded over a month of 30 days. On each day it was recorded whether it was sunny (S), or not (NS), and whether the recorder’s mood was good (G), or not (NG). Determine what is P (S | G ).

.. image:: Images/M2_Q1_q5.png
    :width: 75px
    :align: center

68%
45%
80%
51%

**Answer: C**

**Solution:**

 P (S | G )  = P(G ∩ S) / P(G) = (12/30) / (15/30) = 12/15 = 4/5 = 80%
