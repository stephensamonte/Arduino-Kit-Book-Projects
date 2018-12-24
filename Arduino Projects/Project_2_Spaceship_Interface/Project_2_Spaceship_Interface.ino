int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); // This is an LED
  pinMode(4, OUTPUT); // This is an LED
  pinMode(5, OUTPUT); // This is an LED
  pinMode(2, INPUT); // This is the switch 
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if (switchState == HIGH) {
    // the button is not pressed

    digitalWrite(3, HIGH); // green LED
    digitalWrite(4, LOW); // red LED
    digitalWrite(5, LOW); // red LED
  } else {
    digitalWrite(3, LOW); // green LED
    digitalWrite(4, LOW); // red LED
    digitalWrite(5, HIGH); // red LED

    delay(100); // wait for a quarter second 
    // toggle the LEDs
    digitalWrite(4, HIGH); // green LED
    digitalWrite(5, LOW); // red LED
    delay(100); // wait for a quarter second 
  }
} // go back to the beginning of the loop
