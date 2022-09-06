#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int val = 0;

void setup(){
  Serial.begin(115200);
  pinMode(14, HIGH);
  delay(500);
  pinMode(13, LOW);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(500);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
}

void loop(){  
  int s1 = analogRead(A0);
  
  if(s1 < 400){
    Serial.println("LOW");
    digitalWrite(14, HIGH);
    delay(5000);
    digitalWrite(14, LOW);

    display.clearDisplay();
    display.setCursor(0, 0);
    display.setTextSize(1);
    display.println("WATER LEVEL");
    display.println();
    display.setTextSize(2); 
    display.println("LOW");
    display.display();
    display.startscrollright(0x00, 0x00); 
    delay(5000);
  } 
  if(s1 > 400){
    Serial.println("HIGH");
    digitalWrite(14, HIGH);
    delay(5000);
    digitalWrite(14, LOW);
    
    display.clearDisplay();
    display.setCursor(0, 0);
    display.setTextSize(1);
    display.println("WATER LEVEL");
    display.println();
    display.setTextSize(2); 
    display.println("HIGH");
    display.display();
    display.startscrollright(0x00, 0x00); 
    delay(5000);
  }
}
