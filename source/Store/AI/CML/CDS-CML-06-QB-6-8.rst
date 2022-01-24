Module-4 Quiz-6 Question & Answers with Explanation
==================================================

**Based on DT, Ensemble Learning, RF**

1.Which of the following is/are true about Random Forest and Gradient Boosting ensemble methods?

1. Both methods can be used for classification task
2. Random Forest is used for classification only, whereas Gradient Boosting is used for regression task only
3. Random Forest is used for regression task only, whereas Gradient Boosting is used for Classification task only
4. Both methods can be used for regression task

A) 1
B) 2
C) 3 and 4
D) 1 and 4
 
**Answer: D**
 
 
2. Which of the following parameters is used to set the number of trees that Random Forest creates before voting takes place?

A. N_estimators
B. Max_features
C. Min_sample_leaf
D. Min_samples_split

**Answer: A**

**Solution:**

The `n_estimators` parameter in the sklearn RandomForestClassifer indicates the number of trees in the forest


3. In the following figure, which attribute should be selected as the root in a decision tree (based on the Gini impurity values)?

.. image:: Images/M4_Q6_q3.png
    :width: 100px
    :align: center

A. Age 
B. Income
C. Student
D. Credit Rating
 
**Answer: A**

**Solution:**

The attribute with the minimum Gini impurity, i.e. ‘Age’ should be selected as the root of the Decision tree.  
 

4. Complete the following statement appropriately, using one of the options below: In a Random Forest (sklearn implementation), if you set bootstrap=False, 

A. the entire dataset is used to build each tree (i.e. no random sampling of samples) but a random subset of features is tried at each split
B. the entire dataset is used to build each tree (i.e. no random sampling of samples) and the entire set of features is tried at each split
C. a random set of samples is used to build each tree and a random subset of features is tried at each split.
D. a random set of samples is used to build each tree but the entire set of features is tried at each split

**Answer : A**

**Solution:**

A random forest fits a number of decision tree classifiers on various sub-samples of the dataset and uses averaging to improve the predictive accuracy and control over-fitting. The sub-sample size is controlled with the max_samples parameter if bootstrap=True (default). If it is set to bootstrap=False, the entire dataset is used to build each tree (although at each split, a random subset of features is tried).
 
 
5. In a Random Forest implementation, what is most likely to happen if the number of predictors is large but the number of relevant predictors is small?

A. Model performs very well because of the large number of predictors
B. Model performs poorly because most trees in the ensemble will be weak models
C. It does not matter because a subset of features is selected at each split in any case

**Answer: B**

**Solution:**

In a Random Forest implementation, if the number of predictors is large but the number of relevant predictors is small, in each split, the chances of selecting a relevant predictor will be low. Therefore most trees in the ensemble will be weak models and so the model will perform poorly.
