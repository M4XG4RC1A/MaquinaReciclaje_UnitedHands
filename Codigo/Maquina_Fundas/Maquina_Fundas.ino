#include <Servo.h>

Servo Funda;
int Punt = 0; //Botellas Insertadas
int CFunda = 10; //Cantidad para una funda

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  Funda.attach(3);
  Funda.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)){
    Punt++;
    delay(1000);
  }
  if(Punt == CFunda){
    Funda.write(50);
    delay(900);
    Funda.write(0);
    Punt = 0;
  }
}
