Module-4 Quiz-4 Question & Answers with Explanation
==================================================

**Based on Linear SVM, Nonlinear SVM, Kernelized SVM, SVM Regression, Mathematics of SVM**

1. SVM is a powerful and versatile machine learning model, that can perform:

(i) Linear Classification
(ii) Non-linear Classification
(iii) Regression
(iv) Outlier detection
(v) Unsupervised Learning only

Options:

A. Only (i), (ii) and (v)
B. Only (ii), (iii), (iv) and (v)
C. Only (i), (ii), (iii) and (iv)
D. Only (i) and (ii)

**Answer: C**

**Solution:**

A Support Vector Machine (SVM) is a powerful and versatile Machine Learning model, capable of performing linear or non-linear  classification, regression and also outlier detection. Statement (v) is incorrect because SVM is mainly a supervised learning model. There are some limited examples of SVM in unsupervised learning (example: One-class support vectors).


2. Select the correct statements:

(i) Hard margin classifiers strictly impose that all data points must lie ‘off the street’ to the correct side and are sensitive to outliers.
(ii) Hard margin classifiers strictly impose that all data points must lie ‘off the street’ to the correct side and are not sensitive to outliers.
(iii) Soft margin classifiers try to maximize the margin, within the constraint that there are limited margin violations and they allow more model flexibility than hard margin classifiers
(iv) Soft margin classifiers try to maximize the margin, within the constraint that there are limited margin violations but they allow less model flexibility than hard margin classifiers

**Options:**

A. Only (i) and (iii)
B. Only (ii) and (iii)
C. Only (ii) and (iv)
D. Only (i) and (iv)

**Answer: A**

**Solution:**

The correct statements are (i): Hard margin classifiers strictly impose that all data points must lie ‘off the street’ to the correct side and are sensitive to outliers, and (iii): Soft margin classifiers try to maximize the margin, within the constraint that there are limited margin violations and they allow more model flexibility than hard margin classifiers

3. Match the following hyperparameters and their descriptions / examples w.r.t the SVC Poly kernel in sklearn:

+-----------------------------------------+---------------------------------------------------+
| (i) C hyperparameter                    | (a) Controls how much the model is                |
|                                         | influenced by high degree vs low degree           |
|                                         | (it is the ‘r’ in the kernel function)            |
+-----------------------------------------+---------------------------------------------------+
| (ii) coef0                              | (b) regularizes the parameters with a l2          |
|                                         | penalty                                           |
+-----------------------------------------+---------------------------------------------------+
| (iii) degree                            | (c) ‘Poly’                                        |
+-----------------------------------------+---------------------------------------------------+
| (iv) kernel                             | (d) polynomial kernel’s degree                    |
+-----------------------------------------+---------------------------------------------------+

Options:

A. (i) - (b), (ii) - (a), (iii) - (c), (iv) - (d)
B. (i) - (b), (ii) - (a), (iii) - (d), (iv) - (c)
C. (i) - (a), (ii) - (b), (iii) - (d), (iv) - (c)
D. (i) - (a), (ii) - (b), (iii) - (c), (iv) - (d)

**Answer: B**

4. Fill in the blanks in the below statements to explain the kernel function appropriately:

The function K(a, b) = (aT b)2 is a second-degree _____(i)______ kernel. A kernel is a function capable of computing the ____(ii)____ product (a)T Φ(b), based only on the original vectors a and b, without having to compute the ____(iii)_____ Φ.

A. (i) - polynomial, (ii) - cross, (iii) - transformation
B. (i) - linear, (ii) - cross, (iii) - weight
C. (i) - polynomial, (ii) - dot, (iii) - transformation
D. (i) - linear, (ii) - dot, (iii) - weight

**Answer: C**

**Solution:**

The function K(a, b) = (aT b)2 is a second-degree polynomial kernel. A kernel is a function capable of computing the dot product (a)T Φ(b), based only on the original vectors a and b, without having to compute the transformation Φ.

5. Select the FALSE statement:

A. In general, the solution to a quadratic programming problem in 𝑛 variables has computational complexity that is 𝑂(𝑛3)
B. The maximum margin classifier can be applied efficiently to transformed feature spaces whose dimensionality is less than the number of data points
C. The dual objective functions consists of a kernel that corresponds to a particular similarity transformation
D. Gaussian, Polynomial, Radial Basis are some of the popular SVM kernels

**Answer: B**

**Solution:**

Statement B is FALSE. The correct statement is: The maximum margin classifier can be applied efficiently to transformed feature spaces whose dimensionality exceeds the number of data points.




