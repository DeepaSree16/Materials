------------------------
SET: 1 Concept Lecture
------------------------

1. **How does the End control line ensure the start of Fetch from the next clock cycle?**

    1. Enables the PC

    2. Resets the Microprogram Sequencer

    3. Resets the PC

    4. Both B & C

..

   **Answer: 2**

   Activation of the end line resets the microprogram sequencer, where
   the Fetch control word is stored.

2. **In the Harvard architecture:**

    1. The program and data memory are separate

    2. The program and data memory are the same

    3. The program can access itself

    4. None of the above

..

   **Answer: 1**

   In the Harvard architecture, the program and data memory are
   separate.

3. **If we have a memory of word size 16-bit and an address length 20-bit, what is the size of the memory?**

    1. 2 kB

    2. 4 kB

    3. 2 MB

    4. 4 MB

..

   **Answer: 3**

   The memory size is = (16/8)*(2^20) bytes

4. **Which of the following is not a 'Random Access' Memory ?**

    1. Flash

    2. Hard disk drive

    3. SSD

    4. All of the above
    
..

   **Answer: 2**

    In a Hard disk drive, the speed of access depends on the location of
    information (not random access).

5. **Compared to CISC, in RISC architecture,**

    1. The binary program length is longer

    2. The instruction set is larger

    3. The instructions are more complex to execute

    4. None of the above

..

   **Answer: 1**

   Compared to CISC, in RISC architecture, the binary program length is
   longer because of the smaller instruction set.

------------------------
SET: 2 Industry Lecture
------------------------

1. **We have noticed that Atmega328 has 28 & 32 pins variants. Which of the following functionalities has more pins in 32 pin variant as compared to the 28 pin variant?**

    1. Communication protocols

    2. Pulse Width Modulation(PWM)

    3. Timer & Interrupts

    4. Analog to Digital converter(ADC)

..

   **Answer: 4**

   ADC6 & ADC7 are two extra pins in 32 variant Atmega328 as compared to
   the 28 pin variant. Apart from this, there are a few extra pins
   related to Power functionalities as well.

2. **Which of the following register is related to only the writing function of the MCU Atemga328/P?**

    1. PORTx

    2. DDRx

    3. PINx

    4. Sleep Register

..

   **Answer: 1**

   PORTx is related to the writing function of the MCU.

3. **The configuration, if a pin acts as an output pin or as an input
   pin, depends on which register?**

    1. PORTx

    2. DDRx

    3. PINx

    4. None of them

..

   **Answer: 2**

   Data direction register (DDRx) is used to define a pin as an input or
   output.

4. **What is the result of a bitwise XORÂ of 0b101 and 0b001?**

    1. 0b100

    2. 0b101

    3. 0b001

    4. 0b011

    5. 0b110

..

   **Answer: 1**

   In the XOR operation, if the individual bits are opposite to each
   other in any bit position, the result will be 1 in that bit position,
   otherwise, the result is always 0 in all other remaining cases.

5. **Which of the following is correct but least preferred ways of setting the 3\ rd bit of Port D?**

    1. PORTD=0b00001000

    2. PORTD=(1<<3)

    3. PORTD|= (1<<3)

    4. PORTD &=~(1<<3)

..

   **Answer: 1**

   Option A: In this way of setting bit, we have to write all bit, keep
   counting the position of bit, and accidentally set all other bits to
   zero which is not required. Due to these reasons, least preferred.

   Option B: This is better than above, as we donâ€™t have to count and
   write all the bits but still, it also accidentally set all other bits
   to zero which is not desirable.

   Option C: This is the best way as it addresses all the above
   shortcomings.

   Options D: This is used for clearing the bit, not for setting.

--------------------------
SET: 3 Lab Session
--------------------------

1.**If DDRx is set to 0 (pin is an input pin), PORTx cannot be written. True or false?**

    1. True

    2. False

..

   **Answer: 1**

   The register PORTx can always be written. However, writing to the
   register might not have the desired effect as the write section is
   disconnected from the pin by setting 0 in DDRx.

2. **What is the advantage of not using digitalWrite and directly writing to the registers e.g. PORTB?**

    1. Multiple pins can be switched simultaneously and not sequentially.

    2. Checks used by Arduino Library are skipped and it saves computational
    resources resulting increase in speed of execution.

    3. The memory usage of the program is reduced.

    4. All of them.

..

   **Answer: 4**

   Options A, B & C are all valid and self-explanatory.

3. **Which of the following statement relates to volatile?**

    1. It defines the data type.

    2. It is a variable for memory address.

    3. It is dereferencing.

    4. It overrides the compiler optimization.

    5. All above.

..

   **Answer: 4**

   A variable defined but not used later, is treated as a useless
   variable by the compiler and ignored for optimization. But adding
   'volatile' forces the compiler to consider it and overrides its
   optimization.

4. **While using Arduino Board as an AVR-ISP Programmer, which of the following statement is valid?**

    1. Reset of the target is connected to reset of the programmer.

    2. Reset of the programmer is connected to reset of the target.

    3. Reset, MISO, MOSI, SCK of each board are connected one to one with
    each other.

    4. Reset of the target is connected to SS (Slave Select) or pin 10 of
    the programmer

..

   **Answer: 4**

   Self-explanatory.

5. **Which of the following are the valid statements? Choose all that apply.**

    1. Once a target is programmed through ICSP, it can be again programmed
    through USB via PC.

    2. Once a target is programmed through ICSP, it cannot be again
    programmed through USB via PC.

    3. Once a target is programmed through ICSP, the bootloader gets
    deleted.

    4. Once a target is programmed through ICSP, it can be again programmed
    through USB via PC but first needs to load the bootloader through
    ICSP.

..

   **Answer: Both 3&4**

   Once the target is programmed through ICSP, its previous bootloader
   gets deleted and cannot be programmed through USB via PC. But the
   bootloader can be loaded through ICSP, after which we can again
   program the target through USB.
