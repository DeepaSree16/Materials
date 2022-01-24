Module-4 Quiz-8 Question & Answers with Explanation
==================================================

**Based on Unsupervised Machine Learning**

1. Which of the following statements about the K-means clustering algorithm are TRUE?

1. The K-means clustering algorithm is sensitive to outliers
2. The elbow method is used to compute the centroid value for each cluster at every iteration 
3. Upon convergence, the cluster centroids obtained using the K-means clustering algorithm need not coincide with any points/samples from the dataset
4. K-means clustering algorithm assumes a spherical cluster shape, therefore does not work well when clusters are in different shapes, such as elliptical clusters

Options:

A. 1 and 2
B. 2 and 4
C. 1, 3 and 4
D. 2, 3 and 4

**Answer: C**

**Solution:**

Statements 1, 3 and 4 are true. Statement 2 is False because the elbow method is used to compute the optimal number of clusters for the K-Means clustering.


2. Fill in the blanks using appropriate options below: The goal for K-means cost function is to ____(i)____ the squared error function where error function represents distance between ____(ii)____ and ____(iii)___

A. (i) Maximize (ii) old centroid (iii) new centroid
B. (i) Minimize (ii) data points (iii) cluster centroid
C. (i) Maximize (ii) data points (iii) cluster centroid
D. (i) Minimize (ii) old centroid (iv) new centroid

**Answer: B**

**Solution:**

The goal for K-means cost function is to **minimize** the squared error function where error function represents distance between **data points** and **cluster centroid**


3. Suppose there are three clusters A, B, C with the following centroids respectively: (2, 3), (4, 3), (1, 4). To which cluster will points (4, 5) and (4, 2.5) be assigned to, in the next iteration?

A. Cluster A
B. Cluster B
C. Cluster C

**Answer: B**

**Solution:**

As shown in the table below, the minimum Euclidean distance (highlighted in green) in case of both the data points (4,5) and (4, 2.5) is with the (4,3) cluster centroid. Therefore these points will lie in the same cluster i.e Cluster B.

.. image:: Images/M4_Q8_q3.png
    :width: 100px
    :align: center


4. Select the TRUE statements:

(i) K-means is guaranteed to converge wherever you start, but it might not converge to the optimal solution
(ii) K-Means is insensitive to scale, so we should not perform scaling before applying KMeans 
(iii) K-Means is sensitive to scale, so we should perform scaling before applying KMeans
(iv) K-means is guaranteed to converge wherever you start, and it always converges to the optimal solution

Options:

A. Both (i) and (ii)
B. Both (ii) and (iv)
C. Both (i) and (iii)
D. Both (iii) and (iv)

**Answer: C**


5. Give the correct sequence of steps for the K-means ++ algorithm:

(i) Randomly select the first centroid from the data points
(ii) For each data point, compute its distance from the nearest, previously chosen centroid
(iii) Select the next centroid from the data points such that the point having maximum distance from the nearest centroid is most likely to be selected next as a centroid
(iv) Repeat steps (except random centroid selection) until k centroids have been sampled

Options:

A. (i), (iii), (ii), (iv)
B. (i), (ii), (iv), (iii)
C. (i), (ii), (iii), (iv)
D. (ii), (iii), (i), (iv)

**Answer: C**

**Solution:**

A disadvantage of the K-means algorithm is that it is sensitive to the initialization of the centroids i.e. if a centroid is initialized to be a “far-off” point, it might end up with no points associated with it or more than one cluster might end up linked with a single centroid or more than one centroid might be initialized into the same cluster, resulting in poor clustering. The K-Means ++ algorithm ensures a smarter initialization of the centroids and improves the quality of clustering.

The sequence of steps for the the K-Means ++ algorithm are:

1. Randomly select the first centroid from the data points.
2. For each data point, compute its distance from the nearest, previously chosen centroid.
3. Select the next centroid from the data points such that the probability of choosing a point as centroid is directly proportional to its distance from the nearest, previously chosen centroid. (i.e. the point having maximum distance from the nearest centroid is most likely to be selected next as a centroid)
4. Repeat steps (except random centroid selection) until k centroids have been sampled
