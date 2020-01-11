// Adafruit Neopixel - Simple
#include <Adafruit_NeoPixel.h>

#define PIN       2     // Set pin 2 as the neopixel data pin
#define NUMPIXELS 8     // Number of Pixels

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {

  pixels.begin();       // INITIALIZE NeoPixel object

}

void loop() {
  pixels.clear(); // Set all pixel colors to 'off'

  for (int i = 0; i < NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(100, 0, 0));

    pixels.show();   // Send the updated pixel colors to the hardware.
    delay(500);      // Pause before next pass through loop
  }
}
