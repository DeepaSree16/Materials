Module-3 Quiz-5 Question & Answers with Explanation
==================================================

**Based on Fast Data Processing: Stream Processing & CEP**

1. Match the components and their descriptions correctly w.r.t a Kafka system:

+--------------------------------+--------------------------------------------------------------------------+
|    1. Broker                   |  (a) Keeps the state of the cluster(brokers, topics, users)              |
+--------------------------------+--------------------------------------------------------------------------+
|    2. Producer                 |  (b) Handles all requests from clients (produce, consume and metadata)   |
+--------------------------------+--------------------------------------------------------------------------+
|    3. Zookeeper                |  (c) Pulls batches of records from the broker                            |
+--------------------------------+--------------------------------------------------------------------------+
|    4. Consumer                 |  (d) Sends record to a broker                                            |
+--------------------------------+--------------------------------------------------------------------------+

Options:

A. 1-(b), 2-(d), 3-(a), 4-(c)
B. 1-(a), 2-(b), 3-(c), 4-(d)
C. 1-(b), 2-(d), 3-(c), 4-(a)
D. 1-(a), 2-(c), 3-(b), 4-(d)

**Answer: A**

2. Select the FALSE statement:

A. Apache Kafka decouples producers and consumers by using a push-pull model
B. In a topic, the ordering is preserved within a partition, not across
C. In a Kafka cluster, partitions are replicated to other brokers for redundancy, if leader fails
D. Vertical scaling is maintained in a Kafka cluster

**Answer: D**

**Solution:** 

Statements A, B and C are True. Statement D is false. The correct statement is: Horizontal scaling is maintained in a Kafka cluster

3. What does the following figure indicate?

.. image:: Images/M3_Q5_q3.png
    :width: 100px
    :align: center

A. Multiple partitions should be linked to the same consumer 
B. It is not possible to have more consumers than partitions
C. Having more consumers than partitions is of no use, and therefore avoidable

**Answer: C**

4. Select the TRUE statement(s):

A. Latency is the time taken to process a single tuple by a task.
B. Selectivity is the ratio of the average number of output tuples expected for each input tuple
C. In a DAG, Streams are user-defined logic (vertices) and Tasks are channels between Streams (edges)
D. Both A and B
E. A, B and C

**Answer: D**

Statement C is false. The correct statement is: In a DAG, Tasks are user-defined logic (vertices) and Streams are channels between Tasks (edges)

5. Traditional Stream Processing is concerned with finding ________(i)____________in data, such as the ______(ii)_________, whereas Complex Event Processing finds ________(iii)_________in a multi-level system, such as the ________(iv)_________


A. (i) high-level inferences (ii) number of mouse clicks per min (iii) low-level patterns (iv) customer’s intentions and feelings
B. (i) low-level patterns (ii) number of mouse clicks per min (iii) high-level inferences  (iv) customer’s intentions and feelings
C. (i) low-level patterns (ii) customer’s intentions and feelings (iii) high-level inferences (iv) number of mouse clicks per min   
D. (i) high-level inferences (ii) customer’s intentions and feelings (iii) low-level patterns (iv) number of mouse clicks per min

**Answer: B**
