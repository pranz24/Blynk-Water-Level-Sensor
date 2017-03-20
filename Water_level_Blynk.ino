#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Auth Token from the Blynk App.
char auth[] = "a0f7f2d3c0ad4b5aa4b6c274906e04c1";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Stoned Panda";
char pass[] = "codelanguage";


const int sensorPin= A0; //sensor pin connected to analog pin A0
float liquid_level;
int liquid_percentage;
int top_level = 512;
int bottom_level = 3;

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); 
  Serial.print("V2 Slider value is: ");
  Serial.println(pinValue);
}

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(sensorPin, INPUT);
  Blynk.run();
  
}

void loop() {
  liquid_level = analogRead(sensorPin);
  liquid_percentage = ((liquid_level-bottom_level)/top_level)*100;
  Serial.println(liquid_level);
  delay(100);
  
  Blynk.run();
}


