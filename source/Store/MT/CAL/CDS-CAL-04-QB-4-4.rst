Module-1 Quiz-4 Question & Answers with Explanation
==================================================

**Based on GPU computing and Dask**

1. For the given CUDA grid, determine the unique index for Thread (1,0) in Block (1,0). Hint: index = (blockIdx.x * blockDim.x) + threadIdx.x

.. image:: Images/M2_Q4.JPG
    :width: 100px
    :align: center


`A`. 9

`B`. 4

`C`. 5

`D`. 6

**Answer: B**

**Solution**

As given, index = (blockIdx.x * blockDim.x) + threadIdx.x

For Thread (1,0) in Block (1,0), 
blockIdx.x = 1 

blockDim.x = 3

threadIdx.x = 1

Therefore, the index for Thread (1,0) in Block (1,0) is:

(1*3) + 1 = 4

2. GPU computing with CUDA involves Asynchronous Concurrent Execution. This means that:

`A`. CUDA can run various computations and memory transfers on or between hosts and devices as independent tasks with concurrent operations

`B`. CUDA can run various computations and memory transfers on or between hosts and devices as dependent tasks with concurrent operations

`C`. CUDA can run various computations and memory transfers on or between hosts and devices as dependent tasks with non-concurrent operations

**Answer: A**


3. Select the FALSE statement below:

`A`. Dask arrays are composed of many NumPy (or NumPy-like) arrays

`B`. A Dask array will perform at the same speed for different algorithms, irrespective of the arrangement of NumPy arrays in it

`C`. A chunk shape of (1000, 2000, 3000) means chunks of size 1000 in the first axis, 2000 in the second axis and 3000 in the third axis

`D`. Specifying chunks = 1 means that each chunk will have exactly one element in it

**Answer: B**

**Solution:**

Statements A, C and D are True, (see https://docs.dask.org/en/latest/array-chunks.html). Statement B is False because different arrangements of NumPy arrays could lead to faster or slower performance for different algorithms. 

4. Select the TRUE statement(s):

1. CUDA is a general purpose parallel programming platform and programming model for NVIDIA GPUs

2. Dask is a parallel programming package that provides ways to scale Pandas, Scikit-Learn and NumPy workflows, more natively, with minimal rewriting

3. OpenMP is a shared memory directive that defines work decomposition, not data decomposition

4. MPI is a standardized means of message exchange between multiple computers running a parallel program across distributed memory

Options:

`A`. Only 1, 2 and 4

`B`. Only 4

`C`. 1, 2, 3 and 4

`D`. Only 2 and 3

**Answer: C**

5. Match the descriptions correctly with the respective Dask user interfaces:

+--------------------------------------------+---------------------------+
| `(i)` multiple numpy arrays grouped        |                           |
|                       together             |  `a.` Dask Dataframe      |
+--------------------------------------------+---------------------------+
| `(ii)` consists of multiple smaller pandas |  `b.` Dask Array          |
|      dataframes                            |                           |
+--------------------------------------------+---------------------------+
| `(iii)` implements operations like map,    |  `b.` Dask Bag            |
|       filter, fold and groupby on collect- |                           |
|       ionsof generic Python objects, in    |                           |
|       parallel, with a small memory foot   |                           |
|       print, using Python iterators        |                           |
+--------------------------------------------+---------------------------+
| `(iv)` often used to parallelize simple    |                           |
|      computations on unstructured or       |                           |
|      semi-structured data like text data,  |                           |
|      log files, JSON records, or user      |                           |
|      defined Python objects                |                           |
+--------------------------------------------+---------------------------+

Options:

`A`. (i)-(b), (ii)-(a), (iii)-(c), (iv)-(c)

`B`. (i)-(a), (ii)-(c), (iii)-(b), (iv)-(a)

`C`. (i)-(a), (ii)-(b), (iii)-(c), (iv)-(c)

`D`.(i)-(c), (ii)-(c), (iii)-(b), (iv)-(a)

**Answer: A**
