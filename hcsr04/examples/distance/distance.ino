#include <hcsr04.h>

hcsr04 ultrasonic(2,3);

uint32_t t  = 0;
int      ts = 500;

void setup(){
    Serial.begin(9600);
}

void loop(){
    if(millis() - t > ts){
        if(ultrasonic.readDistance()){
            Serial.println(ultrasonic.distanceMessage());
        }
        else{
            Serial.println("Measure out of range.");
        }
        t = millis();
    }
}