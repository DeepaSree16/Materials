Module-03 Quiz Question & Answers with Explanation
=======================================================

1. Select the FALSE statement below:

1. The OpenMP model supports thread-based parallelism utilized on shared-memory platforms
2. Parallelization may be explicit, where the programmer has full control over parallelization or it may work through compiler directives, existing in the source code.
3. Multiple threads cannot exist within the same process 

**Answer: 3**

**Solution:** 

Statement 3 is false because multiple threads can exist within the same process and share memory resources.

2. Select the correct sequence of steps for a Fork-Join model of OpenMP Programming:

1. A single process (Master thread) begins and executes sequentially until the first parallel region construct is encountered
2. A team of parallel threads is created by the Master thread
3. Statements enclosed by the parallel region construct are executed in parallel among the various threads
4. The team threads complete the statements in the parallel region construct, they synchronize and terminate, leaving only the Master thread

1. 1, 3, 2, 4
2. 2, 3, 1, 4
3. 1, 2, 3, 4
4. 2, 1, 3, 4

**Answer: 3**

**Solution:**

Fork-Join Model: OpenMP programs start with a master thread, running sequentially until they reach a parallel section where they fork into multiple worker threads. At the end of the parallel section the threads re-join into the master thread. Therefore, the correct sequence of steps above is 1-->2-->3-->4 (Option 3).

3. Match the following common OpenMP directives with their correct functions:

+------------------------------------------+---------------------------------------------+
| 1. #pragma omp parallel                  | (i) Defines a section for each thread       |
+------------------------------------------+---------------------------------------------+
| 2. #pragma omp for                       | (ii) Split a for loop among thread          |
|                                          |      – Various “schedules”                  |
|                                          |      are available (most useful:            |
|                                          |      static, dynamic)                       |
+------------------------------------------+---------------------------------------------+
| 3. #pragma omp single                    | (iii) A ‘top-level’ directive that creates  |
|                                          |       a group of threads for the            |
|                                          |       next block of code                    |
+------------------------------------------+---------------------------------------------+
| 4. #pragma omp sections                  | (iv) Defines a section of code where        |
|                                          |      only one thread executes (others skip) |        
+------------------------------------------+---------------------------------------------+

Options:
1-(i), 2-(iii), 3(ii), 4-(iv)

2-(iii), 2-(ii), 3(iv), 4-(i)

3-(ii), 2-(iii), 3-(i), 4-(iv)

4-(i), 2-(iii), 3-(iv), 4-(ii)

**Answer: 2**

**Solution:**

Common OpenMP Directives 
● #pragma omp parallel 
– Creates a group of threads for the following block of code 
– “top-level” directive; other directives are combined with this one 

● #pragma omp for 
– Split a for loop among threads – Various “schedules” are available (most useful: static, dynamic) 

● #pragma omp sections 
– Defines a section for each thread 

● #pragma omp critical 
– Define critical sections, where only one thread executes at a time (in sequence) 

● #pragma omp single 
– Defines a section of code where only one thread executes (others skip)

4. Select the FALSE statement below:

1. Numba is a compiler for Python array and numerical functions, that speeds up applications for high performance functions written directly in Python.
2. Numba generates optimized machine code from pure Python code using the LLVM compiler infrastructure. 
3. With a few simple annotations, array-oriented and math-heavy Python code can be just-in-time optimized to performance similar to C, C++ and Fortran, without having to switch languages or Python interpreters.
4. Numba cannot generate codes on-the-fly (at import time or runtime or at the user’s preference)

**Answer: 4**

**Solution:**

Statements 1, 2, 3 are True. Statement 4 is False because on-the-fly code generation (at import time or runtime or at the user’s preference), is one of Numba’s main features. See link `<https://numba.pydata.org/numba-doc/latest/user/overview.html>`_

5. The jit_module function:

1. automatically replaces functions declared in a module with their jit-wrapped equivalents
2. can be called at the start of the module to be jitted
3. can automatically jit wrap functions defined inside or outside the jit_module
4. contains keyword arguments (kwargs) such as no_python and error_model
5. Both A and D
6. A, B and D

**Answer: 5**

**Solution:**

Option 2 is incorrect because the jit_module function has to be called at the end of the module to be jitted. Option 3 is incorrect because the jit_module function can automatically jit wrap functions defined in the jit_module only. Options 1 and 4 are both correct. Therefore the correct option is 5 (Both 1 and 4).



