// ICP Workshop 2020
// Digital Output - ForLoop

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);       // initialize serial (console) at 9600 bps.
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 100; i++) {
    Serial.println( i );            // print to console
    delay(100);                    // delay in between readability
  }
}
