void setup() {
  pinMode(7, OUTPUT);    // sets the digital pin 7 as output (LED)
  pinMode(0, INPUT);      // sets the digital pin 0 as input (button)
  pinMode(1, INPUT);
}

void loop() {   // continuously check if the button is pressed

  if(digitalRead(0) == 1) {   // if the button is pressed

    digitalWrite(7, HIGH); // sets the digital pin 7 on
    delay(200);            // waits for 200 ms
    digitalWrite(7, LOW);  // sets the digital pin 7 off
    delay(200);            // waits for 200 ms

 // This file has been edited by Rick Brophy
 // This file has been edited by Chase Gastan   
}
