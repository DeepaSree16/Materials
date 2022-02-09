# Question 1

A set of items is called frequent if it satisfies a __ threshold value for support and confidence

### Options

a. minimum
b. maximum

**Answer:** a

# Question 2

__ shows transactions where the items are purchased one after the other.

### Options

a. Support
b. Confidence
c. frequent itemset

**Answer:** b

# Question 3

__ shows transactions with item purchased together in a single transaction.

### Options

a. Suport
b. Confidence
c. frequent itemset

**Answer:** a

# Question 4

Apriori uses __ approach, where frequent subsets are extended one item at a time

### Options

a. Top-down
b. Bottom-up

**Answer:** b

# Question 5

Consider the database containing the transactions T1 : {a1, ..., a3}, T2 : {a2, ..., a4}. Let minsup = 1. What fraction of all frequent patterns is max frequent patterns?

### Options

a. 11 / 2
b. 2 / 11
c. 3 / 11

**Answer:** b

# Question 6

Consider the database containing the transaction T1 : {a1, a2, a3}, T2 : {a2, a3, a4}. Let minsup = 1. What fraction of all frequent patterns is closed?

### Options

a. 11 / 2
b. 2 / 11
c. 3 / 11

**Answer:** c

# Question 7

Considering Apriori Algorithm, assume we have 5 items (A to E) in total. In the 1-st scan, we find out all frequent items A, B, C, and E. How many size-2 (i.e. containing 2 items, e.g. A, B) itemsets should be considered in 2-nd scan, i.e. are potential to be size-2 frequent itemsets?

### Options

a. 5
b. 6
c. 11

**Answer:** b

# Question 8

Apriori algorithm is an __ algorithm

### Options

a. iterative
b. procedural

**Answer:** a

# Question 9

Frequency of occurrence of an itemset is called __

### Options

a. Support
b. Support count
c. Frequency itemset

**Answer:** b

# Question 10

Support of an itemset never exceeds the suport of its subset. Is this statement correct?

### Options

a. True
b. False

**Answer:** a

# Question 11

Which of the following is direct application of frequent itemset mining?

### Options

a. Network Analysis
b. Market Basket Analysis
c. Outlier Detection

**Answer:** b 

# Question 12

What is association rule mining?

### Options

a. Same as frequent itemset mining
b. Finding of strong association rules using frequent itemsets
c. Using association to analyse correlation rules

**Answer** b

# Question 13

The apriori algorithm works in __ fashion?

### Options

a. breath-first
b. depth-first

**Answer:** a

# Question 14

Which of the following is a advantage of Apriori algorithm?

### Options

a. Easily Parallelized
b. Requires many database scans
c. Assumes transaction database is memory resident

**Answer:** a

# Question 15

Which of the following statement is incorrect about Apriori principle?

### Options

a. If an itemset is frequent, then all of its subsets must also be frequent
b. If an itemset is not frequent, then all of its supersets cannot be frequent
c. If an itemset is not frequent, then all of its supersets must be frequent

**Answer:** c

# Question 16

Which of the following statement is known as anti-monotone property of support?

### Options

a. The support of an itemset never exceeds the support of its subsets
b. The support of an itemset always exceeds the support of its subsets
c. The support of an itemset sometimes exceeds the support of its subsets

**Answer:** a 

# Question 17

Arrange the order of steps in apriori algorithm

1. Join the frequent itemsets to form sets of size k + 1, and repeat the above sets until no more itemsets can be formed. This will happen when the set(s) formed have a support less than the given support.
2. Calculate the support of item sets (of size k = 1) in the transactional database (note that support is the frequency of occurrence of an itemset). This is called generating the candidate set.
3. Prune the candidate set by eliminating items with a support less than the given threshold.

### Options

a. 1, 2, 3
b. 2, 3, 1
c. 2, 1, 3

**Answer:** b

# Question 18

Which of the following is incorrect about Apriori algorithm?

### Options

a. It's very fast
b. It uses bottom-up approach
c. Easy to implement

**Answer:** a

# Question 19

If {coffee} => {milk} is a association rule, then we can call coffee as __

### Options

a. Antecedent
b. Consequent
c. frequent item

**Answer:** a

# Question 20

What do you mean by support(A)?

### Options

a. Number of transactions not containing A / Total number of transactions
b. Number of transactions containing A / Total number of transactions
c. Total number of transactions containing A

**Answer:** b

# Question 21

The __ step eliminates the extensions of (k - 1) itemsets which are not found to br4 e frequent, from being considered for counting support.

### Options

a. Joining
b. Pruning
c. Candidate generation

**Answer:** b

# Question 22

If {p, q, r, s} is a frequent itemset, candidate rules which is not possible is

### Options

a. r -> p
b. p -> qr
c. s -> pqrs

**Answer:** c

# Question 23

If an itemset of 'ABC' is a frequent itemset, then all subsets of that frequent itemset are __

### Options

a. not frequent
b. frequent
c. undefined

**Answer:** b

# Question 24

Classification rules are extracted from __

### Options

a. decision tree
b. apriori 
c. knn

**Answer:** a

# Question 25

A good clustering method will produce high quality clusters with __ class smilarity

### Options

a. high intra
b. high inter
c. no inter class

**Answer:** a

# Question 26

Which of the following statements is incorrect about K-means algorithm?

### Options

a. The K-means algorithm can detect non-convex clusters
b. The centroids in the K-means algorithm may not be  any observed data points
c. It is sensitive to outliers

**Answer:** a

# Question 27

To determine association rules from frequent items sets we need __

### Options

a. Only minimum confidence
b. Only minimum support
c. Both minimum confidence and support

**Answer** a

# Question 28

Dimensionality reduction reduces the dataset size by removing __ attributes

### Options

a. Derived 
b. irrelevant
c. relevant

**Answer:** b

# Question 29

Which of the following is not an example of ordinal attributes?

### Options

a. Product ratings
b. zip codes
c. ranks of students

**Answer:** b

# Question 30


What is gini index?

### Options

a. Measure of purity
b. It is a type of index structure
c. used to derive rules

**Answer** a
