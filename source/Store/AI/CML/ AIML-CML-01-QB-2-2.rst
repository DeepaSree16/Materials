UNIT-1 Week-1 CFU Question & Answers with Explanation
====================================================
 
**Question 1** 
 
If ‘animals’ is a Dataframe with 50 rows and 3 columns. What does the below code output? 
 
animals.head(10)  
 
Options: 
 
a.Selects first 10 rows  

b.Selects last 10 rows  

c.Selects randomly 10 rows  
  
**Answer: a** 

**Explanation:** 
The animals dataframe contains 50 rows and 3 columns. If we print animals.head(10) it will give the first 10 rows.
 
 
**Question 2**
 
What is y[:-1] of list y = [2, 33, 222, 14, 25]? 
 
Options:
 
A.25 

B.[2, 33, 222, 14] 

C.[25, 14, 222, 33, 2] 

D.[33, 222] 
       
**Answer: B** 

**Explanation:**

.. code-block:: python
   
   y = [2, 33, 222, 14, 25]
   print(y[:-1])
   

 
**Question 3** 
 
What is the output of the following? 

.. code-block:: python  
   
   x = ['af', 'cd'] 
   for i in x: 
   	i.upper() 
   print(x) 
 
Options:
 
A.['AF', 'CD'] 

B.['af', 'cd'] 

C.['af', 'CD'] 

D.['AF', 'cd'] 
 
**Answer: B**

 
 
**Question 4**
 
For the given array a = np.array([[1,2],[3,4]]) and b = np.array([[1,2],[3,4]]), what is a@b? 
 
Options: 
 
A.[[7 10] [15 22]] 

B.[[1  4] [ 9 16]] 

C.[[3  9] [15 16]] 

D.[[4  8] [15 16]] 
 
**Answer: A**

**Explanation:**

.. code-block:: python 

   import numpy as np
   a = np.array([[1,2],[3,4]])
   b = np.array([[1,2],[3,4]])
   print(a@b)
  

 

