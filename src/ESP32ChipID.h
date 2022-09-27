#ifndef ESP32ChipID_h
#define ESP32ChipID_h

#include "Arduino.h"

class ESP32ChipID
{
  public:
    void begin();
    String getChipId();
    String getChipId12();
    String getChipId8();
    String getChipId3();
    String getChipId2();
  private:
    String _id;
};

#endif