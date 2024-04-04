#include "mbed.h"
#include "Servo.h"

Servo myservo(D7);
AnalogIn Pot(A5);
int val; 

long map(long x, long in_min, long in_max, long out_min, long out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

int main() {
    while (1){
        val = map(Pot.read_u16(), 900, 65535, 0, 100);
        myservo = val/100.0; // 0(0 deg) - 100(180 deg) value 
        printf("%d\n", val);
        ThisThread::sleep_for(10ms);
    }
 }