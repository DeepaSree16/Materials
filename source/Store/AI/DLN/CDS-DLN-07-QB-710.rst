Module-5 Quiz-7 Question & Answers with Explanation
==================================================

**Based on PCA, Manifold learning, Autoencoders**

1. Select the TRUE statement w.r.t. PCA:

A. PCA is a supervised dimensionality reduction technique
B. PCA is a non-linear unsupervised dimensionality reduction technique
C. All principal components are orthogonal to each other 
D. The maximum number of principal components is always more than the number of features

**Answer: C**

**Solution:**

- Statement A is False because PCA is an unsupervised dimensionality reduction technique
- Statement B is False because PCA is a linear unsupervised dimensionality reduction technique
- Statement D is False because the maximum number of principal components is ≤ the number of features


2. Which of the following are TRUE, w.r.t. Dimensionality reduction:

1. It always leads to simple machine learning models
2. It gets rid of redundant features and thus frees up disk and memory space
3. It is useful for data visualization

Options:

A. 1 and 3 only
B. 1 and 2 only
C. 2 and 3 only
D. 3 only

**Answer: C**

**Solution:**

Statement 2 and 3 are TRUE. Statement 1 is FALSE.
Dimensionality reduction refers to techniques that reduce the number of input variables in a dataset (eg. by projection or manifold learning), however, it does not guarantee that you will be able to use a simpler model after applying dimensionality reduction to the data. For example, if the data is not linearly separable, even after applying dimensionality reduction, it will still retain its non-linear structure and you will therefore not be able to use a linear model for the reduced dimension dataset.



3. Select the correct sequence of steps to perform PCA with data matrix having its features along the columns:

1. Center the value in each column by subtracting the mean column value
2. Calculate the covariance matrix of the centered matrix
3. Calculate the mean of each column 
4. Calculate eigendecomposition of the covariance matrix

Options: 

A. 1, 2, 3, 4
B. 1, 3, 2, 4
C. 4, 2, 1, 3
D. 3, 1, 2, 4

**Answer: D**



4. Which of the following inferences can be made (w.r.t. PCA), based on the following figure?

.. image:: Images/M5_Q7_q4.png
    :width: 100px
    :align: center

1. The first 10 components contain approximately 75% of the variance
2. Around 50 components are needed to describe close to 100% of the variance

Options:

A. Only 1
B. Both 1 and 2
C. Only 2
D. Neither 1 nor 2

**Answer: B**

**Solution:**

An important part of using PCA in practice is the ability to estimate how many components are needed to describe the data. This can be determined by looking at the cumulative explained variance ratio as a function of the number of components. The plot helps to understand the level of redundancy present in multiple observations. 

As can be observed from the given figure, the first 10 components contain approximately 75% of the variance and around 50 components are needed to describe close to 100% of the variance. So statements 1 and 2 are both correct.



5. Match the following correctly:

+----------------------------+-------------------------------------------------------------------------+
| Technique/ Approach        | Description                                                             |
+----------------------------+-------------------------------------------------------------------------+
| 1. Manifold learning       | (a) It is a technique that converts similarities between data points    |
|                            | to joint probabilities, to solve a non-convex optimization problem      |
+----------------------------+-------------------------------------------------------------------------+
| 2. PCA                     | (b) Artificial neural networks capable of learning dense                |
|                            | representations of the input data, called latent representation         |
|                            | codings without any supervision                                         |
+----------------------------+-------------------------------------------------------------------------+
| 3. t-SNE                   | (c) Dimensionality reduction approach that is not based                 |
|                            | on linear projections                                                   |
+----------------------------+-------------------------------------------------------------------------+
| 4. Autoencoder             | (d) It identifies the axis that accounts for the largest                |
|                            | amount of variance in the training set                                  |
+----------------------------+-------------------------------------------------------------------------+

Options:

A. 1 - b, 2 - c, 3 - a, 4 - b
B. 1 - c, 2 - d, 3 - a, 4 - b
C. 1 - a, 2 - c, 3 - d, 4 - b
D. 1 - c, 2 - d, 3 - b, 4 - a

**Answer: B**
