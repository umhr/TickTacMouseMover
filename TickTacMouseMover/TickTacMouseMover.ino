#include "Mouse.h"

int count = -1;
int m = 1;

void setup() {
  Serial.begin(9600);
  Serial.println("setup");  
}

void loop() {
  Serial.print("count=");
  Serial.print(count);
  Serial.print(", move=");
  Serial.println(m);
  if(count == -1){
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
    count = 0;
  }else if(count == 270){
    count = 0;
    Mouse.move(m, 0);
    m = -m;
  }else{
    count++;
  }
  delay(1000);
}
