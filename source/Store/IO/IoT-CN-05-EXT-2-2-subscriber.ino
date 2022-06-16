#include <WiFi.h>
#include <PubSubClient.h>
#include<WiFiClient.h>
// Your Wifi credentials
const char* ssid  = "AIRTEL_AASHVI";
const char* password = "ramen123";

const char *mqttServer ="mqtt3.thingspeak.com";//remain same always
const int mqttPort=1883;//remain same always
char *mqtt_subscribe="channels/1639849/subscribe"; //channels/your_channel_ID/subscribe

// Use the credential of  Subscriber Device obtained from Thingspeak
char *clientId = "BBgUCC8DJB0dNSElMi88Og4";
char *mqttUserName = "BBgUCC8DJB0dNSElMi88Og4";
char *mqttPass = "yYOed1/k0PoI8hcQrJx+i+Nn";
// variables for storing position of field string
int a;
int b;
int c;
int d;

WiFiClient espClient;
PubSubClient client(espClient);

void callback(char* topic, byte* payload, unsigned int length) 
{
    Serial.print("Message arrived in topic: ");
    Serial.print("[");
    Serial.print(topic);
    Serial.print("]");
    Serial.print(". Message: ");

    String message = "";
    for (int i=0;i<length;i++)
    {
    message += (char)payload[i];
    }
    
    Serial.println(message);
    
    int length1=message.length();
   
    for (int i=0;i<length1;i++) {
    if (message.substring(i,i+6) == "field1"){a=i+5;}
    if (message.substring(i,i+6) == "field2"){b=i;c=i+5;}
    if (message.substring(i,i+6) == "field3"){d=i;}
    }
   
    Serial.print("Temp:");
    Serial.println(message.substring(a+4,b-3));
    Serial.print("Humi:");
    Serial.println(message.substring(c+4,d-3));
    Serial.println(".......................");
}

void reconnect() {
  
  while (!client.connected())
    {
        Serial.print("Connecting to  MQTT ...");
      
        if (client.connect(clientId,mqttUserName,mqttPass))
        {
          Serial.println("connected Successfully");
          int x=client.subscribe(mqtt_subscribe);
          Serial.println("Subscription Response : ");
          Serial.println(x);
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
  client.setCallback(callback);
  client.setBufferSize(2048);
  reconnect();
}

void loop()
{
  client.loop();
  reconnect();
  delay(1000);
  }
