Module-5 Quiz-9 Question & Answers with Explanation
==================================================

**Based on Graph Representation Learning, node embedding, node classification, link prediction, graph classification, graph convolutions**

1. For the given directed graph, which of the following is TRUE w.r.t. its adjacency matrix values?

.. image:: Images/M5_Q9_q1.png
    :width: 100px
    :align: center

A. P → Q = 0, P→ R = 1, R→ P = 0, R→ X = 0
B. P → Q = 1, P→ R = 0, R→ P = 1, R→ X = 1
C. P → Q = 0, P→ R = 1, R→ P = 0, R→ X = 1
D. P → Q = 0, P→ R = 1, R→ P = 1, R→ X = 0

**Answer: C**



2. Select the FALSE statement:

A. The elements of the adjacency matrix indicate whether pairs of vertices are adjacent or not in the graph.
B. Loops (also known as self-loops or self-edges) are edges (i,i) from a node i to itself. 
C. A loop corresponds to a diagonal entry in the adjacency matrix of the graph
D. A directed graph contains an unordered pair of vertices whereas an undirected graph contains an ordered pair of vertices

**Answer: D**

**Solution:**
Statements A, B, C are TRUE. Statement D is FALSE, as ‘A directed graph contains an ordered pair of vertices whereas an undirected graph contains an unordered pair of vertices’.



3. For the given Adjacency Matrix ‘A’ and Degree Matrix ‘D’, select the correct  Laplacian matrix ‘L’ from the options below:

.. image:: Images/M5_Q9_q3_1.png
    :width: 100px
    :align: center

Options:

.. image:: Images/M5_Q9_q3_2.png
    :width: 100px
    :align: center

A. 

.. image:: Images/M5_Q9_q3_3.png
    :width: 100px
    :align: center

B. 

.. image:: Images/M5_Q9_q3_4.png
    :width: 100px
    :align: center

C. 

**Answer: B**

**Solution:**

.. image:: Images/M5_Q9_q3_5.png
    :width: 100px
    :align: center



4. Which of the following is the correct sequence of steps for spectral clustering?

.. image:: Images/M5_Q9_q4_1.png
    :width: 100px
    :align: center

A. 

.. image:: Images/M5_Q9_q4_2.png
    :width: 100px
    :align: center

B. 

.. image:: Images/M5_Q9_q4_3.png
    :width: 100px
    :align: center

C. 

**Answer: A**

**Solution:**

.. image:: Images/M5_Q9_q4_1.png
    :width: 100px
    :align: center



5. Match the following correctly:

+-----------------------------+-----------------------------------------------------+--------------------------------------------------+
| Technique                   | Description                                         | Example                                          |
+-----------------------------+-----------------------------------------------------+--------------------------------------------------+
| 1. Graph classification     | (a)  Its objective is to identify pairs of nodes    | (i) Predict the music preferences of a           |
|                             | that will either form a link or not in the future.  |  user’s friendship network                       |
+-----------------------------+-----------------------------------------------------+--------------------------------------------------+
| 2. Link prediction          | (b) It discriminates between graphs of              | (ii) Suggest interactions or collaborations      |
|                             | different classes                                   |  between employees in an organization            |
+-----------------------------+-----------------------------------------------------+--------------------------------------------------+
| 3. Node classification      | (c) It infers the missing or incomplete attribute   | (iii) Given a set of chemical compounds,         |
|                             | values of some nodes, given attribute values        | each represented as a graph where the nodes      | 
|                             | of other nodes in the network.                      | are atoms and edges are bonds between atoms,     |
|                             |                                                     | predict whether a compound is a cancer inhibitor |
+-----------------------------+-----------------------------------------------------+--------------------------------------------------+

A. 1-b-iii, 2-c-ii, 3-a-i
B. 1-c-iii, 2-a-i, 3-b-ii
C. 1-a-iii, 2-b-ii, 3-c-i
D. 1-b-iii, 2-a-ii, 3-c-i

**Answer: D**

