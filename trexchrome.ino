#include <Servo.h>
Servo myservo;

  
  

void setup ()
{
  myservo.attach(10);

Serial.begin(9600);
}
void loop()
{
int sensorvalue=analogRead(A0);
if(sensorvalue>700){
	myservo.write(41 );}
else if(sensorvalue<670){
	myservo.write(53 );
	delay(200  );

}


Serial.println(sensorvalue);
delay(1);                               
}
