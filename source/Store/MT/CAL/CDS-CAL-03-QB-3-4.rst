Module-03 Quiz Question & Answers with Explanation
=======================================================
**Based on 22nd Aug lecture: HPC, MPI Parallel Programming**

1. Fill in the blanks by selecting the correct option:

`(i)` _______ memory needs constant power in order to retain data. 

`(ii)` _______ memory is computer memory that can retain the stored information even when not powered. 

`(iii)` ______ is volatile memory that temporarily stores the files you are working on.  

`(iv)` ______ is non-volatile memory that permanently stores instructions for your computer

* In the options below, RAM=Random Access Memory, ROM=Read Only Memory

Options:

`A` (i) Non-volatile (ii) Volatile (iii) ROM (iv) RAM

`B` (i) Volatile (ii) Non-volatile (iii) RAM (iv) ROM

`C` (i) Volatile (ii) Non-volatile (iii) ROM (iv) RAM

`D` (i) Non-volatile (ii) Volatile (iii) RAM (iv) ROM

**Answer: B**

**Solution:**

* Volatile memory is computer memory that requires constant power to maintain the stored information. Eg. RAM
* Non-volatile memory is computer memory that can retain the stored information even when not powered. Eg. ROM


2. Which of the following are features of a Distributed Memory?

1. CPUs connected by node-interconnect
2. non-uniform memory access and access only to own memory
3. user specifies how and when work and data need to be distributed
4. all CPUs connected to all memory banks with same speed

Options:

`A` Only 2 and 4

`B` Only 1, 2 and 3

`C` 1, 2, 3 and 4

`D` Only 4

**Answer: B**

**Solution:**

The features of a Distributed Memory are:

• CPUs connected by node-interconnect
• non-uniform memory access and access only to own memory
• access to other CPU’s memory through MPI implementation 
• user specifies how and when work and data need to be distributed 
• user specifies how and when the communication needs to be done

# 4 is not the feature of a Distributed Memory process. It is one of the features for a Shared Memory process. Option C is correct as only # 1, # 2 and # 3 are correct.

3. Select the FALSE statements with respect to MPI:

1. It is a programming language
2. Its processes run on a shared memory programming model, i.e. they access the same shared memory
3. The user specifies how and when communication has to be done, by calling MPI library communication routines
4. Any MPI process can directly send and receive messages, to and from other processes

Options:

`A` Only 1 and 3

`B` Only 2 

`C` Only 1 and 2

`D` 1, 2 and 4

**Answer: C**

**Solution:**

Statements 1 and 2 are False. 

MPI is not a programming language. It is a programming model that is widely used for parallel programming in a cluster. 
MPI is a subroutine or a library for passing messages between processes in a distributed memory model (not a shared memory model) 

4. Which of the following gives the total number of ranks allocated to run our script?

`A` RANK

`B` SIZE

`C` LEN

`D` COMM

**Answer: B**

**Solution:**

Suppose you are creating a new python script (.py file). You could import mpi4py and use MPI.COMM_WORLD to get information about all the processors available to run your script (this number is passed to the MPI app when calling the script). COMM_WORLD gives access to the processes available to distribute work across, and information about each. size gives the total number of ranks allocated to run our script. rank gives the identifier of the processor currently executing the code. 


5. What does MPI.Comm.rank return?

`A` rank of the process that calls it in the range from 1 ……..size

`B` rank of the process that calls it in the range from 0 ……. size

`C` rank of the process that calls it in the range from 1 ……. size-1

`D` rank of the process that calls it in the range from 0 ……. size-1

**Answer: D**



