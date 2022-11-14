#include <Adafruit_NeoPixel.h>
#define PIN 2
#define NUMPIXELS 64
#define DELAYVAL 100
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
 Serial.begin(9600);
  delay(100);
  pixels.begin();
}

void loop() {
//leds 1 et 4 en bleu
//leds 2 et 5 en rouge
//leds 3 et 6 en vert
pixels.clear();
int redPins[] = {1, 4, 7, 10};
int greenPins[] = {2, 5, 8, 11};
int bluePins[] = {3, 6, 9, 12};
int purplePins[] = {13, 14, 15, 16};
int yellowPins[] = {17, 18, 19, 20};
for(int i=0; i<sizeof(redPins)/2;i++){ // doesn't work without /2
  pixels.setPixelColor(redPins[i], pixels.Color(255, 0, 0)); //RED
  pixels.setPixelColor(greenPins[i], pixels.Color(0, 255, 0)); //GREEN
  pixels.setPixelColor(bluePins[i], pixels.Color(0, 0, 255)); //BLUE
  pixels.setPixelColor(purplePins[i], pixels.Color(139, 0, 139)); //PURPLE
  pixels.setPixelColor(yellowPins[i], pixels.Color(255, 255, 0)); //YELLOW
  
  pixels.show();
  if(i==sizeof(redPins)-1){
    break;
  }
   if(i==sizeof(greenPins)-1){
    break;
  }
   if(i==sizeof(bluePins)-1){
    break;
  }
   if(i==sizeof(purplePins)-1){
    break;
  }
   if(i==sizeof(yellowPins)-1){
    break;
  }
}

}
