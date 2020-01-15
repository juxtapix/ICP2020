// ICP Workshop 2020
// Digital Output - Fade

// Constant:
const int rPin = 5;
const int gPin = 3;
const int bPin = 2;
const int fadeAmount = 5;

void setup() {
  pinMode(rPin, OUTPUT);          // initialize pwm pin as an output.
  pinMode(gPin, OUTPUT);          // initialize pwm pin as an output.
  pinMode(bPin, OUTPUT);          // initialize pwm pin as an output.
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += fadeAmount) {
    // sets the value (range from 0 to 255):
    rgb(0,0,fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(100);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= fadeAmount) {
    // sets the value (range from 0 to 255):
    rgb(0,0,fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(100);
  }
}

void rgb(int r, int g, int b){
  analogWrite(rPin, r);
  analogWrite(gPin, g);
  analogWrite(bPin, b);
}
