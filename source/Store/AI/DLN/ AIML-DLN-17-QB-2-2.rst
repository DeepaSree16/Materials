UNIT-3 Week-17 CFU Question & Answers with Explanation
======================================================

**Question 1**

Match the following:

.. image:: https://cdn.extras.talentsprint.com/CentralRepo/AIML_Images/AIML_17_overfitting.png

A.(i) :- Over-fitting, (ii) :- Under- fitting, (iii) :- Appropriate-fitting

B.(i) :- Under-fitting, (ii) :- Appropriate-fitting, (iii) :- Under-fitting

C.(i) :- Appropriate-fitting, (ii) :- Under-fitting, (iii) :- Over-fitting

**Answer: A**



**Question 2**

In the convolutional layer, consider input = [5, 2, 1, 0, 6, 3] , when you apply filter [-1, 0, 1] and stride = 1. The total number of additions are m and the total number of multiplications are n, what is m+n?

Options:

A.15

B.13

C.10

D.20

**Answer: D**

**Explanation:** 

(5*-1+2*0+1*1) , (2*-1+1*0+0*1) , (1*-1+0*0+6*1) , (0*-1+6*0+3*1)
Total number of additions, m =  8
Total number of multiplications, n = 12
m+n = 20



**Question 3**

Select the FALSE statement:

Options:

A.In Boosting, all the classifiers are trained sequentially and not in a parallel

B.Boosting is a method in which a set of weak classifiers or low performing algorithms are trained in sequence(one after the other), by adjusting the weightage given to the incorrectly predicted (by weak classifier) data samples

C.In Boosting, while training a set of classifiers sequentially, more weight is given to correctly classified data samples in each subsequent iteration

**Answer: C**

**Explanation:**
In Boosting all the classifiers are trained sequentially and not in parallel. It is a method in which a set of week classifiers algorithms are trained in sequence by adjusting the weights given to the incorrectly predicted data samples.


**Question 4**

Select the correct statements w.r.t. Random Forests (RF):

1. In RF, each decision tree is built from a sample drawn with replacement from the training set
2. In RF, each decision tree is built from a sample drawn without replacement from the training set
3. In RF, a random subset of features is selected to build each of the decision trees
4. In RF, the same subset of fixed features is used to build each decision tree

Options:

A.2 and 4

B.2 and 3

C.1 and 3

D.1 and 4

**Answer: C**

**Explanation:**
In Random Forest, Each node in the decision tree works on a random subset of features to calculate the output. The random forest then combines the output of individual decision trees to generate the final output. During training, each tree in a random forest learns from a random sample of the data points. The samples are drawn with replacement

