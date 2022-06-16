#include <WiFi.h>
#include <PubSubClient.h>
#include<WiFiClient.h>
// Your Wifi credentials
const char* ssid = "AIRTEL_AASHVI";
const char* password = "ramen123";

const char *mqttServer ="mqtt3.thingspeak.com";//remain same always
const int mqttPort=1883;//remain same always
char *mqtt_publish="channels/1639849/publish"; //channels/your_channel_ID/publish

// Use the credential of  Publisher Device obtained from Thingspeak
char *clientId = "MQYhHzcPEgo7ETYfCDwrNRo";
char *mqttUserName = "MQYhHzcPEgo7ETYfCDwrNRo";
char *mqttPass = "6vu134X7lqQaC7jZjDN1ISQ9";

long lastMsg = 0;
char msg[50];

WiFiClient espClient;
PubSubClient client(espClient);

void reconnect() {
  
    while (!client.connected())
    {
      Serial.print("Connecting to  MQTT ...");
      
      if (client.connect(clientId,mqttUserName,mqttPass))
        {
          Serial.println("connected Successfully");      
        }
  
      else
        {
           Serial.print("failed with state ");
           Serial.println(client.state());
        }
      
    }
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid,password);
  delay(1000);
    
    while(WiFi.status()!=WL_CONNECTED)
    {
      delay(500);
      Serial.println("Connecting to WiFi...");
    }
  
  Serial.println("Connectted to to WiFi");
  client.setServer(mqttServer, mqttPort);
  client.setBufferSize(2048);
  reconnect();
}

void loop()

{
  client.loop();
  reconnect();
  delay(1000);
  /*for simplicity we are publishing two random varibale temp and humi
   any sensor data can be published in the same fashion
   Ex.: BME 280 sensor with Adafruit_BME280 library: temp=bme.readTemperature()
  */
  
  int temp = random(17, 25);
  int humi= random(35, 55);
  String payload="&field1=";
  long now=millis();
    if(now-lastMsg>15000)
      {
        payload+=temp;
        payload+="&field2=";
        payload+=humi;
        payload+="&status=MQTTPUBLISH";
        Serial.println("data Published");
        client.publish(mqtt_publish,(char*)payload.c_str());
        lastMsg=now;
       }
  }
