#include <Arduino.h>

int ptime = 0;
const char* correctPasswords[] = {"AA", "BB", "CC", "AA"};

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');

    
    if (input == correctPasswords[ptime]) {
      ptime++;
      if (ptime == 4) {
        Serial.println("right");
        ptime = 0; 
      }
    } else {
      Serial.println("wrongAA");
      ptime = 0; 
    }
  }
}