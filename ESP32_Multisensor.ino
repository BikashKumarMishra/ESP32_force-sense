//This code is written to receive the readings of two Force sensors with the help if ESP32
#include <dummy.h>

int readD1;
int readD2;
int Pin_D1 = 34;
int Pin_D2 = 36;
 
void setup() {
    Serial.begin(9600);
    pinMode(Pin_D1, OUTPUT);
    pinMode(Pin_D2, OUTPUT);
  
} 
void loop() {
    readD1 = analogRead(Pin_D1); // Read Analog value of first sensor
    delay(40);
    readD2 = analogRead(Pin_D2); // Read Analog value of second sensor
    delay(40);
    Serial.print("sensor 1 = ");
    Serial.print(readD1);
    Serial.print(" / sensor 2 = ");
    Serial.println(readD2);
}
