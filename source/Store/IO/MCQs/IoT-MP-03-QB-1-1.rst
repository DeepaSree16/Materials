------------------------
SET: 1 Concept Lecture
------------------------


1. **Which of these conditions need to be met for an ISR to be called?**

    1. Global interrupt enabled

    2. Interrupt trigger flag set

    3. Interrupt enabled

    4. All of the above

..

   **Answer: 4**

   For the ISR to be called, the global interrupt, trigger flag and
   interrupt flag should all be set.

2. **For ATMEGA328, inside an ISR, by default, another interrupt cannot
   be serviced because:**

    1. The global interrupt flag is disabled

    2. There are no timers

    3. There are no interrupt flags

    4. None of the above

..

   **Answer: 1**

   The global interrupt flag is disabled inside an ISR by default.

3. **For a controller, the main clock is 64 MHz, and the ADC clock
   prescalar is 128. If the ADC takes 20 cycles to complete, what is the
   fastest sampling rate possible?**

    1. 20 kHz

    2. 10 kHz

    3. 25 kHz

    4. 250 kHz

..

   **Answer: 3**

   The clock for ADC is 500 kHz. 20 cycles of this clock will take 40
   us, thus, 25 kHz.

4. **Crystal oscillators are preferred for clock generation because:**

    1. Low-quality factor

    2. Low drift in parameters

    3. Low cost

    4. All of the above
..

   **Answer: 2**

   There is low drift in equivalent parameters (R, L, C), leading to low
   drift in frequency.

5. **We want to define a 10 ms timer. The microcontroller clock is 1.024
   MHz and the counter length is 16-bits. If the prescalar is 128, what
   should be the value of compare register?**

    1. 79

    2. 80

    3. 160

    4. 159

..

   **Answer: 1**

   Clock frequency is 1024/128 = 8 kHz. Required frequency is 0.1 kHz.
   Compare value is 8/0.1-1 = 79.

**SET: B**

1. **It is measured that, around 8 million clock cycles passed in a
   second. What is the clock speed of the MCU?**

    1. 2MHz

    2. 4MHz

    3. 8MHz

    4. 16MHz

    5. 20MHz

    6. None of them

..

   **Answer: 3**

   8 million clock cycles per second = 8MHz

2. **Which is not** **a mode that is available in the Atmega MCU?**

    1. Normal Mode

    2. Fast Mode

    3. Phase Correct Mode

    4. Clear timer on compare Match Mode

..

   **Answer: 2**

   Fast Pulse Width Modulation (PWM) is available as mode but not Fast
   Mode.

3. **Considering timer0, in following code:**

..

   **#define TOP_VALUEÂ  XXX**

   **TCNT0 = 0;**

   **TOP = TOP_VALUE;**

   **Which of the following values are accepted instead of XXX?**

    1. 255

    2. 100

    3. 355

    4. All of them

**Answer: 4**

Any values are accepted. In the case of negative integers, they are
going to be converted into positive ones. If an integer is larger than
MAX, it bits are truncated.

4. **Given is a 16bit timer and a clock frequency of 16MHz. What
   prescaler do you select to make the timer overflow at exactly 1
   second?**

    1. 0

    2. 1

    3. 8

    4. 64

    5. 256

    6. 1024

    7. None of them

**Answer: 7**

   No prescaler makes the timer overflow at precisely every 1 second.
   Closest comes the prescaler of 256, in which the timer increments
   16000000/256=62500 times and is just short of an overflow at
   MAX=65535.

5. **In the Normal Mode, what is the TOP value?**

    1. MAX

    2. 100

    3. 0

    4. 8bit

    5. None of them

..

   **Answer: 1**

   In the normal mode, the timer always runs to the Maximum value
   possible. If a TOP lesser than MAX is required, it needs to be
   implemented in software.
-----------------------
SET: Lab Session
-----------------------


1. **The timer runs in CTC mode and you set the OCRnA to 3. Given a
   clock of 1MHz, how long is one period? (1us = 1 microsecond =
   1*10^(-6)s)**

    1. 1 µs

    2. 3 µs

    3. 6 µs

    4. 8 µs

    5. 9 µs

..

   **Answer: 4**

   Here the TCNT counts from 0 to 3, 3 increments are required. One more
   is required to make the counter register overflow. That means each
   period consists of 8 increments in total (4 for the low, 4 for the
   high part of the period). Hence 8 microseconds (us) is correct.

2. **In the polling example given here, the while loop (the inner one)
   was kept empty and hence the CPU cannot do anything else apart from
   polling TCNT1. Why is that so?**

.. code-block::

 # define F_CPU 16000000
 # include <avr/io.h>

     int main(void)
      {
          DDRB=(1<<5);//output port
          TCCR1B=(1<<CS12)|(1<<CS10);//prescaler=1024,start timer1

        while(1)
        {
            //--Wait till the desired value is reached

            while(TCNT1<15624){}// constantly checking, 1 second

            TCNT1=0;//reset counter

            PORTB^=(1<<5);
        }
        return 0;

      }
..

    1. Nothing is to be done in the **while** loop anyway.

    2. This is the way to implement the desired functionality.

    3. None of them.

    4. The **while** loop requires resources: It needs to check the value of
    **TCNT1** and if it is less than **15624**, it has to look back to
    the condition. It might happen, that the while loop might not break
    after exactly 1 second. Filling it with further instruction might
    increase that inaccuracy.

..

   **Answer: 4**

   Self-explanatory

3. **Which of the following group of bits are configured in the TCNTn
   register for getting the different modes of operation of timers?**

    1. WGM

    2. CS

    3. COM

    4. ICNC&ICES

..

   **Answer: 1**

   WGM bits are configured to get the different modes of operation of
   timers.

4. **External Oscillator is connected to TOSC1 and TOSC2 pin of MCU
   which are related to â€¦**

    1. Timer 0

    2. Timer1

    3. Timer2

    4. All of above

.. 

    **Answer: 3**

    Timer2 has a particular asynchronous timing mode which can be set to
    count events from an external clock source connected to TOSC1 and TOSC2.

5. **Which of the following is the** **best suitable ISR vector if we
   would like to know only those changes from low to high or high to low
   and forget about the other toggle without special implementation in
   software?**

    1. TIMER1_COMPA_vect

    2. TIMER1_OVF_vect

    3. PCINT1_vect

    4. INT1_vect
..

    **Answer: 4**

    There is an External Interrupt Control Register A, where different bits
    can be set and INTn_vect can be used for getting above mentioned
    triggers through INTn pins.
