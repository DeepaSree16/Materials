Big data processing with Apache Spark: Spark Internals, Spark Tuning, ETLs, Delta Lake
======================================================================================

1. Based on the logical plan of the Spark architecture, select which of the following indicate the characteristics of a narrow dependency (N) vs a wide dependency (W):

1. Each input partition contributes to exactly one output partition
2. The transform tasks operating on a partition can have pipelined execution
3. Each output partition depends on parts of one or more input partition 
4. It forces a shuffle across Workers

Options:

1. (i)-W, (ii)-N, (iii)-W, (iv)-N
2. (i)-N, (ii)-N, (iii)-W, (iv)-W
3. (i)-N, (ii)-W, (iii)-N, (iv)-W
4. (i)-W, (ii)-W, (iii)-N, (iv)-N

**Answer: 2**

**Solution:**

.. image:: Images/img1-Q4.PNG
    :width: 100px
    :align: center


    
2. Which of the following is FALSE w.r.t. a DAG Scheduler:

1. It schedules tasks onto Executors
2. It creates tasks for different transformations
3. It creates a logical dataflow with stages that are separated by a wide dependency
4. It triggers all stages at once, even without the completion of the previous stage’s tasks

**Answer: 4**

**Solution:**
Statements 1, 2 and 3 are TRUE w.r.t DAG Schedulers. Statement 4 is FALSE. The correct statement is ‘It triggers subsequent stages once tasks of the previous stage are completed’.



3. Select the correct terms, to fill the blanks in the following statements: 

1. In the _______ process, data are moved from source databases to a target data warehouse
2. In the ______ stage, data is obtained from various sources such as files and databases
3. In the _____ stage, data is inserted into the eventual data warehouse
4. In the _____ stage, the data format is converted and cleaned up

Options:

1. (i)Extraction (ii) ETL (iii) Load (iv) Transform
2. (i)Transformation (ii) Extract (iii) Load (iv) Transform
3. (i)ETL (ii) Extract (iii) Load (iv) Transform
4. (i)ETL (ii) Load (iii) Transform (iv) Extract

**Answer: 3**

4. If a distributed computer system operates such that (1) it responds using the most current values AND (2) it is rapidly responsive (will self-repair at the earliest if some single component fails). Then, according to the CAP theorem, which of the following properties is not concurrently possible?

1. Partition Tolerance
2. Consistency
3. Availability

**Answer: 1**

**Solution:** 
If a distributed system responds using the most current values, as mentioned in (1), then it fulfills the property of Consistency; If a system is rapidly responsive (will self-repair at the earliest if some single component fails), as mentioned in (2), then it fulfills the property of Availability. In such a scenario, according to the CAP theorem, the property that will remain unfulfilled is Partition tolerance, in which the system continues to respond even if its services are temporarily unable to talk to each other. Therefore, the correct choice is (1) Partition tolerance.


5. Correctly match the type of visualizations with their respective uses and plot examples:

.. image:: Images/img2-Q4.png
    :width: 100px
    :align: center


Options:

1. (i)-(b)-(II), (ii)-(c)-(III), (iii)-(d)-(I), (iv)-(a)-(IV)
2. (i)-(d)-(III), (ii)-(a)-(I), (iii)-(c)-(IV), (iv)-(b)-(II)
3. (i)-(a)-(I), (ii)-(c)-(II), (iii)-(d)-(IV), (iv)-(b)-(III)
4. (i)-(b)-(III), (ii)-(d)-(I), (iii)-(a)-(II), (iv)-(c)-(IV)

**Answer: 4**



