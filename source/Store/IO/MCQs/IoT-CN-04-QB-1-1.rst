---------------------
SET: Concept Lecture
---------------------

1. **HTTP and MQTT both primarily use the following protocols:**

    1. User Datagram Protocol (UDP)

    2. Transport Control Protocol (TCP)

    3. Asynchronous Transfer Mode (ATM)

    4. None of the above

..

   **Answer:** 2

2. **Which of the following are the examples of a publish-subscribe model?**

    1. MQTT

    2. TV broadcasting

    3. Newspaper distribution

    4. All of the above

..

   **Answer: 4**

   All of the above.

3. **In MQTT, a publisher cannot send data to multiple subscribers.**

    1. Yes

    2. No

..

   **Answer: 2**

   No. Publisher can publish on a topic, which any number of subscribers
   can subscribe.

4. **In MQTT, clients do not need to know each other's IP addresses.**

    1. Yes

    2. No

..

   **Answer:** 1

   Yes. As they are linked only through topics on the broker.

5. **MQTT supports message queues.**

    1. Yes

    2. No

..

   **Answer: 2**

   No, Message Queue is a misnomer for MQTT as it was named after an
   existing IBM product/series.

---------------------
SET: Industry Lecture
---------------------

1. **What is the standard form of MQTT?**

    1. Message Queue Telemetry Transport

    2. Message Queue Transport Telemetry

    3. Message Queue Time Transport

    4. None of the above

..

   **Answer: 1**

2. **The MQTT protocol designed for \________.**

    1. Limited bandwidth

    2. Remote connection

    3. Small code footprint

    4. All of the above

..

   **Answer:** 4

   Message Queue Telemetry Transport is designed for limited bandwidth,
   remote connection, and a small code footprint.

3. **\_______\_ are the components of the MQTT protocol**

    1. Subscribers

    2. Brokers

    3. Publishers

    4. All of the above

..

   **Answer:** 4

   Message Queue Telemetry Transport usages subscriber, broker, and
   publisher.

4. **Standard ports of MQTT are \_________\_**

    1. I2C

    2. SSL

    3. USART

    4. TCP/IP

..

   **Answer:** 4

   The MQTT protocol isÂ **based on TCP/IP**. Both the client and the
   broker need to have a TCP/IP stack.

5. **The Wi-SUN (Wireless Smart Utility Network) is based on the IEEE
   802.15.4 standard.**

    1. True

    2. False

..

   **Answer:** 1

   Wi-SUN (Wireless Smart Utility Network) is a wireless communication
   standard that enables seamless connectivity. This wireless
   communication technology is based on the IEEE 802.15.4 standard.
---------------------
SET : Lab Session
---------------------

1. **Following are two statements and choose one of the options that
   apply.**

   | **Statement-1: MQTT Supports Security**  
   | **Statement-2: Only JSON data can be sent as MQTT payload**


    1. Statement-2 is true, and Statement-1 is false

    2. Statement-1 is true, and Statement-2 is false

    3. Statement 1 and Statement 2, both are true

    4. Statement 1 and Statement 2, both are false

..

    **Answer: B**

    MQTT supports security, and any string-byte data can be transported
    as a payload.


2. **Choose the correct sequence for the following (assuming only one
   data packet is sent by the publisher)**

i.   Devices begin MQTT Connection to MQTT server

ii.  Publisher publishes MQTT payload

iii. MQTT Subscriber subscribes to MQTT Server

iv.  Data received by the subscriber

    A. i, ii, iii, iv

    B. iii, i, ii, iv

    C. i, iii, ii, iv

    D. iii, ii, iv, i

..

   **Answer:** C

   Firstly, the devices need to connect to the server then the
   subscriber needs to be subscribed then if the publisher sends the
   data, then it can be received by the subscriber

3. **Help Sunder choose a proper sequence of items for building his application. Sunder is an IoT Engineer who is trying to build a Gas-Safety application for detecting any gas leakages and immediately alerting the user/fire department if any leakages are detected.**

    1. MQTT publish/HTTP post at detection end and MQTT Subscribe at
    alerting end

    2. MQTT publish at detection end and HTTP GET at alerting end

    3. HTTP publish at detection end and MQTT Subscribe at alerting end

    4. MQTT publish at detection end and MQTT Subscribe at alerting end

    5. MQTT publish/HTTP post at detection end and MQTT Subscribe/ HTTP GET
    at alerting end

..

   **Answer: D**

   MQTT would be ideal as HTTP needs to connect to the server first
   before posting the data.


4. **The standard stack of MQTT uses**

    1. I2C Protocol, synchronous, and callback functions

    2. SSL with an asynchronous mode of communication

    3. UART and callback functions

    4. TCP/IP with call back functions

..

   **Answer: 4**

   MQTT uses TCP/IP stack will callback functions.

5. **Which of the following are not true for MQTT payload and JSON de-serialization in ESP-32?**

i.   Explicit Memory allocation is required for JSON de-serialization and MQTT callback function

ii.  Both accept JSON data.
iii. Both can function asynchronously

    1. i, ii, iii

    2. i and iii

    3. only iii

    4. None of them

..

    **Answer: C**

    MQTT callback and JSON need memory allocation to be done manually and
    both accept JSON data.


