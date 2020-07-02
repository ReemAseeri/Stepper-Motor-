
#include <Stepper.h>
const int stepsMotor=100;
Stepper MyStepper(stepsMotor, 2, 3, 6, 7);
int stepCount=0;
void setup() {
 
}

void loop() {
 int sensorReading = analogRead(A0);
int motorSpeed = map(sensorReading, 0, 1023, 0, 100);
if (motorSpeed > 0){
  MyStepper.setSpeed(motorSpeed);
  MyStepper.step( stepsMotor / 100);
  
  }
}
