#include <Arduino.h>

const long DEFAULT_TIMEOUT      = 500;
const long PULSE_MICROSECONDS   = 10;
const int  TIME_DISTANCE_RATE   = 58;

class hcsr04{
    public:
        //constructor
        hcsr04(int trigPin, int echoPin);
        
        //Just update the distance
        bool    readDistance();
        
        //Setters
        void    setTimeout(const log timeout);

        //Getters
        float   getDistance();
        String  distanceMessage();
    
    private:
        int     _trigPin;
        int     _echoPin;
        long    _timeout;
        long    _duration;
        float   _distance;
    
    protected:
};