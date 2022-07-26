#include <WiFi.h>
#include <HTTPClient.h>
//#include <Wire.h> //for I2C communication
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

// Replace with your network credentials
const char* ssid     = "Airtel_8017191859";
const char* password = "air79574";

// REPLACE with your Domain name and URL path or IP address with path
const char* serverName = "http://talentiotapp.000webhostapp.com/API/post-esp-data.php";

// Keep this API Key value to be compatible with the PHP code provided in the project page. 
// If you change the apiKeyValue value, the PHP file /post-esp-data.php also needs to have the same key 
String apiKeyValue = "tPmAT5Ab3j7F9";

String sensorName = "BME280";
String sensorLocation = "Home";

#define BME_SCK 18
#define BME_MISO 19
#define BME_MOSI 23
#define BME_CSB 5

#define SEALEVELPRESSURE_HPA (1013.25)

//Adafruit_BME280 bme;  // I2C
//Adafruit_BME280 bme(BME_CS);  // hardware SPI
Adafruit_BME280 bme(BME_CSB, BME_MOSI, BME_MISO, BME_SCK);  // software SPI

void setup() {
  Serial.begin(115200);
  
  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) { 
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  // (you can also pass in a Wire library object like &Wire2)
  bool status = bme.begin();
  if (!status) {
    Serial.println("Could not find a valid BME280 sensor, check wiring or change I2C address!");
    while (1);
  }
}

void loop() {
  //Check WiFi connection status
  if(WiFi.status()== WL_CONNECTED){
    WiFiClient client;
    HTTPClient http;
    
    // Your Domain name with URL path or IP address with path
    http.begin(client, serverName);
    
    // Specify content-type header
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    
    // Prepare your HTTP POST request data
    String httpRequestData = "api_key=" + apiKeyValue + "&sensor=" + sensorName
                          + "&location=" + sensorLocation + "&Temp=" + String(bme.readTemperature())
                          + "&Hum=" + String(bme.readHumidity()) + "&Pres=" + String(bme.readPressure()/100.0F) + "";
    Serial.print("httpRequestData: ");
    Serial.println(httpRequestData);
    
    // Send HTTP POST request
    int httpResponseCode = http.POST(httpRequestData); 
    if (httpResponseCode>0) {
      Serial.print("HTTP Response code: ");
      Serial.println(httpResponseCode);
    }
    else {
      Serial.print("Error code: ");
      Serial.println(httpResponseCode);
    }
    // Free resources
    http.end();
  }
  else {
    Serial.println("WiFi Disconnected");
  }
  //Send an HTTP POST request every 30 seconds
  delay(10000);  
}
