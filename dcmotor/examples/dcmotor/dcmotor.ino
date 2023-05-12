#include <dcmotor.h>

dcmotor motor(5, 6);

void setup(){

}

void loop(){
    for(int i = 0; i < 255; i++){
        motor.start(i, CLOCKWISE);
        delay(5);
    }

    motor.stop();
    delay(1000);

    for(int i = 255; i > 0; i--){
        motor.start(i, CLOCKWISE);
        delay(5);
    }

    motor.stop();
    delay(1000);

    for(int i = 0; i < 255; i++){
        motor.start(i, COUNTER_CLOCKWISE);
        delay(5);
    }

    motor.stop();
    delay(1000);

    for(int i = 255; i > 0; i--){
        motor.start(i, COUNTER_CLOCKWISE);
        delay(5);
    }

    motor.stop();
    delay(1000);
}