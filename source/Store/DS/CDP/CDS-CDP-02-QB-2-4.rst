Module-1 Quiz-2 Question & Answers with Explanation
==================================================

**Based on MPI Parallel Programming**

1. Which of the following gives the total number of ranks allocated to run our script?

1. RANK

2. SIZE

3. LEN

4. COMM

**Answer: 2**

**Solution:**

Suppose you are creating a new python script (.py file). You could import mpi4py and use MPI.COMM_WORLD to get information about all the processors available to run your script (this number is passed to the MPI app when calling the script). COMM_WORLD gives access to the processes available to distribute work across, and information about each. size gives the total number of ranks allocated to run our script. rank gives the identifier of the processor currently executing the code. 


2. In the given picture, X, Y, Z illustrate different types of collective communication. Select the option that correctly matches the processes shown by X, Y, Z.

.. image:: Images/M1_Q2.JPG
    :width: 100px
    :align: center

1. X-Broadcast, Y-Scatter, Z-Gather

2. X-Scatter, Y-Broadcast, Z-Gather

3. X-Scatter, Y-Gather, Z-Broadcast

4. X-Broadcast, Y-Gather, Z-Scatter

**Answer: 1**

**Solution:**

Collective communications allow the sending of data between multiple processes of a group simultaneously. The functions of this type provided by MPI are the following:
MPI_BCAST, MPI_IBCAST: During a Broadcast, one process sends the same data to all processes in a communicator. This is shown as ‘X’ in the image
MPI_SCATTER, MPI_ISCATTER, MPI_SCATTERV, MPI_ISCATTERV: Scatter involves a designated root process sending data to all processes in a communicator. The primary difference between broadcast and scatter is small but important. Broadcast sends the same piece of data to all processes while scatter sends chunks of an array to different processes. This is shown as ‘Y’ in the image
MPI_GATHER, MPI_IGATHER, MPI_GATHERV, MPI_IGATHERV: The Gather operation takes elements from many processes and gathers them to one single process. It is the inverse of Scatter. This is shown as ‘Z’ in the image

3. Select the TRUE statement(s) below:

1. A synchronous send operation completes only after the message sent has been received - i.e., the send operation blocks.

2. An asynchronous send operation can complete without waiting for the message reception by the receiver - i.e., the send operation returns immediately

3. Blocking communication is done using MPI_Send() and MPI_Recv(). These functions do not return (i.e., they block) until the communication is finished. 

4. Non-blocking communication is done using MPI_Isend() and MPI_Irecv(). These functions return immediately (i.e., they do not block) even if the communication is not finished yet

Options:

1. 1 and 2 only

2. 2 and 4 only

3. 1, 2, 3 and 4

4. 1, 2 and 3 only

**Answer: 3**

**Solution:**

All the statements are TRUE


4. Which of the following are features of a Distributed Memory?

1. CPUs connected by node-interconnect
2. non-uniform memory access and access only to own memory
3. user specifies how and when work and data need to be distributed
4. all CPUs connected to all memory banks with same speed

Options:

1. Only 2 and 4

2. Only 1, 2 and 3

3. 1, 2, 3 and 4

4. Only 4

**Answer: 2**

**Solution:**

The features of a Distributed Memory are:

• CPUs connected by node-interconnect

• non-uniform memory access and access only to own memory

• access to other CPU’s memory through MPI implementation 

• user specifies how and when work and data need to be distributed 

• user specifies how and when the communication needs to be done

# 4 is not the feature of a Distributed Memory process. It is one of the features for a Shared Memory process. Option C is correct as only # 1, # 2 and # 3 are correct.



5. Which of the following descriptions for the MPI_Send() function is given incorrectly?

1. buf - initial address of send buffer 
2. count - number of elements in send buffer 
3. datatype - datatype of each send buffer element 
4. dest - rank of destination 
5. tag - message tag 
6. comm - status object

**Answer: 6**

**Solution:**

Option 6 is the incorrect choice because comm does not indicate the status object. It indicates the communicator (handle) that contains all the processes in the MPI program that can communicate with each other

