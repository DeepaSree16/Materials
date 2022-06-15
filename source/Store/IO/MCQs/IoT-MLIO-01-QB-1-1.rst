-------------------------
SET: Concept Lecture
-------------------------
1. **Training means to find the prediction function F with the given data  X and Y. Testing means apply F to the unknown sample and get the predicted value of that unknown sample.**

   1. True

   2. False

..

   Answer: 1

2. **Select the most appropriate option. A machine learning model learns to predict whether a brain MRI shows a tumor or not. Here, for the equation y=f(x), what are y and x respectively?**

    1. 'tumor'/'no tumor' and brain MRI data features

    2. brain MRI data features and 'tumor'

    3. brain MRI data features and 'tumor' /'no tumor'
..

    Answer: 1

3. **A Linear classifier is a/an --------------------------Machine Learning Algorithm.**


    1. Supervised

    2. Unsupervised
..

    Answer: 1

4. **If the label has only two classes, the learning algorithm is a ------------ classifier.**

   1. Binary

   2. Multi-class

   3. Both Binary and Multi-class

..

   Answer: A

5. **What is the correct sequence of events in the Spam Detection of emails?**

1. Classification of emails into Spam and Non-spam via machine learning algorithms

2. Collection of email contents as the raw data

3. Feature extraction of keywords like Buy, Sell, Purchase, Offer

   1. 1, 2, 3

   2. 3, 2, 1

   3. 2, 3, 1

   4. 1, 3, 2

..

    Answer: 3

--------------------------------
SET: Industry Lecture
--------------------------------

1. **Which of the following accuracy measurement technique is used inside the 'score' method of regression object in sklearn.**

    1. MAE

    2. MSE

    3. RMSE

    4. Coefficient of determination (R\ :sup:`2`)

..

   **Answer: 4**

2. **The Correlation Coefficient is calculated between two variables and
   is given by dividing the covariance by the standard deviation of the
   individual variable.**

    1. True

    2. False

..

   **Answer: 1 (True)**

3. **Accuracy is measured on the training set for model evaluation.**

    1. True

    2. False

..

   **Answer: 2 (False)**

   Accuracy is measured on the test set which is not seen by the model
   while training and based on that a model performance is decided
   whether good or not. We can measure the accuracy on training set as
   well but we cannot rely on that and this is not used for model
   evaluation.

4. **The Coefficient of determination is a function -----.**

    1. between predicted target and the target from the ground truth.

    2. between feature and target from the ground truth.

    3. between feature and predicted target.

    4. None

..

   **Answer: 1**

5. **A higher value of the coefficient of determination is preferred.**

    1. The value can be greater than 1.

    2. The value can be negative as well.

    3. The value lies between 0 and 1.

    4. Any value is possible

..

   **Answer: 3**

   A higher value of the coefficient of determination is preferred as
   close as 1 but it cannot be greater than 1 or less than 0.
-------------------------
SET: Lab Session
-------------------------


1. **Choose all that applies in the case of PCA.**

    1. Reduce the dimensionality of the dataset.

    2. Reduce the size of the dataset

    3. The resulting features don't represent the physical meaning of the original feature set.

    4. We can reduce the initial number of dimensions to any number (lower than the initial) using PCA to achieve a good  prediction model.

..

   **Answer: 1, 2, 3**

   Option D is wrong: We can reduce the initial dimension to any number but for a good prediction model, the number of reduced dimensions should be able to represent a higher explained variance ratio (preferably > 90%). I.e., the numbers of reduced dimensions should be sufficient to represent explained variance ratio > 90 % otherwise prediction model will not be accurate enough.

2. **The reduced features from PCA can be recovered back again to original features as it is.**

    1. True

    2. False

..

   **Answer: 2 (False)**

   The reduced features from PCA can be recovered back again but not as
   it is. There will be some loss of information\ **.**

3. **We always remove/drop rows containing any NaN value in the dataset as a part of data munging.**

    1. True

    2. False

..

   **Answer: 2 (False)**

   It depends on the number of NaN entries and the nature/type of the
   data. Based on domain knowledge we may fill those NaN entries with a
   suitable number (mean, median, or with value having the highest mode:
   - These may be one of those but again, not always).

4. **The 'object' datatype of any columns in DataFrame means that the entries of that column are always stored as a string.**

    1. True

    2. False

..

   **Answer: 2 (False)**

   The 'object' datatype of any columns in DataFrame means that the
   entries of that column may be stored as a string or it may contain
   other data structures like a list, dictionary, etc.

5. **The parameter 'inplace=False' changes the original DataFrame permanently.**

    1. False

    2. True

..

   **Answer: A (False)**

   It only displays the view of DataFrame after the operation but
   doesn't change the DataFrame. The parameter 'inplace=True' is used to
   apply the operation and also change the DataFrame permanently
   according to the operation applied.


