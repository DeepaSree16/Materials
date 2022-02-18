UNIT-2 Week-9 CFP Question & Answers with Explanation
======================================================

**Question 1**

Which of the following statements is correct for t-SNE, LLE and Isomap?

Options:

A.t-SNE is a nonlinear dimensionality reduction, whereas LLE and Isomap are linear dimensionality reduction techniques

B.t-SNE, LLE and Isomap are linear dimensionality reduction techniques

C.t-SNE, LLE and Isomap are nonlinear dimensionality reduction techniques

D.t-SNE is a linear dimensionality reduction technique whereas LLE and Isomap are non-linear dimensionality reduction techniques

**Answer: C**

**Explanation:**
t-SNE, ISOMAP and LLE are non linear dimensionality reduction technique used for visualizing high dimensional data (3D) to low dimensional space (2D)


**Question 2**

Which of the following sequences is correct for a k-Means algorithm?

1. Specify the number of clusters
2. Assign cluster centroids randomly
3. Assign each data point to the nearest cluster centroids
4. Re-compute cluster centroids
5. Re-assign each point to the nearest cluster centroids

Options:

A.1,2,3,4,5

B.2,1,3,4,5

C.3,2,1,4,5

D.5,4,3,2,1

**Answer: A**

**Explanation:** 
The k-Means algorithm is a way to find the clusters and its centroids . Below are the steps that work iteratively to find the clusters and its centroids . “k” is a variable that represents the number of groups. 
1. Clusters the data into k groups where k  is predefined.
2. Select k points at random as cluster centers.
3. Assign the points to their closest cluster center according to the Euclidean distance function.
4. Re-compute the centroid of all points in each cluster.
5. Repeat steps 3 and 4 by re-assigning each point to nearest cluster centroids and re-computing the centroids till convergence.

**Question 3**

Agglomerative clustering is —————-

Options:

A.Implemented as a bottom-up approach but not as a top-down approach

B.Implemented either as a top-down approach or as a bottom-up approach

C.Implemented as a top-down approach but not as a bottom-up approach

**Answer: A**

**Explanation:** 
Hierarchical clustering is a method which seeks to build a hierarchy of clusters and it generally fall into two types: 

1. Agglomerative (“bottom up” approach) - In this method initially, each data point is a cluster of its own, further pairs of clusters are merged as one moves up the hierarchy.

2. Divisive (“top down” approach) - In divisive initially, all the points in the dataset belong to one cluster and split is performed recursively as one moves down the hierarchy.

**Question 4**

k-Means is an example of ——————– learning

Options:

A.Supervised

B.Unsupervised

C.Traditional rule based

D.probabilistic

**Answer: B**

**Explanation:**
Supervised Learning means that we have labels for each sample in the dataset. If we do not have labels for each sample in the dataset, then it is called unsupervised learning. 

