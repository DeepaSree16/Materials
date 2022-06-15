----------------------
SET: Concept Lecture
----------------------

1. **Which of these pins is encountered in the implementation of the SPI
   protocol?**

    1. RX

    2. MOSI

    3. SDA

    4. TA

..

   **Answer: 2**

   The SPI is a 3-wire implementation based on MOSI, MISO, and SCK.

2. **Which of these is the most commonly used baud rate in UART?**

    1. 9600

    2. 96000

    3. 96

    4. 1152

..

   **Answer: 1**

   9600 is the most commonly used baud rate in UART.

3. **Which of these is an implementation of the UART protocol?**

    1. SPI

    2. I2C

    3. RS232

    4. USB

..

   **Answer: 3**

   RS232 defines the electrical levels for the UART protocol.

4. **What is the typical time interval between two start-of-frame (SOF)
   signals in USB?**

    1. 2 ms

    2. 10 ms

    3. 1 ms

    4. 5 ms

..

   **Answer: 3**

   SOF signals are at 1 ms intervals

5. **What is the key disadvantage of analog signal communication?**

    1. Noise susceptibility

    2. Lack of power

    3. Lack of electrical implementation

    4. Complex wiring

..

   **Answer: 1**

   Noise susceptibility is the major reason behind the use of digital
   hardware communication protocols.

----------------------
SET: Industry Lecture
----------------------

1. **Which are the two lines used in the I2C?**

    1. SDA and SPDR

    2. SPDR and SCL

    3. SDA and SCL

    4. SCL and status line

..

   **Answer: 3**

The I2C bus consists of two lines which are called SDA and SCL.

2. **GSM module like SIM900/800 uses which protocol?**

    1. UART protocol

    2. Microwire protocol

    3. SPI protocol

    4. I2C protocol

..

   **Answer: 1**

   GSM/GPS modules like SIM900/800 uses UART communication for accepting
   AT commands that are used to control them and gather the replies.

3. **Which of the following have an asynchronous data transmission?**

    1. SPI

    2. RS232

    3. Parallel port

    4. I2C

..

   **Answer: 2**

   The data is transmitted asynchronously in RS232 which enhances
   long-distance communication, whereas SPI, I2C offer short-distance
   communication, and therefore, they are using synchronous data
   transmission.

4. **SPI is used to interface with which of the following devices?**

    1. LoRa Modem

    2. GSM Module

    3. LM 35

    4. ADXL 345

..

   **Answer: 1**

   LoRa module facilitates SPI protocol to communicate.

5. **CAN bus termination uses__________.**

    1. Capacitor

    2. Inductor

    3. Resistor

    4. RLC

..

   **Answer: 3**

   Explanation: It uses a resistor with 120-ohm resistance.

----------------------
SET: Lab Session
----------------------

1. **How many rows and columns are present in a 16*2 alphanumeric LCD?**

    1. rows=2, columns=32

    2. rows=16, columns=2

    3. rows=16, columns=16

    4. rows=2, columns=16

..

   **Answer: 4**

   16*2 alphanumeric LCD has 2 rows and 16 columns.

2. **Which pin of the LCD is used for adjusting its contrast?**

    1. pin no 1

    2. pin no 2

    3. pin no 3

    4. pin no 4

..

   **Answer: 3**

   Pin no 3 is used for controlling the contrast of the LCD.

3. **The RS pin is \________\_ for an LCD.**

    1. Input

    2. Output

    3. input & output

    4. none of the above mentioned

..

   **Answer: 1**

   The RS pin is an input pin for an LCD.

4. **The BME280 sensor measures the following \_________.**

    1. temperature and humidity

    2. temperature, humidity, pressure

    3. temperature, humidity, altitude

    4. temperature, humidity, luminosity

..

   **Answer: 2**

   BME280 sensor measures temp, RH, and pressure. It does not measure
   altitude directly but we can calculate it in MCU using the pressure
   reading.

5. **The BME280 sensor can work on which two protocols?**

    1. UART and SPI

    2. SPI and CAN

    3. I2C and SPI

    4. I2C and UART

..

   **Answer: 4**

   BME280 sensor can be interfaced using either SPI or I2C communication.
   protocol.
