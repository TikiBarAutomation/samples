#include <Adafruit_NeoPixel.h>

// How many internal neopixels do we have? some boards have more than one!
#define NUMPIXELS        1

Adafruit_NeoPixel out18(NUMPIXELS, 18, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out17(NUMPIXELS, 17, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out9(NUMPIXELS, 9, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out8(NUMPIXELS, 8, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out7(NUMPIXELS, 7, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out6(NUMPIXELS, 6, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out5(NUMPIXELS, 5, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out35(20, 35, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out37(NUMPIXELS, 37, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out36(NUMPIXELS, 36, NEO_GRBW + NEO_KHZ800);
Adafruit_NeoPixel out16(NUMPIXELS, 16, NEO_GRBW + NEO_KHZ800);

    const uint32_t Pink = Adafruit_NeoPixel::Color(255, 128, 0, 0); //330

    const uint32_t Green = Adafruit_NeoPixel::Color(0, 255, 0, 0); //120,100,100
    const uint32_t Magenta = Adafruit_NeoPixel::Color(255, 0, 255, 0); //300,100,100
    const uint32_t Violet = Adafruit_NeoPixel::Color(128, 0, 255, 0); //270,100,100
    const uint32_t BrightWhite = Adafruit_NeoPixel::Color(255, 255, 255, 0); // 0,0,100
    const uint32_t Chartreuse = Adafruit_NeoPixel::Color(128, 255, 0, 0); //90
    const uint32_t LightBlue = Adafruit_NeoPixel::Color(0, 128, 255, 0); //210
    const uint32_t Cyan = Adafruit_NeoPixel::Color(0, 255, 255, 0);//180
    const uint32_t SpringGreen = Adafruit_NeoPixel::Color(0, 255, 32, 0);//128
    const uint32_t DarkPink = Adafruit_NeoPixel::Color(255, 0, 64, 0);

    const uint32_t LateNight = Adafruit_NeoPixel::Color(0, 0, 16, 0);//120,100,6.3
    const uint32_t Blue = Adafruit_NeoPixel::Color(0, 0, 255, 0); //240
    const uint32_t PreDawnViolet = Adafruit_NeoPixel::Color(64, 0, 128, 0); //270,100,50.2
    const uint32_t Red = Adafruit_NeoPixel::Color(255, 0, 0, 0); //0,100,100
    const uint32_t RedOrange = Adafruit_NeoPixel::Color(255, 16, 0, 0); //4
    const uint32_t Orange = Adafruit_NeoPixel::Color(255, 32, 0, 0); //8
    const uint32_t LightOrange = Adafruit_NeoPixel::Color(255, 64, 0, 0); //15
    const uint32_t Yellow = Adafruit_NeoPixel::Color(255, 128, 0, 0); //30
    const uint32_t Daylight = Adafruit_NeoPixel::Color(255, 128, 0, 255);
    const uint32_t WarmWhite = Adafruit_NeoPixel::Color(0, 0, 0, 255);
    const uint32_t OFF = Adafruit_NeoPixel::Color(0, 0, 0, 0);
    
// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(115200);

#if defined(NEOPIXEL_POWER)
  // If this board has a power control pin, we must set it to output and high
  // in order to enable the NeoPixels. We put this in an #if defined so it can
  // be reused for other boards without compilation errors
  pinMode(NEOPIXEL_POWER, OUTPUT);
  digitalWrite(NEOPIXEL_POWER, HIGH);
#endif

  out18.begin(); 
  out18.setBrightness(20); 
  out17.begin(); 
  out17.setBrightness(20); 
  out9.begin(); 
  out9.setBrightness(20); 
  out8.begin(); 
  out8.setBrightness(20); 
  out7.begin(); 
  out7.setBrightness(20); 
  out6.begin(); 
  out6.setBrightness(20);
  out5.begin(); 
  out5.setBrightness(20);   
  out35.begin(); 
  out35.setBrightness(20); 
  out37.begin(); 
  out37.setBrightness(20); 
  out36.begin(); 
  out36.setBrightness(20); 
  out16.begin(); 
  out16.setBrightness(20); 
 
}

// the loop routine runs over and over again forever:
void loop() {
  // say hi
  Serial.println("Hello!");
  
  // set color to red
  out18.fill(Green);
  out18.show();
  out17.fill(LateNight);
  out17.show();
  out9.fill(Blue);
  out9.show();
  out8.fill(PreDawnViolet);
  out8.show();
  out7.fill(Red); 
  out7.show();
  out6.fill(RedOrange);
  out6.show();
  out5.fill(Orange);
  out5.show();
  out35.fill(LightOrange);
  out35.show();
  out37.fill(Yellow);
  out37.show();
  out36.fill(Daylight);
  out36.show();
  out16.fill(WarmWhite);
  out16.show();
  delay(500); // wait half a second

  // turn off
  out18.fill(OFF);
  out18.show();
  out17.fill(OFF);
  out17.show();
  out9.fill(OFF);
  out9.show();
  out8.fill(OFF);
  out8.show();
  out7.fill(OFF); 
  out7.show();
  out6.fill(OFF);
  out6.show();
  out5.fill(OFF);
  out5.show();
  out35.fill(OFF);
  out35.show();
  out37.fill(OFF);
  out37.show();
  out36.fill(OFF);
  out36.show();
  out16.fill(OFF);
  out16.show();
  delay(500); // wait half a second
}
