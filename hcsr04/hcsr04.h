#include <Arduino.h>

const long  DEFAULT_TIMEOUT      = 5000;
const long  PULSE_MICROSECONDS   = 1000;
const float TIME_DISTANCE_RATE  = 58.2;

class hcsr04{
    public:
        //constructor
        hcsr04(int trigPin, int echoPin);
        
        //Just update the distance
        bool    readDistance();
        
        //Setters
        void    setTimeout(long timeout);

        //Getters
        float   getDistance();
        String  distanceMessage();
    
    private:
        int     _trigPin;
        int     _echoPin;
        long    _timeout;
        float    _duration;
        float   _distance;
    
    protected:
};