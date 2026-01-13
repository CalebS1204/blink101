/*Blink led sketch by Caleb S 1-12-2026 */

void setup() {
  pinMode(13, OUTPUT);//set digital pin 13 to output

  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(13, HIGH); //LED on
  delay(250);
  digitalWrite(13, LOW); // LED off
  delay(250);
  // put your main code here, to run repeatedly:

}
