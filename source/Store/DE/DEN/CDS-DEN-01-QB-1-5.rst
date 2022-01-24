Module-3 Quiz-1 Question & Answers with Explanation
==================================================

**Based on Intro to Big Data, Relational Databases, NoSQL Databases: HBase/Big Table, Cassandra/Key-Value Store, Introduction to Big Data storage systems, Distributed File Systems/HDFS, Cloud storage**

1. Match the following tasks of the Data Analysis Lifecycle with their respective components :

+------------------------------+----------------------------------------------------------------------------------+
| "i." Acquiring data          | "a." Trends, clusters, classification                                            |
+------------------------------+----------------------------------------------------------------------------------+
| "ii." Performing Analytics   | "b." develop algorithms, map to abstractions, implement on platforms             |
+------------------------------+----------------------------------------------------------------------------------+
| "iii." Translating to        | "c." Sensors, web logs, crawls, transactions                                     |  
|        scalable applications |                                                                                  |
+------------------------------+----------------------------------------------------------------------------------+

Options:

A. (i)-(a), (ii)-(b), (iii)-(c)

B. (i)-(b), (ii)-(a), (iii)-(c)

C. (i)-(c), (ii)-(a), (iii)-(b)

D. (i)-(c), (ii)-(b), (iii)-(a)

**Answer: 3**

2. Select the FALSE statement:

A. Cloud computing is much cheaper than on-premise servers, one of the reasons being that it enables operational cost reduction in terms of energy and personnel

B. Strong scaling concerns how the performance varies with the number of processors for a fixed total problem size

C. Weak Scaling concerns how the performance varies with the number of processors for a fixed problem size per processor

D. Commodity clusters are readily available off the shelf for parallel computing but at a high cost of acquisition

**Answer: 4**

**Solution:**

Statements 1, 2 and 3 are correctly given. Statement 4 is False. The correct statement is: Commodity clusters are readily available off the shelf for parallel computing and at a low cost of acquisition.

3. Suppose the non-parallelizable part of a program is 40%. If there are 6 CPUs executing the parallelizable part, what is the theoretical speedup of the task execution?

Hint: Amdahl’s law: Speedup =

.. image:: Images/M3_Q1.JPG
    :width: 100px
    :align: center

Where

s is serial fraction of application (cannot be parallelized) (1 −s) is fraction of application that can be parallelized p is number of processors

Options:

1. 1.2

2. 1.66

3. 2

4. 1.08

**Answer: 3**

**Solution:**
Here, s = 0.4

So, 1-s = 0.6

p = 6

Substituting the above values in the formula Speedup = 1/ [ s + ((1-s)/p)], we get:

1 / [ 0.4 + (0.6 / 6 )]

= 1 / 0.4 + 0.1

= 1 / 0.5

= 2

4. In the Google file system (GFS) architecture schematic given below, determine the identity of the components X, Y, Z:

.. image:: Images/M3_Q1_2.JPG
    :width: 100px
    :align: center

Options:

1. X=Master, Y= GFS Client, Z= Chunk Server
2. X= GFS Client, Y= Master, Z= Chunk Server
3. X= Chunk Server, Y= Master, Z=GFS Client
4. X= Master, Y= Chunk server, Z= Master

**Answer: 2**

5. Select the correct statement(s):

1. HBase consists of columnar or wide column storage

2. HBase has rows of data with a unique row-key column

3. In HBase each row can have only a fixed, non-variable number of columns

4. In HBase, data is partitioned using row keys and column families

5. Only A, B and D

6. Only C and D

**Answer: 5**

**Solution:**

Option 3 is incorrect. The correct statement is: In HBase each row can have a variable number of columns. Therefore the correct answer is Option 5 i.e. Only 1, 2 and 4 are correct


