---------------------
SET:  Concept Lecture
---------------------

1. **What is the technology that enables efficient and on-demand allocation of resources to applications in cloud computing?**

    1. Infrastructure as a Service

    2. Virtualization

    3. Service Level Agreement

    4. None of the above

..

   **Answer:** 2

   Virtualization allows for resource pooling and consolidation, which allows scalability and on-demand allocation.
    
2. **What cloud deployment model is beneficial if there is a mix of sensitive and non-sensitive data points communicated by the IoT devices?**


    1. Public cloud

    2. Private cloud

    3. Hybrid cloud

    4. None of the above

..

   **Answer: 3**

   A hybrid cloud will enable sensitive data to be kept in private cloud and non-sensitive data can use public cloud, 
   which minimizes the infrastructure that needs to be maintained/monitored.

3. **What is the advantage of Cloud Computing for IoT?** 

    1. Low bandwidth cost

    2. Scalability

    3. Low latency

    4. None of the above


..

   **Answer: 2**

   Based on increase in IoT devices, the cloud resources allocated can be increased.


4. **PaaS may consist of the following**

    1. Middleware

    2. Middleware+Infrastructure

    3. All of the above

    4. None of the above

..

   **Answer:** 3

   A PaaS implementation can consist of only the middleware with a 3rd party infrastructure resources, or
   both middleware+infrastructure.

5. **What model of edge computing has best context awareness?**

    1. Fog Computing

    2. Mobile edge computing

    3. Cloudlet computing

    4. None of the above

..

   **Answer: 2**

   

---------------------
SET: Industry Lecture
---------------------

1. **1.	Which other AWS Service AWS IoT works with?**

    1. lambda only

    2. Any AWS service options are limitless
    
    3. with S3 only
    
    4. with Cloud watch only


..

   **Answer: 2**

2. **If you want to establish a private network connection between AWS and a corporate network which A W S Service Needed to fulfil the requirement?**

    1. Amazon Connect

    2. Amazon route 53

    3. AWS direct connect
    
    4. All of the above

..

   **Answer:** 3

   

3. **Which communication protocol is not supported by GCP.**

    1. HTTP
    2. MQTT
    3. WebSocket


..

   **Answer:** 3

   

4. **Edge TPU in GCP is used for.**

    1. Deploying JAVA applications 
    
    2. Deploying AI applications
    
    3. All of the above 


..

   **Answer:** 2

   

5. **Which of the following enhance the security of access to the AWS management console?**

    1. AWS certificate Manager
    
    2. AWS Multifactor Authentication
    
    3. Security Groups
    
    4. All of the above 

..

   **Answer:** 3

   
---------------------
SET : Lab Session
---------------------

1. **Choose the correct sequence for the following (assuming the device uses MQTT protocol).**

i.	IoT Device performs TLS Handshake for exchanging data 
ii.	Email alert sent to the user
iii.	AWS Rules triggered
iv.	Data payload published to AWS


    1. iv, ii, iii, i

    2. iii, i, ii, iv

    3. i, iv, iii, ii

    4. ii, iii, iv, i

..

    **Answer: 3**

   


2. **Which of the following is/are true regarding Dynamo DB in the context of IoT?**

i.	Multiple data columns can exist in Dynamo Db

ii.	The Sort key is mandatory for data sorting during retrieval

iii.	Dynamo Db uses IoT rules for data-exchange

iv.	Dynamo Db is a Relational Database with key-value pairs


    1. Only ii

    2. Only iv

    3. ii and iv

    4. i, iii

    5. ii, iii, iv


..

   **Answer:** 4

   
3. **3.	Which of the following is/are a valid query in AWS IoT rules?**

i.	SELECT   FROM   ‘outTopic’
ii.	SELECT  FROM * ‘outTopic’
iii.	SELECT  *  FROM ‘outTopic’ WHERE ‘outTopic’ > 70
iv.	SELECT * FROM  Temp
v.	SELECT * FROM ‘outTopic’

   1. i, ii, v
   2. iii and iv
   3. only iii 
   4. only iv
   5. only v
   6. iii, v

..

   **Answer: 5**

  

4. **4.	Which of the following is/are false about IoT Policies?**

i.	IoT policy must be unique for every IoT device

ii.	IoT policy cannot be created at the MQTT channel level (resource level)

iii.	The policy can be directly applied to an IoT Thing.

iv.	A single policy must be applied to a device certificate


    1. i, iii, iv
    2. ii, iii
    3. only iii
    4. i, ii
    5. ii, iv

..

   **Answer: 1**



5. **Which of the following is/are valid statements?**

i.	Both DynamoDB & S3 can store any kind of data

ii.	DynamoDB can be directly connected to Analytics tools

iii.	S3 can be directly connected to Analytics tools

iv.	All data can be stored in S3 directly from AWS IoT core.


    1. ii, iii 
    2. i, iii
    3. iv
    4. iii


..

    **Answer: 4**

    


