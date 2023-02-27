void setup() {
  pinMode(5, OUTPUT);    // sets the digital pin 5 as output (LED)
  pinMode(6, OUTPUT);    // sets the digital pin 6 as output (LED)
  pinMode(7, OUTPUT);    // sets the digital pin 7 as output (LED)
  pinMode(0, INPUT);     // sets the digital pin 0 as input (button)
}

void loop() {   //continuously check if the button is pressed

  if(digitalRead(0) == 1) { // if the button is pressed

    digitalWrite(7, HIGH); // sets the digital pin 7 on
    delay(200);            // waits for 200 ms
    digitalWrite(7, LOW);  // sets the digital pin 7 off
    delay(200);            // waits for 200 ms

    digitalWrite(6, HIGH); // sets the digital pin 6 on
    delay(200);            // waits for 200 ms
    digitalWrite(6, LOW);  // sets the digital pin 6 off
    delay(200);            // waits for 200 ms

    digitalWrite(5, HIGH); // sets the digital pin 5 on
    delay(200);            // waits for 200 ms
    digitalWrite(5, LOW);  // sets the digital pin 5 off
    delay(200);            // waits for 200 ms

  }

}