#include "ESP32ChipID.h"

void ESP32ChipID::begin()
{
	Serial.begin(115200);
}

String ESP32ChipID::getChipId()
{
  String id = String((uint32_t)ESP.getEfuseMac(), HEX);
  _id=id;
  return id;
}

String ESP32ChipID::getChipId12()
{
  String id = String((uint64_t)ESP.getEfuseMac(), HEX);
  _id=id;
  return id;
}

String ESP32ChipID::getChipId8()
{
  String id = String((uint32_t)ESP.getEfuseMac(), HEX);
  _id=id;
  return id;
}

String ESP32ChipID::getChipId3()
{
  String id = String((uint16_t)ESP.getEfuseMac(), HEX);
  _id=id;
  return id;
}

String ESP32ChipID::getChipId2()
{
  String id = String((uint8_t)ESP.getEfuseMac(), HEX);
  _id=id;
  return id;
}