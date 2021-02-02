#include "Mouse.h"

int count = 0;
int m = 1;

void setup() {
  Serial.begin(9600);
  Serial.println("setup");  
  Mouse.move(10, 0);
  delay(200);
  Mouse.move(-10, 0);
  delay(200);
  Mouse.move(-10, 0);
  delay(200);
  Mouse.move(10, 0);
  delay(200);
  Mouse.move(10, 0);
  delay(200);
  Mouse.move(-10, 0);
  delay(200);
  Mouse.move(-10, 0);
  delay(200);
  Mouse.move(10, 0);
}

void loop() {
  Serial.print("count=");
  Serial.print(count);
  Serial.print(", move=");
  Serial.println(m);
  if(count == 270){
    count = 0;
    Mouse.move(m, 0);
    m = -m;
  }else{
    count++;
  }
  delay(1000);
}
