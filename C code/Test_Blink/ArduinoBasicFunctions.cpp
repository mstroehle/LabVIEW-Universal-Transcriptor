/*
  Basic Arduino function by LuboJ.
*/
#include "ArduinoBasicFunctions.h"
#include <Arduino.h>

void Toggle_LED(){
  digitalWrite(2, 1);
}

void Delay(int timems){
  delay(timems);
}
