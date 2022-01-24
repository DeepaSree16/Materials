Module-3 Quiz-2 Question & Answers with Explanation
==================================================

**Based on Big Data processing with Apache Spark**

1. Select the correct sequence of steps that shows how a Web Crawl and Search task is performed:

'(a)' lookup of keyword in inverted index

'(b)' find URLs matching the keywords

'(c)' join top n pages with URL and title 

'(d)' lookup PageRank of all matching URLs

'(e)' sort and Select top n PageRank URLs

'(f)' return result to user and suggest similar searches (co-occurrence)

Options:

1. (a), (b), (c), (d), (e), (f)
2. (a), (b), (d), (e), (c), (f)
3. (a), (b), (e), (d), (c), (f)
4. (b), (a), (c), (e), (d), (f)

**Answer: 2**

2. Select the False statement w.r.t. Map and Reduce functions:

1. A map operation is called multiple times on every input item
2. A map operation returns a series of intermediate key/value pairs 
3. Shuffle groups together all values with a given key
4. Reduce is called once on every unique key and all its values

**Answer: 1**

**Solution:**
Statements 2, 3 and 4 are correct. Statement 1 is False. The correct statement is ‘A map operation is called once on every input item’

3. Select the correct sequence of operations for the components of the given figure:

.. image:: Images/M3_Q2.JPG
    :width: 100px
    :align: center

1. (i)-Input (ii)-Splitting (iii)-Reducing (iv)-Mapping (v)-Shuffling (vi)-Output
2. (i)-Input (ii)-Splitting (iii)-Shuffling (iv)-Mapping (v)-Reducing (vi)-Output
3. (i)-Input (ii)-Splitting (iii)-Mapping (iv)-Shuffling (v)-Reducing (vi)-Output
4. (i)-Input (ii)-Splitting (iii)-Mapping (iv)-Reducing (v)-Shuffling (vi)-Output

**Answer: 3**

4. Select the FALSE statement w.r.t. Spark RDDs:

1. Can be used for read and modify operations as they are mutable
2. Consist of a collection of homogenous objects 
3. Load data on partitions on different workers
4. Transformations create another RDD and Actions return a value 

**Answer: 1**

**Solution:** 

Statements 2, 3 and 4 are True. Statement 1 is False. The correct statement is Spark RDDs can be used for read-only operations as they are immutable.


5. Match the following common transformations with their descriptions correctly:

+-------------------------+------------------------------------------------------------------------------------+
| "i." Filter             | "a." concatenates items in two RDDs into output RDD, without removing duplicates   |
+-------------------------+------------------------------------------------------------------------------------+
| "ii." Distinct          | "c." applies conditional logic to each element                                     |
+-------------------------+------------------------------------------------------------------------------------+
| "iii." Union            | "b." all-to-all combination of inputs from RDDs in the output RDD                  |
+-------------------------+------------------------------------------------------------------------------------+
| "iv." Cartesian product | "d." copies only unique items into output RDD                                      |
+-------------------------+------------------------------------------------------------------------------------+

Options:

1. (i)-(b), (ii)-(d), (iii)-(a), (iv)-(c)
2. (i)-(b), (ii)-(d), (iii)-(c), (iv)-(a)
3. (i)-(b), (ii)-(c), (iii)-(a), (iv)-(d)
4. (i)-(d), (ii)-(b), (iii)-(c), (iv)-(a)


**Answer: 1**


