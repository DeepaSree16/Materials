----------------------
SET: Concept Lecture
----------------------

1. **Which of the following refers to outputting the data stored in a
   register?**

    1. Enable

    2. Load

    3. Increment

    4. Unload

..

   **Answer: 1**

   Enabling a register refers to enabling its output tristate buffers.

2. **If we wish to implement an ALU which performs 20 different
   operations, what is the minimum number of select lines are
   required?**

    1. 4

    2. 3

    3. 5

    4. 2

..

   **Answer: 3**

   5 select lines are required because that provides an opportunity to
   encode 32 different operations.

3. **If the instruction for ADD <R> is from 0x10 to 0x1F, what is the
   instruction code for ADD R5?**

    1. 0001 1001

    2. 0010 0101

    3. 0001 0101

    4. 1101 1001

..

   **Answer: 3**

   The instruction for ADD R5 is 0x15 which is represented as 0001 0101.

4. **The machine code for add immediate is 0x01. If the program
   encounters 0x01, followed by 0xF0 in memory, what happens?**

    1. F0 is added to R0

    2. F0 is added to accumulate register

    3. 01 is added to accumulate register

    4. F0 is added to PC

..

   **Answer: 2**

   Add immediate adds the next byte to the accumulate register.

5. **How does the first program start working in the processor at power
   on?**

    1. The PC is reset to 0

    2. The PC is reinstated to the last value

    3. The PC is set to a specific pre-defined value

    4. The PC starts with a random value

..

   **Answer: 1**

   The PC is reset to 0 and the first line of the first program
   (bootloader) is present there.

----------------------
SET: 2 Industry Lecture
----------------------

1. **In a 4-bit Johnson counter sequence, there are a total of how many
   states or bit patterns?**

    1. 1

    2. 3

    3. 4

    4. 8

..

   **Answer: 4**

   In a 4-bit Johnson counter, the total number of states is determined
   by 2^N = 2^4 = 16

   Total Number of Used states = 2N = 2*4 = 8

   Total Number of Unused states = 16 - 8 = 8.

2. **How much storage capacity does each stage in a shift register
   represent?**

    1. One bit

    2. Two bits

    3. Four bits

    4. Eight bits

..

   **Answer: 1**

   A register is made of flip-flops. And each flip-flop stores 1 bit of
   data. Thus, a shift register can store one bit and if another bit is
   to store, in such a situation it deletes the previous data and stores
   them.

3. **The register is a type of \___________.**

    1. Sequential circuit

    2. Combinational circuit

    3. CPU

    4. Latches

..

   **Answer: 1**

   Register's output depends on the past and present states of the
   inputs. The device which follows these properties is termed a
   sequential circuit. Whereas, combinational circuits only depend on
   the present values of inputs.

4. **A decimal counter has \_____\_ states.**

    1. 5

    2. 10

    3. 15

    4. 20

..

   **Answer: 2**

   The decimal counter is also known as 10 stage counter. So, it has 10
   states. It is also known as Decade Counter counting from 0 to 9.

5. **How many select lines would be required for an 8-line-to-1-line
   multiplexer?**

    1. 2

    2. 4

    3. 8

    4. 3

..

   **Answer: 4**

   **2^n** input lines, n control lines, and 1 output line available for
   MUX. Here, 8 input lines mean **2^3** inputs. So, 3 control lines are
   possible. Depending on the status of the select lines, the input is
   selected and fed to the output.

----------------------
SET: Lab Session
----------------------

1. **A Decade Counter requires \___\_ flip-flops.**

    1. 1

    2. 7

    3. 4

    4. 2

..

   **Answer: 3**

   The number of flip-flops required to obtain a decade counter which is
   mod-10 counter is given as the minimum value of n for 2^n >= 10 i.e.,
   n=4.

2. **A counter circuit is usually constructed of \____________.**

    1. A number of latches connected in cascade form

    2. A number of NAND gates connected in cascade form

    3. A number of flip-flops connected in cascade

    4. A number of NOR gates connected in cascade form

..

   **Answer: 3**

   A counter circuit is usually constructed of many of flip-flops
   connected in a cascade. Preferably, JK Flip-flops are used to
   construct counters and registers.

3. **The terminal count of a typical modulus-10 binary counter is
   \________.**

    1. 0000

    2. 1010

    3. 1001

    4. 1111

..

   **Answer: 3**

   The mod-10 binary counter starts from 0-9 and has four flip-flops. 9
   can be represented as 1001 in binary. Hence the flip-flops terminate
   at 1001 state and return back to 0000.

4. **A seven-segment, common-anode LED display is designed for:**

    1. all cathodes to be wired together

    2. one common LED

    3. a HIGH to turn off each segment

    4. disorientation of segment modules

..

   **Answer: 3**

   In a common anode display, the common is connected to the Vcc. And
   giving the ground to the led terminals would complete the circuit and
   light the led. The opposite would turn off the led segment.

5. **In a decoder, if the input lines are 4, the maximum output lines
   are**

    1. 4

    2. 12

    3. 8

    4. 16

    **Answer: D**
    The maximum number of outputs for a decoder is given as 2^n = 2^4 = 16.


..

   **Answer: D**

   The maximum number of outputs for a decoder is given as 2^n = 2^4 =
   16.
