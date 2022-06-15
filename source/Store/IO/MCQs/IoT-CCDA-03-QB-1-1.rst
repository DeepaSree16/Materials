---------------------
SET:  Concept Lecture
---------------------

1. **What is the level of information assurance that ensures data is not altered by a malicious user?**

    1. Confidentiality
    
    2. Integrity
    
    3. Authentication

    4. Availability

..

   **Answer:** 2

      
2. **What is the attack where secondary effects of the system are studied to gain information?**


    1. DDoS attack

    2. Rootkit attack

    3. Fuzzing attack

    4. Side Channel attack


..

   **Answer: 4**

   

3. **What attack was used in Stuxnet?** 


    1. DDoS attack
    
    2. Zero-day exploits 
    
    3. Man-in-the-Middle attack
    
    4. Replay attack



..

   **Answer: 2**

   


4. **What is the popular security mechanism used in the network layer?**

    1. Root of Trust

    2. Address Space Layout Randomization
    
    3. TLS
    
    4. None of the above


..

   **Answer:** 3



5. **What does privacy impact assessment do?**

    1. Identify originating information
    
    2. Rate the information
    
    3. Create tables for lifecycle phases with relevant data
    
    4. All of the above



..

   **Answer: 4**

   
---------------------
SET: Industry Lecture
---------------------

1. **Which of the following syntax is valid for slicing a DataFrame ‘df ’ ?**

    1. df.loc [ 1 , 2] 

    2. df.iloc [ ‘a’ , ’b’] 

    3. df.iloc[  : , 0 : 2 ]

    4. All above

..

   **Answer: 3**

2. **A DataFrame ‘ df ’ contains ‘size’, ‘shape’ & ‘quantity’ as the name of its three columns. Which of the following is a valid syntax for slicing any column/s?**

    1. df [ ‘size’,’shape’]
    
    2. df.shape
    
    3. df [‘size’]
    
    4. df.size


..

   **Answer:** 3


3. **Say following is a syntax for importing a library in colab notebook:**
    
    |import pandas as np

    |Now select a true statement.


    1. np is used as an alias for numpy.

    2. pd is used as an alias for pandas.
    
    3. np is used as an alias for pandas.
    
    4. It is a wrong syntax & throws an error.

..

   **Answer:** 3
   

   
4. **pd.read_csv ( ) : is used to upload a file as a DataFrame, which contains coma separated values.**

    1. True

    2. False


..

   **Answer:** 1

    

5. **.unique() : is used :**

    1. to get all the unique entries in a column.
    
    2. to get a count of all the unique entries in a column.
    
    3. both as given in A & B.
    
    4. None

..

   **Answer:** 1

---------------------
SET : Lab Session
---------------------

1. **1.	Which of the following statements are true in the context of DataFrame?**


    1. “ .apply ()”   works on series (rows/columns in DataFrame)

    2. “ .applymap ()” works on series ( rows/columns in DataFrame)

    3. “ .apply ()” works on each element of a DataFrame.

    4. “ .applymap ()” works on each element of a DataFrame.

..

    **Answer: 1 & 4**

   


2. **In a given DataFrame ’df’, I want to get a sum of all the individual columns. Which of the following is applicable?**

    1. df.sum(axis=0)
    
    3. df.sum(axis=1)
    
    4. None
    
    5. Both 


..

   **Answer:** 1

   The argument: ‘axis=0’ inside the function: ‘.sum ()’ is used to get sum down the rows which gives the sum of   each     column.

3. **In a DataFrame ‘df’ with default integer row index, the syntax: df[1:3]  gives columns having ‘1’ and ‘2’ columns index.**

    1. True

    2. False



..

   **Answer: 2**

   The numerical values with colon inside square bracket always slice the rows and the last value is not included in the result.

  

4. **Which of the following function can be used to get a count of non-null entries in columns of a DataFrame ‘df’?**

    1. df.info()
    
    2. df.dtypes
    
    3.df.tail()
    
    4. df.head()
    
    5. df.describle()
    
    6. None



..

   **Answer: 1**


5. **Which of the following may be the shape of a single-dimensional numpy array?**

    1. Computer Science & Engineering
    
    2. Constraint Service Entity
    
    3. Common Service Enabler
    
    4. Common Service Entity


..

    **Answer: 4**

    Single dimensional array doesn’t have the concept of rows and columns and the shape function always returns a single    element tuple. The single numerical element of the resulting tuple represents the count of elements of that array. 

    


