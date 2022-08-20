#include <assert.h>
#include <iostream>

bool checkValueInRange(float parameterValue, float maxLimit, float minLimit)
{
  if((parameterValue < maxLimit) && (parameterValue > minLimit))
    return true;
  else
    return false;
}

bool isBatteryStatusOk(float temperature, float SOC, float chargeRate)
{
  float MAX_TEMPERATURE = 45.0;
  float MIN_TEMPERATURE = 0.0;
  float MAX_SOC = 80.0;
  float MIN_SOC = 20.0;
  float MAX_CHARGERATE = 0.8;
  float MIN_CHARGERATE = 0.0;
  
  bool temperatureCheck = checkValueInRange(temperature,MAX_TEMPERATURE,MIN_TEMPERATURE);
  bool SOCCheck = checkValueInRange(SOC,MAX_SOC,MIN_SOC);
  bool chargerRateCheck = checkValueInRange(chargeRate,MAX_CHARGERATE,MIN_CHARGERATE);

  if(temperatureCheck && SOCCheck && chargerRateCheck)
    return true;
  else
    return false;
}

int main() 
{
  assert(isBatteryStatusOk(25, 70, 0.7) == true);
  assert(isBatteryStatusOk(50, 85, 0) == false);
  assert(isBatteryStatusOk(20, 50, 0.2) == true);
  assert(isBatteryStatusOk(45, 80, 0.8) == false);
  return 1;
}
