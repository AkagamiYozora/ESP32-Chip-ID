#include "ESP32ChipID.h"

ESP32ChipID esp;

void setup() {
  esp.begin();  //Optional, starting serial comm with 115200 default baudrate
}

void loop() {
  Serial.print("Chip ID: "); Serial.println(esp.getChipId());
  Serial.print("Chip ID 64 bit: "); Serial.println(esp.getChipId12());
  Serial.print("Chip ID 32 bit: "); Serial.println(esp.getChipId8());
  Serial.print("Chip ID 16 bit: "); Serial.println(esp.getChipId3());
  Serial.print("Chip ID 8 bit: "); Serial.println(esp.getChipId2());
  
  delay(3000);
}
