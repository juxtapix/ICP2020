// ICP Workshop 2020
// Digital Output - RGB

// constant for RGB LED pins
const int rPin = 2;
const int gPin = 3;
const int bPin = 5;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(rPin, OUTPUT);          // initialize pwm pin as an output.
  pinMode(gPin, OUTPUT);          // initialize pwm pin as an output.
  pinMode(bPin, OUTPUT);          // initialize pwm pin as an output.
}

void loop() {
// put your main code here, to run repeatedly:
  rgb(255,0,0);     // Red
  delay(1000);
  rgb(0,255,0);     // Green
  delay(1000);
  rgb(0,0,255);     // Blue
  delay(1000);
}

void rgb(int r, int g, int b){
  analogWrite(rPin, r);
  analogWrite(gPin, g);
  analogWrite(bPin, b);
}
