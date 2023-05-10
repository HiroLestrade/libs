#include "hcsr04.h"

hcsr04::hcsr04(int trigPin, int echoPin){
    _trigPin  = trigPin;
    _echoPin  = echoPin;
    _timeout  = DEFAULT_TIMEOUT;
    _duration = 0;
    _distance = 0;

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    digitalWrite(_trigPin, LOW);
}

bool hcsr04::readDistance(){
    digitalWrite(_trigPin, HIGH);
    delayMicroseconds(PULSE_MICROSECONDS);
    digitalWrite(_trigPin, LOW);

    _duration = pulseIn(_echoPin, HIGH, _timeout);

    if(_duration >= _timeout) return false;

    _distance = duration / TIME_DISTANCE_RATE;
    return true;
}

void hcsr04::setTimeout(long timeout){
    _timeout = timeout;
}

float hcsr04::getDistance(){
    return _distance;
}

String hcsr04::distanceMessage(){
    return "Distance: " + (String) _distance + " [cm]";
}

