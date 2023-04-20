#include "mbed.h"
#include "Servo.h"

Servo myservo(D7);
 
int main() {
    myservo = 0.0/100.0; // 0(0 deg) - 100(180 deg) value 
    //ThisThread::sleep_for(10ms);
 }