#include <WiFi.h>
#include<HTTPClient.h>
#include <ArduinoJson.h>
 
const char* ssid     = "AIRTEL_AASHVI";
const char* password = "ramen123";

#define D1 18
#define D2 19
#define D3 21

void setup() {
  Serial.begin(115200);
  delay(100);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  digitalWrite(D1, 0);
  digitalWrite(D2, 0);
  digitalWrite(D3, 0);
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password); 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
 
  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
 
  digitalWrite(D1, 1);
  delay(500);
  digitalWrite(D1, 0);
  delay(500);
}
 
 void loop() {
  
       HTTPClient client;
       client.begin("https://your_domain.000webhostapp.com/API_GPIO_Control/fetch.php");
       int httpCode=client.GET();
        if (httpCode>0)
            { String result =client.getString();
            //Serial.println("\nStatuscode: " + String(httpCode));
            Serial.println(result);
      
            // Parse JSON
            int size = result.length() + 1;
            char json[size];
            result.toCharArray(json, size);
                 
            StaticJsonDocument<200> doc;
           
            DeserializationError error =  deserializeJson(doc,json);
            if (error)
                {
                  Serial.print("deserializeJson() failed");
                  Serial.println(error.c_str());
                  return;
                }
      
            String led1 = doc["GPIO_STATUS"][0]["status"];
            String led2 = doc["GPIO_STATUS"][1]["status"];
            String led3= doc["GPIO_STATUS"][2]["status"];
           
            //Serial.println(led1);
            //Serial.println(led2);
            //Serial.println(led2);
            //Serial.println(String(doc["GPIO_STATUS"]));
            //Serial.println(String(doc["GPIO_STATUS"][0]));

           
          if(led1 == "on"){
            digitalWrite(D1, 1);
            delay(100);
            Serial.println("LED1 is On..!");}
          else {
            digitalWrite(D1, 0);
            delay(100);
            Serial.println("LED1 is Off..!");}
  
          if(led2 == "on"){
            digitalWrite(D2, 1);
            delay(100);
            Serial.println("LED2 is On..!");}
          else {
            digitalWrite(D2, 0);
            delay(100);
            Serial.println("LED2 is Off..!");}
  
           if(led3 == "on"){
            digitalWrite(D3, 1);
            delay(100);
            Serial.println("LED3 is On..!");}
          else {
            digitalWrite(D3, 0);
            delay(100);
            Serial.println("LED3 is Off..!");}
              
           }  
            
        else { Serial.println( "Error on HTTP request");}
                 
        delay(1000);
   
 }
