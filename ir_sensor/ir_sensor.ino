#include <SharpIR.h>

#define IR A1

#define model 430


SharpIR SharpIR(IR, model);
void setup() {
 Serial.begin(9600);
 Serial.println("Sharp IR  ");
}

void loop() {
  
    delay(500);   

  unsigned long startTime=millis();  // takes the time before the loop on the library begins

  int dis=SharpIR.distance();  // this returns the distance to the object you're measuring


  Serial.print("Mean distance: ");  // returns it to the serial monitor
  Serial.println(dis);
  unsigned long endTime=millis()-startTime;  // the following gives you the time taken to get the measurement
  //Serial.print("Time taken (ms): ");
  //Serial.println(endTime);
 
}
