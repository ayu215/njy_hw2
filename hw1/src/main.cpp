#include <Arduino.h>

int led[6] = {2,4,5,18,19,21};

void setup() {
  Serial.begin(115200);
for(int i = 0; i < 6; i++)
  pinMode(led[i],OUTPUT);
}
 
void loop() {
for(int i = 0; i < 6; i++ )
  {
    digitalWrite(led[i] , HIGH);
    Serial.print("Start:");
    Serial.println(led[i]);
    delay(500);
    digitalWrite(led[i] , LOW);
  }
  for(int i = 5;i >= 0;i--)
  {
    digitalWrite(led[i] , HIGH);
    Serial.print("End:");
    Serial.println(led[i]);
    delay(500);
    digitalWrite(led[i] , LOW);
    }
}
