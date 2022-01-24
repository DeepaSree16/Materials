Module-5 Quiz-8 Question & Answers with Explanation
==================================================

**Based on PCA, Manifold learning, Autoencoders**

1. Fill in the blanks by selecting the appropriate option:

Autoencoders compress the input into a ___(i)___ code and then reconstruct the output from this representation. The code is a compression of the input, also called the ___(ii)___.

A. (i) higher-dimensional, (ii) reconstructed output
B. (i) lower-dimensional (ii) latent-space representation
C. (i) higher-dimensional (ii) latent space representation
D. (i) lower-dimensional (ii) reconstructed output

**Answer: B**

**Solution:**

Autoencoders compress the input into a lower-dimensional code and then reconstruct the output from this representation. The code is a compression of the input, also called the latent-space representation.



2. Which of the following statements is/are True about Autoencoders? 

1. It is a deep neural network architecture for unsupervised learning 
2. The output of the autoencoder is not exactly the same as the input, it is a close but degraded representation
3. Autoencoder with a linear transfer (activation) function (trained with MSE loss) is nearly equivalent to PCA

Options:

A. Only 1 
B. Only 1 and 2 
C. 1, 2 and 3 
D. Only 1 and 3 

**Answer: C**


3.  Match the following correctly:

.. image:: Images/M5_Q8_q3.png
    :width: 100px
    :align: center

Options:

A. 1 - b - (ii), 2 - c - (i), 3 - a - (iii)
B. 1 - b - (iii), 2 - c - (ii), 3 - a - (i)
C. 1 - c - (ii), 2 - a - (i), 3 - b - (iii)
D. 1 - a - (ii), 2 - b - (i), 3 - a - (iii)

**Answer: A**

4. See the description below. What kind of task is the autoencoder performing?

.. image:: Images/M5_Q8_q4.png
    :width: 100px
    :align: center

A. Dimensionality reduction
B. Anomaly Detection
C. Threshold detection
D. Denoising

**Answer: B**

**Solution:**

Autoencoders can be used for anomaly detection, given an unbalanced dataset where we have a lot of good (normal) examples and only a few anomalies. Autoencoders are trained to minimize reconstruction error. When we train the autoencoders on normal data, we can hypothesize that the anomalies will have higher reconstruction errors than the normal data.


5. Select the FALSE statement:

 1. Eigenvalues capture the variance by each PCA component in the direction of the Eigenvector
 2. The explained variance ratio is the percentage of variance that is attributed by each of the selected components
 3. Projection is always a better approach than manifold learning, for dimensionality reduction

Options:

A. Only 1
B. Only 3
C. Only 2
D. 1 and 3

**Answer: B**
