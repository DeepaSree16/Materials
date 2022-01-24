Module-4 Quiz-7 Question & Answers with Explanation
==================================================

**Based on DT, Ensemble Learning, RF**

1. Select the correct sequence of steps in a CART algorithm:
 
(i)  Ask all possible questions for all features in the data and split the data 
(ii) Make a measurement of impurity of each partitioning 
(iii) Select a set of feature vectors representing samples
(iv) Select the question that generates the least impure partitions
(v) Apply this process recursively on each sub-partition until some stop criteria is met (e.g. a minimal number of samples in a partition)
 
Options: 

A. (i), (ii), (iii), (iv), (v)
B. (i), (iii), (iv), (ii), (v)
C. (iii), (i), (ii), (iv), (v)
D. (iii), (i), (iv), (ii), (v)

**Answer: C**
 
**Solution:**

Following are the CART algorithm implementation steps in the correct sequence:
 
-Select a set of feature vectors representing samples

-Ask all possible questions for all features in the data and split the data 

-Make a measurement of impurity of each partitioning 

-Select the question that generates the least impure partitions

-Apply this process recursively on each sub-partition until some stop criteria is met (e.g. a minimal number of samples in a partition)


 
2. Match the following correctly:
  
+--------------------+----------------------------------------------------------------------------------------------------------------------+
| (i) Bagging        | (a) An ensemble method in which samples are selected without                                                         |
|                    | replacement, the model is trained on the sample sets and the results are aggregated                                  |
+--------------------+----------------------------------------------------------------------------------------------------------------------+
| (ii) Boosting      | (b) When the dataset is big enough, 37% of its samples are never                                                     |
|                    | selected and we could use it to test our model.                                                                      |
+--------------------+----------------------------------------------------------------------------------------------------------------------+
| (iii) OOB          | (c) An ensemble method in which samples are selected with replacement,                                               |
|                    | the model is trained on the sample sets and the results are aggregated                                               |
+--------------------+----------------------------------------------------------------------------------------------------------------------+
| (iv) Pasting       | (d) It trains predictors sequentially so that each successive                                                        |
|                    | predictor corrects the errors of its predecessor                                                                     |
+--------------------+----------------------------------------------------------------------------------------------------------------------+ 
 
Options:
 
A. (i) - (b), (ii) - (d), (iii) - (a), (iv) - (c)
B. (i) - (c), (ii) - (d), (iii) - (b), (iv) - (a)
C. (i) - (c), (ii) - (b), (iii) - (a), (iv) - (d)
D. (i) - (a), (ii) - (b), (iii) - (d), (iv) - (c)
 
**Answer: B**

**Solution:**

+------------------------------------------------------------------------------------------------------------------------------------------+ 
| (i) Bagging - (c) An ensemble method in which samples are selected with replacement, the model is trained on the sample                  |
| sets and the results are aggregated                                                                                                      |
+------------------------------------------------------------------------------------------------------------------------------------------+
| (ii) Boosting - (d) It trains predictors sequentially so that each successive predictor corrects the errors of its predecessor           |
+------------------------------------------------------------------------------------------------------------------------------------------+
| (iii) OOB - (b) When the dataset is big enough, 37% of its samples are never selected and we could use it to test our model              |
+------------------------------------------------------------------------------------------------------------------------------------------+
| (iv) Pasting - (a) An ensemble method in which samples are selected without replacement, the model is trained on the sample sets         |
| and the results are aggregated                                                                                                           |
+------------------------------------------------------------------------------------------------------------------------------------------+

 
3. Select the TRUE statement:
 
A. In Adaptive Boosting, each of the sample weights are updated sequentially based on the wrong predictions; In Gradient Boosting, subsequent predictors are trained on the residual errors made by the previous predictor
B. In Adaptive Boosting, each of the sample weights are updated sequentially based on the the wrong predictions; In Gradient Boosting, each of the sample weights are updated sequentially based on the right  predictions
C. In Adaptive Boosting, subsequent predictors are trained on the residual errors made by the previous predictor; In Gradient Boosting, each of the sample weights are updated sequentially based on the the wrong predictions
 
**Answer: A**

 
4. Which of the following regularization method(s) can be used to solve overfitting in Gradient Boosting?
 
1. Use a learning_rate hyperparameter that shrinks the contribution of each consecutive decision tree 
2. Use a sub-sample of the max_features to be used in each subset
3. Use a learning_rate hyperparameter that increases the contribution of each consecutive decision tree 
4. Use different max_depths for each decision tree
 
Options:
 
A. Only 1
B. Only 3
C. Both 1 and 2
D. Both 3 and 4
 
**Answer: C**

**Solution:**
 
Gradient Boosting can easily overfit the training samples. Therefore, regularization in the form of shrinkage via learning rate can be applied, where a learning_rate hyperparameter that shrinks the contribution of each consecutive decision tree, is used. Also Subsampling can be used in the case of stochastic gradient boosting, where every predictor is trained only on a subset of the data which is sampled without replacement. One can also subsample the max_features to be used in each subset (Subspace). Subsampling acts as a regularization
 
 
5. Fill in the blanks to complete the following statements appropriately:
 
Decision trees produce ____(i)____ decision boundaries; They are _____(ii)____ to small variations in the training data; They are usually _____(iii)_____ accurate than Random Forests but ____(iv)_____ easily explainable.
 
Options:
 
A. (i) - parallel, (ii) - not sensitive, (iii) - less, (iv) - more
B. (i) - orthogonal, (ii) - very sensitive, (iii) - less, (iv) - more
C. (i) - parallel, (ii) - very sensitive, (iii) - more, (iv) - less
D. (i) - orthogonal, (ii) - not sensitive, (iii) - more, (iv) - less
 
**Answer: B**

**Solution:**
 
Decision trees produce orthogonal decision boundaries; They are very sensitive to small variations in the training data; They are usually less accurate than Random Forests but more easily explainable.
