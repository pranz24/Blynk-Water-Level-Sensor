#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Authorization token from the Blynk App.
char auth[] = "c039ef4a7aaa4eaa814d93e273c49f06";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "G5_3513";
char pass[] = "9650333228";
char server[] = "192.168.48.30";


const int sensorPin= A0; //sensor pin connected to analog pin A0
float liquid_level;
int liquid_percentage;
int top_level = 500;//Maximum water level
int bottom_level = 0;//Minimum water level


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, server);
  pinMode(sensorPin, INPUT);
  Blynk.virtualWrite(V0, liquid_level);
  Blynk.virtualWrite(V1, liquid_percentage);//This wil show the percentage of water in the container in a virtual pin V1
  Blynk.run();
}


void loop() {
  liquid_level = analogRead(sensorPin);
  liquid_percentage = ((liquid_level-bottom_level)/top_level)*100;//Percentage of water in the container 
  Serial.println(liquid_level);//This will print the liquid level in the monitor 
  Serial.println(liquid_percentage);//This will print the percentage of liquid in the monitor
  Blynk.virtualWrite(V0, liquid_level);
  Blynk.virtualWrite(V1, liquid_percentage);
  delay(100);
  Blynk.run();
}

