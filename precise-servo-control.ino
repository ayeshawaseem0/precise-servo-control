#include <Servo.h>
Servo myservo; // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 0; // variable to store the servo position
const int circuitPin = A2;
int circuitValue;
void setup() {
myservo.attach(9); // attaches the servo on pin 9 to the servo object
Serial.begin(9600);
myservo.write(0);
delay(1000);
pinMode(circuitPin, INPUT); // indicates that you want to read from this pin
}
void loop() {
circuitValue = analogRead(circuitPin);
//myservo.detach();
// printing voltage from circuit
Serial.print("voltage: ");
Serial.print(circuitValue);
Serial.println();
if (circuitValue >= 440){
//myservo.attach(9);
for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
// in steps of 1 degree
myservo.write(pos); // tell servo to go to position in
variable 'pos'
delay(15); // waits 15 ms for the servo to reach
the position
}
// servo.write(180);
// delay(2000);
// servo.write(0);
// delay(2000)