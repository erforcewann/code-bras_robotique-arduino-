
#include <Servo.h>

Servo servo0;  
Servo servo1;
Servo servo2;
Servo servo3; 

int pot0 = A0;
int pot1 = A1;
int pot2 = A2;
int pot3 = A3;
  
int valeur0;    
int valeur1;
int valeur2;
int valeur3;

int Map0;
int Map1;
int Map2;
int Map3;



void setup() {
  
  servo0.attach(9); 
  servo1.attach(8);
  servo2.attach(7);
  servo3.attach(6);
  
}

void loop() {
  
  valeur0 = analogRead(pot0);            
  Map0 = map(valeur0, 0, 1023, 0, 180);     
  servo0.write(Map0);                  
  delay(1); 

  valeur1 = analogRead(pot1);            
  Map1 = map(valeur1, 0, 1023, 50, 180);     
  servo1.write(Map1);                  
  delay(1); 

  valeur2 = analogRead(pot2);            
  Map2 = map(valeur2, 0, 1023, 50, 120);     
  servo2.write(Map2);                  
  delay(1);

  valeur3 = analogRead(pot3);            
  Map3 = map(valeur3, 0, 1023, 0, 180);     
  servo3.write(Map3);                  
  delay(1);
                            
}
