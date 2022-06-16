// For transferring data from ESP to OM2M, a post request has to be made to the OM2M server.

#include<HTTPClient.h>
#include <WiFi.h>
#include <time.h>

// Use your own credentials
#define MAIN_SSID "*******"
#define MAIN_PASS "*******"

// Use IP of your system, open Command prompt and write--> ipconfig <--Enter,Copy the IPv4 Address and use below
#define CSE_IP      "*****"
#define CSE_PORT    5089
// Defining the required OM2M server endpoints.
#define HTTPS     false
#define OM2M_ORGIN    "admin:admin"
#define OM2M_MN     "/~/in-cse/in-name/"
#define OM2M_AE     "AE-TEST"
#define OM2M_DATA_CONT  "Node-1/Data"

const char* ntpServer = "pool.ntp.org";
unsigned long epochTime; 
long randNumber;

HTTPClient http;  //  Declaring a HTTP Client Object

unsigned long getTime() 
  {
    time_t now;
    struct tm timeinfo;
        if (!getLocalTime(&timeinfo)) 
        {
          //Serial.println("Failed to obtain time");
          return(0);
        }
    time(&now);
    return now;
  }

/*  The Wi-Fi components are initialised in the void setup function to establish the W-Fi connectivity 
 *  along with the NTP server object for date/time service. 
*/

void setup() 
  {
    Serial.begin(115200);
    configTime(0, 0, ntpServer);
    WiFi.begin(MAIN_SSID,MAIN_PASS);
  
        while (WiFi.status() != WL_CONNECTED)
         {
            delay(500);
            Serial.print("#");
         }
  }

void loop() 
  {
        epochTime = getTime();
  
        // Any Sensor Block can be integrated here 
        static int i=0;
        float occupancy=random(0,2);
        float distance=random(0,400);
        
        String data="[" + String(epochTime) + ", " + String(occupancy) + " , " + String(distance)+"]";
        
        String server="http://" + String() + CSE_IP + ":" + String() + CSE_PORT + String()+OM2M_MN;
        
        Serial.println(data);
        /*
         * Tthe http client object is now used to build the post request to om2m server.Similar to the postman version of post request, 
         * the server URL end point is firstly build followed by the headers and finally the data body for sending the data to om2m.
        */
        http.begin(server + String() +OM2M_AE + "/" + OM2M_DATA_CONT + "/");
        
        http.addHeader("X-M2M-Origin", OM2M_ORGIN);
        http.addHeader("Content-Type", "application/json;ty=4");
        http.addHeader("Content-Length", "100");
        
        String label = "Node-1";
        
        String req_data = String() + "{\"m2m:cin\": {"+ "\"con\": \"" + data + "\","+ "\"rn\": \"" + "cin_"+String(i++) + "\","+ "\"lbl\": \"" + label + "\","+ "\"cnf\": \"text\""+ "}}";
        int code = http.POST(req_data);
        http.end();
        Serial.println(code);
        delay(5000);
  }
