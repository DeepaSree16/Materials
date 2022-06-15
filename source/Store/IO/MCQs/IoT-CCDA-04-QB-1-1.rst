---------------------
SET:  Concept Lecture
---------------------

1. **What is the type of data that IoT nodes generate?**

    1. Structured data
    
    2. Unstructured data
    
    3. Semi-structured data
    
    4. None of the above


..

   **Answer:** 2

      
2. **Which of the following are characteristics of Big Data?**


    1. Veracity
    
    2. Volume
    
    3. Vulnerable
    
    4. All of the above

..

   **Answer: 1 & 2**

   

3. **A new innovative irrigation method is introduced in several farms and the soil moisture retention data is obtained from all the farms over a period. Based on the data obtained, what kind of analytics will be required to know what steps need to be taken to improve the irrigation method and in turn improve the aggregate soil moisture retention in all farms taken together?** 


    1. Diagnostic
    
    2. Predictive
    
    3. Prescriptive
    
    4. Descriptive

..

   **Answer: 3**

   


4. **Of the following, which are the pre-processing steps in IoT Data Analytics?**

    1. Data cleaning
    
    2. Windowing
    
    3. Data filtering
    
    4. Linear Regression

..

   **Answer:  1&3**



5. **What analysis works on data that are computable values?**

    1. Qualitative Analysis
    
    2. Quantitative Analysis
    
    3. None of the above
    
    4. All of the above


..

   **Answer: 2**

   
---------------------
SET: Industry Lecture
---------------------

1. **Which of the following input can be accepted by DataFrame?**

    1. Structured ndarray
    
    2. Series
    
    3. DataFrame
    
    4. All of the mentioned


..

   **Answer: 4**

2. **Important data structure of pandas is/are ___________**

   1. Series
   
   2. Data Frame
   
   3. Both of the above
   
   4. None of the above



..

   **Answer:** 3


3. **Pandas Series can have _________________ data types**
    
   

    1. float
    
    2. integer
    
    3. String
    
    4. All of the above

..

   **Answer:** 4
   

   
4. **Which one below is a one-dimensional array**

    1. Data Frame
    
    2. Series
    
    3. Both of the above
    
    4. None of the above



..

   **Answer:** 2

    

5. **What is the output of the following syntax**

| import pandas as pd 
| series1 = pd.Series([10,20,30])
| print(series1)




    1.  0   10

        1   20

        2   30

    dtype: int64

    2.  0   10

        1   20

        2   30

    dtype: int32

    3.  0

        1   
            
        2   

    dtype: int64
    
    4. None

..

   **Answer:** 1 &2 
   Depends on OS and Numpy version

---------------------
SET : Lab Session
---------------------

1. **Choose all that applies in the case of PCA.**


    1. Reduce the dimensionality of the dataset.
    
    2. Reduce the size of the dataset
    
    3. The resulting features don’t represent the physical meaning of the original feature set.
    
    4. We can reduce the initial number of dimensions to any number (lower than the initial) using PCA to achieve a good prediction model.


..

    **Answer: 1, 2,& 3**
    
    Option D is wrong: We can reduce the initial dimension to any number but for a good prediction model, the number of reduced dimensions should be able to represent a higher explained variance ratio (preferably > 90%). I.e., the numbers of reduced dimensions should be sufficient to represent explained variance ratio > 90 % otherwise prediction model will not be accurate enough.

   


2. **The reduced features from PCA can be recovered back again to original features as it is.**

    1. True
    
    2. False

..

   **Answer:** 2

   The reduced features from PCA can be recovered back again but not as it is. There will be some loss of information.



3. **We always remove/drop rows containing any NaN value in the dataset as a part of data munging.**

    1. True

    2. False



..

   **Answer: 2**

   It depends on the number of NaN entries and the nature/type of the data. Based on domain knowledge we may fill those NaN entries with a suitable number (mean, median, or with value having the highest mode: - These may be one of those but again, not always).

  

4. **The ‘object’ datatype of any columns in DataFrame means that the entries of that column are always stored as a string.**

    1. True

    2. False




..

   **Answer: 2**

   The ‘object’ datatype of any columns in DataFrame means that the entries of that column may be stored as a string or it may contain other data structures like a list, dictionary, etc.


5. **The parameter ‘inplace=False’ changes the original DataFrame permanently.**

    1. True

    2. False


..

    **Answer: 4**
    It only displays the view of DataFrame after the operation but doesn’t change the DataFrame. The parameter ‘inplace=True’ is used to apply the operation and also change the DataFrame permanently according to the operation applied.

