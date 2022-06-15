SET: Concept Lecture
========================

1.	Which of the following options is/are true about k-NN algorithm? 

A.	It can be used for classification 
B.	 It can be used for regression 
C.	It can be used in both classification and regression 

Answer: C 


2. Arrange the correct order for k-NN?  

a. For each unknown sample find the distance from all the labeled samples 
b. Sort these labels by their distance from the unknown sample  
c. Identify the majority label  
d. Select the k labeled sample nearest to the unknown sample  
e. Assign the majority label to the unknown sample 

A.	a, b, c, d, e 
B.	a, b, d, c, e 
C.	c, d, e, a, b 

Answer: B 


3. Support Vector Machines (SVM) find a separating hyperplane that _______\ the margin between two classes 

A.	 Minimizes 
B.	 Maximizes 
C.	 Overlaps 
D.	 None of the above 

Answer: B 


4.	Which of the following statements is correct, regarding a Perceptron? 

A.	It has an input layer, a hidden layer and an output layer
B.	It can draw non-linear decision boundaries 
C.	It can function only as a binary classifier

Answer: C


SET: Industry Lecture 
+++++++++++++++++++++++++++

1.	Which of the following plot is associated with bin range and count of data inside it? 

A.	.plot()
B.	.scatter()
C.	.bar()
D.	.hist()

Answer: D
Histogram is the plot of bin vs count.

2.	 Any value of learning rate (alpha) is fine and it will work in gradient descent.

A.	True
B.	False

Answer: B (False)
A too high learning rate will make the learning jump over minima but a too low learning rate will take too long to converge. Finding suitable value of alpha is an iterative process and need to be trial with different values.

3.	Which of the following is correct expression for the cost/loss function, symbols having its usual meaning?

A. .. math:: cost = \frac{1}{2m}\sum_{i=1}^{m}(x-y_0)^2
B. .. math:: cost= \frac{1}{2m}\sum_{i=1}^m(θ_0 x+θ_1-y_o)^2 
C. .. math:: cost= \frac{1}{2m}\sum_{i=1}^m(θ_0+θ_1 x-y_o)^2 
D. .. math:: cost= \frac{1}{2m}\sum_{i=1}^m(x-y_p)^2 

Answer: C 


4.	Gradient descent can be applied in non-convex function as well.

A.	False
B.	True

Answer: A (False)
Gradient descent can be applied in convex function only, i.e. function having only on optimum value.

5.	Which of the following is correct statement.
A.	In SVC, the regularization parameter(C) is always a very high value.
B.	In SVC, the regularization parameter(C) is always a low value.
C.	In SVC, the regularization parameter(C) is smaller than 0.
D.	In SVC, the regularization parameter(C) lies between 0 and 1.
E.	None

Answer: E
For clearly separable data set, the value of C is kept high (hard margin classifier) but for non-separable data set, the value of C is kept low (soft margin classifier). Its value can never be less than or equal zero but can be greater or smaller than 1.


SET: Lab session 
--------------------

1. Number of support vectors decreases with decrease in the value of regularization parameter (C) in SVC. 

A. False
B. True

Answer: A (False)
Number of support vectors increases with decrease in the value of regularization parameter (C) in SVC.


2. Which of the following expression is equivalent to  y=θ_1 x+θ_0  in array representation with symbols having its usual meaning for implementing y = mx + c?

A. .. math:: θ^T X
B. .. math:: Xθ^T
C. .. math:: Xθ
D. .. math:: θX
E. .. math:: X^T θ
F. .. math:: θX^T
G. All above
H. None of above

Answer: G 
All above is possible, it depends on how we initially define ‘theta’ and ‘x’ array. To have matrix multiplication between ‘theta’ and ‘x’ array, the number of columns in first array and number of rows in second array should match. For this shape matching, any array can be taken as first array and any array can be used after transformation if required.

3. In expression

.. math:: y=θ^T X ,\ if\ \ θ =  [θ_0\ θ_1]^T   

with symbols having its usual meaning for implementing y = mx + c, which of the following is valid X  array?

A. .. math:: X = [1\ x]^T   
B. .. math:: X = [1\ x]
C. .. math:: X = [x\ 1]^T   
D. .. math:: X = [x\ 1]

Answer: A
Initial shape of θ is (2, 1). Shape of θ^T(theta transformed) is (1, 2). Thus Array 'θ^T' can be multiplied with only array having 2 number of rows which is valid in both option A. and C. But option C is wrong as position of 1 and x are not proper. The position of 1 and x should be such that x multiplied with θ_1 (usual meaning is slope ‘m’ in y = mx + c) and 1 multiplied with θ_0 (usual meaning is intercept ‘c’ in y = mx + c). Thus option A is correct.

.. math:: y=θ^T X = [θ_0\ θ_1] [1\ x]^T = θ_0 + θ_1 x


4. Fill the blank space in the syntax given below : 

np.hstack (  [ -------------, np.array( [ [3] , [4] ] )  ] )  which results in : 

array ( [ [1. , 3.] ,
          [1. , 4.] ] )

A.	np.ones((1,2))
B.	np.ones((2,1))
C.	np.ones(2)
D.	np.ones(1)

Answer: B

5.	Paraboloid/parabolic cost function is possible for quadratic (having degree 2) cost function only.

A.	True
B.	False

Answer: A

