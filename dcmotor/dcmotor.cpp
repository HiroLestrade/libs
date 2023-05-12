#include "dcmotor.h"

dcmotor::dcmotor(int motorPinA, int motorPinB){
    _motorPinA = motorPinA;
    _motorPinB = motorPinB;
    _state = false;
    _turn = CLOCKWISE;
    _pwm = 0;

    pinMode(_motorPinA, OUTPUT);
    pinMode(_motorPinB, OUTPUT);
    digitalWrite(_motorPinA, LOW);
    digitalWrite(_motorPinB, LOW);
}

void start(int pwm, int turn){
    _state = true;
    _pwm = pwm;
    _turn = turn;

    if(_turn == CLOCKWISE){
        digitalWrite(_motorPinA, _pwm);
        digitalWrite(_motorPinB, 0);
    }
    else{
        digitalWrite(_motorPinA, 0);
        digitalWrite(_motorPinB, _pwm);        
    }
}

void stop(){
    _state = false;
    digitalWrite(_motorPinA, 0);
    digitalWrite(_motorPinB, 0);
}