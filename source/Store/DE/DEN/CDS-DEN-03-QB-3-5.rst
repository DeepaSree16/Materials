Module-3 Quiz-3 Question & Answers with Explanation
==================================================

**Deep Dive into Apache Spark**


1. If RDD1 = {teak, teak, cedar, oak, rosewood} and RDD2 = {teak, oak, mahogany}, then match the following RDD transformations with their correct outputs: 

+-----------------------------------+------------------------------------------------------------+
|    Transformation                 |        Output                                              | 
+-----------------------------------+------------------------------------------------------------+
| (i) RDD1.distinct()               | (a) {cedar, rosewood}                                      |
|                                   |                                                            |    
+-----------------------------------+------------------------------------------------------------+
| (ii) RDD1.union(RDD2)             | (b) {teak, teak, teak, cedar, oak,oak, rosewood, mahogany} |
|                                   |                                                            |    
+-----------------------------------+------------------------------------------------------------+
| (iii) RDD1.intersection(RDD2)     | (c) {teak, oak}                                            |
|                                   |                                                            |    
+-----------------------------------+------------------------------------------------------------+
| (iv) RDD1.subtract(RDD2)          | (d) {teak, cedar, oak, rosewood}                           |
|                                   |                                                            |    
+-----------------------------------+------------------------------------------------------------+ 

Options:

1.  (i)- (c), (ii) - (d), (iii) - (a), (iv) - (b)

2.  (i)- (a), (ii) - (b), (iii) - (d), (iv) - (c)

3.  (i)- (d), (ii) - (b), (iii) - (c), (iv) - (a)

4.  (i)- (a), (ii) - (c), (iii) - (d), (iv) - (b)

**Answer: 3**

2. Select the False statement w.r.t. RDD persistence:

1. It is an optimization technique for iterative Spark computations, that helps to save the intermediate results so that they can be used in subsequent stages.
2. It can store data in storage levels such as Memory (Object/ Serialized) or Memory and Disk (Object/Serialized) or Disk only 
3. Recomputation is performed if a node fails or upon LRU (least recently used) eviction 
4. Manual cache removal (unpersist) is not possible

**Answer: 4**

**Solution:** 
Statements 1, 2 and 3 are True. Statement 4 is False. The correct statement is ‘Manual cache removal  using RDD.unpersist() is possible.’

3. Select the correct output for ‘pink’ after an aggregation transformation is performed on a pair RDD:

.. image:: Images/img1-Q3.png
    :width: 15px
    :align: center

Options: 

1. (1, 5)

2. (5, 1)

3. (1, 1)

4. (3, 2)

**Answer: 2**

4. Select the correct sequence of steps for the combineByKey transformation operation:

(i) createCombiner: Function called the first time a key is seen on each partition. Initializes the accumulator value for that key
(ii) mergeCombiners: Function used to combine accumulator values for the same key from multiple partitions
(iii) mergeValue: Function called for each subsequent value for a key on a partition. Merges value with current accumulator’s value

Options:

1. (i), (ii), (iii)
2. (iii), (i), (ii)
3. (i), (iii), (ii)
4. (ii), (i), (iii)

**Answer: 3**

5. Select the statement(s) that correctly describe(s) the characteristics of Accumulators:

(i) Do not allow implicit sharing of data between driver and Spark operations. Each operation on a partition gets a copy of constant value
(ii) Help share values between driver and Spark operations 
(iii) Efficiently send a large, read-only value to all the worker nodes

Options:

1. Only 1
2. Only 1 and 2
3. 1, 2 and 3
4. Only 2 and 3

**Answer: 2**

**Solution:**
Statement 1 and 2 describe the characteristics of Accumulators. Statement 3 describes the characteristic of Broadcast variables. So only 1 and 2 are correct, i.e. option 2.

