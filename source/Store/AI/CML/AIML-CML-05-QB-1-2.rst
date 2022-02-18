UNIT-1 Week-5 CFP Question & Answers with Explanation
=======================================================
 
**Question 1**
 
Bootstrapping works on....... 
 
Options: 
 
A.Random sampling with replacement 

B.Random sampling without replacement 

C.Ordered sampling with replacement 

D.Ordered sampling without replacement 
 
**Answer : A** 
 
**Explanation:**
Bootstrap sampling method is a resampling method that uses random sampling with replacement.This means that it is very much possible for an already chosen observation to be chosen again.
 
For example, if you have a dataset of size N, you sample K new datasets each of size N. Some of these datasets will likely have repeated samples from the original set.
 
**Question 2**  
 
Which of the following can be used for the final decision in Bootstrapping? 
 
1. Majority Voting 
2. Simple Average 
3. Weighted Average 
4. Random Sampling 
 
Options:

A.1 and 2 

B.3 and 4 

C.2 and 4 

D.1, 2 and 3 
 
**Answer: D** 
 
**Explanation:**
The following can be used for the final decision in Bootstrapping,

* Majority Voting
    Each model returns a predicted probability based on test data, and the final prediction is the one that receives the majority of votes.

* Simple Average
   The average predictions are calculated for each instance of the test dataset.

* Weighted Average
   Slightly modified version of simple averaging in which each model's prediction is multiplied by the weight and the average is calculated.
 
 
**Question 3**

Which of the following statements is not true about the Bagging Classifier?

Options:

A.Sampling the training data with replacement

B.Every sampled data is classified many times (upto k)

C.Bagging is the method for improving performance by aggregating the results of weak learners

D.In bagging trees, individual trees are dependent of each other

Answer : D

**Explanation:** 
In Bagging, each individual trees are independent of each other because they consider a different subset of features and samples.

