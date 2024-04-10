#include "mbed.h"
#include "Servo.h"

Servo myservo(D7);

int angle_deg=90;

long map(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int main() {
    int val=0;
    while (1){
        val = map(angle_deg, 0, 180, 0, 100);

        myservo = val/100.0; // 0(0 deg) - 1.0(180 deg) value 

        ThisThread::sleep_for(10ms);
    }
 }