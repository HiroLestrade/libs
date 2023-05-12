#include <Arduino.h>

const bool CLOCKWISE = true;
const bool COUNTER_CLOCKWISE = false;

class dcmotor{
    public:
        dcmotor(int motorPinA, int MotorPinB);
        void start(int pwm, bool turn);
        void stop();

    private:
        int     _motorPinA;
        int     _motorPinB;
        bool    _state;
        bool    _turn;
        int     _pwm;

    protected:
};