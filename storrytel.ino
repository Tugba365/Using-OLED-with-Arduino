
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <OakOLED.h>

OakOLED oled;


void setup() {
  Serial.begin(115200);
  oled.begin();
  oled.setTextSize(2);
  oled.setTextColor(1);
  oled.setCursor(0, 0);
  oled.println("Hello");
  oled.display();
  delay(3000);

  
}

void loop() {
  oled.setTextSize(1);
  oled.setTextColor(1);
  oled.setCursor(0, 0);

  oled.println("IT IS ALIVE!");
  oled.display();
  delay(3000);
oled.clearDisplay();

  oled.setTextSize(1);
  oled.setTextColor(1);
  oled.setCursor(20, 30);
  oled.println("IT IS IMPOSSIBLE");
  oled.display();
  delay(1000);
oled.clearDisplay();

   oled.setTextSize(1);
  oled.setTextColor(1);
  oled.setCursor(10, 10);
  oled.println("Say Hello");
  oled.display();
  delay(1000);
  
  oled.setTextSize(1);
  oled.setTextColor(1);
  oled.setCursor(10,20);
  oled.println("to my new friend");
  oled.display();
  delay(3000);
  oled.clearDisplay();
  
  oled.setTextSize(2);
  oled.setTextColor(1);
  oled.setCursor(20,30);
  oled.println("and now");
  oled.display();
  delay(3000);

  oled.clearDisplay();
  
  oled.setTextSize(3);
  oled.setTextColor(1);
  oled.setCursor(40, 20);
  oled.println("RUN");
  oled.display();
delay(2000);
oled.clearDisplay();
}
