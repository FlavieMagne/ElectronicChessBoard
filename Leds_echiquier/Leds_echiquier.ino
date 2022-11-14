#include <FastLED.h>

#define LED_PIN     8
#define COLOR_ORDER GRB
#define CHIPSET     WS2811
#define NUM_LEDS    82

#define BRIGHTNESS  200
#define FRAMES_PER_SECOND 60
//CRGBPalette16 gPal;

CRGB leds[NUM_LEDS];
int blueLeds[]={0, 8, 9, 26, 27, 44, 45, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81};
int whiteLeds[]={1, 3, 5, 7, 11, 13, 15, 17, 19, 21, 23, 25, 29, 31, 33, 35, 37, 39, 41, 43, 47, 49, 51, 53, 55, 57, 59, 61,62,63, 64,65, 66, 67,68, 69, 70}; 

void setup() {
  delay(3000); // sanity delay
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setBrightness( BRIGHTNESS );
 }

void loop()
{
  static byte heat[NUM_LEDS];
  FastLED.show(); // display this frame
  FastLED.delay(1000 / FRAMES_PER_SECOND);

for( int i = 1; i < 8; i+=2) {
    leds[i]=CRGB(255,255,255);
    FastLED.show();
    }
    
for (int j = 11; j < 26 ; j+=2){
  leds[j] = CRGB(255,255,255);
  FastLED.show();
}

for (int k = 29 ; k < 44; k+=2){
  leds[k] = CRGB(255,255,255);
  FastLED.show();
}

for (int m = 47 ; m < 62; m+=2){
  leds[m] = CRGB(255,255,255);
  FastLED.show();
}

for (int n = 65 ; n < 73; n+=2){
  leds[n] = CRGB(255,255,255);
  FastLED.show();

for (int p = 73 ; p < 81; p++){
  leds[p] = CRGB(255,0,0);
  FastLED.show();
}
  leds[8] = CRGB(255,0,0);
  leds[9] = CRGB(255,0,0);
  leds[26] = CRGB(255,0,0);
  leds[27] = CRGB(255,0,0);
  leds[44] = CRGB(255,0,0);
  leds[45] = CRGB(255,0,0);
  leds[62] = CRGB(255,0,0);
  leds[63] = CRGB(255,0,0);
  FastLED.show();
}
}
