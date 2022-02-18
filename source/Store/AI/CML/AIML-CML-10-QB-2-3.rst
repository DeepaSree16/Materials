UNIT-2 Week-10 CFU Question & Answers with Explanation
=======================================================

**Question 1**

Which of the following is FALSE? 

Options:

A.Variance is the measure of the deviation from the mean for points in one dimension 

B.Covariance is the measure of how much each of the dimensions vary from the mean with respect to each other 

C.Covariance cannot determine the relationship between two dimensions

D.Covariance can be positive or negative 

**Answer: C**

**Explanation:** 
Covariance is a measure of how changes in one variable are associated with changes in a second variable. In other words, Covariance is a measure of how much each of the dimensions vary from the mean with respect to each other, and also Covariance is measured between 2 dimensions to see if there is a relationship between the 2 dimensions for example “number of hours studied & marks obtained”. The covariance between one dimension and itself is the variance



**Question 2**

Which of the following is/are FALSE? 

1. The Eigenvectors determine the directions of the new feature space 
2. The Eigenvalues determine the magnitude in the new feature space 
3. The Eigenvectors determine the magnitude in the new feature space 
4. The Eigenvalues determine the directions of the new feature space 

Options 

A.1 and 2 

B.Only 2 

C.3 and 4 

D.Only  4 

**Answer: C**

**Explanation:**

The Eigenvectors (or principal components) determine the directions of the new feature space, and the Eigenvalues determine their magnitude.
Eigenvector will point into the direction of the larger spread of data and Eigenvalue will be equal to the spread (variance) of that direction

The direction in green is the eigenvector, and it has a corresponding value, called eigenvalue, which describes its magnitude.


**Question 3**

PCA (Principal Component Analysis) is a ____________ procedure that uses a ____________ transformation to convert a set of observations of possibly ___________ variables into a set of linearly uncorrelated variables. 

Options:

A.probabilistic, orthogonal, correlated 

B.statistical, orthogonal, correlated 

C.statistical, orthogonal, uncorrelated 

D.algebraic, orthogonal, uncorrelated 

**Answer: B**

**Explanation:** 
The PCA is applied on this symmetric matrix, so the eigenvectors are guaranteed to be orthogonal.

.. image:: https://cdn.extras.talentsprint.com/CentralRepo/AIML_Images/AIML_10_PCA.png

The purpose of PCA is to transform this matrix in such a way that all non-diagonal elements are 0. Then we have the components which are uncorrelated and each component explains a percentage of the total variance.



**Question 4**

Select the FALSE statement: 

Options :

A.Linear SVMs generalize well and can separate non-linear data 

B.Kernels are popular complex functions that can deal with non-linear data

C.Polynomial and Radial Basis Function are examples of non-linear SVM functions 

D.A Kernel trick is an efficient way to transform data into higher dimensions 

**Answer: A**
 
**Explanation:**

.. image:: https://cdn.extras.talentsprint.com/CentralRepo/AIML_Images/AIML_10_svm.png

The red line in the image above is quite close to the square class. Though it classifies the current datasets it is not a generalized line. In machine learning, the main  goal is to get a more generalized separator.
Thus SVM tries to make a decision boundary in such a way that the separation between the two classes(that street) is as wide as possible

.. image:: https://cdn.extras.talentsprint.com/CentralRepo/AIML_Images/AIML_10_Nonlinearsvm.png

This Fig-1 is clearly not linearly separable. We cannot draw a straight line that can classify the data . But, Fig-2 data can be converted to linearly separable data in a higher dimension as shown on the right-side.



