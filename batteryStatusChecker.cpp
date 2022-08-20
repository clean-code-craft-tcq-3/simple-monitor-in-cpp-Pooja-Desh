#include <assert.h>
#include <iostream>
using namespace std;

#define MAX_TEMPERATURE 45.0;
#define MIN_TEMPERATURE 0.0;
#define MAX_SOC 80.0;
#define MIN_SOC 20.0;
#define MAX_CHARGERATE 0.8;
#define MIN_CHARGERATE 0.0;

bool checkValueInRange(float parameterValue, float maxLimit, float minLimit)
{
  if((parameterValue < maxLimit) && (parameterValue > minLimit))
    return true;
  else
    return false;
}

bool isBatteryStatusOk(float temperature, float SOC, float chargeRate)
{
  bool temperatureCheck = checkValueInRange(temperature,MAX_TEMPERATURE,MIN_TEMPERATURE);
  bool SOCCheck = checkValueInRange(SOC,MAX_SOC,MIN_SOC);
  bool chargerRateCheck = checkValueInRange(chargeRate,MAX_CHARGERATE,MIN_CHARGERATE);

  if(temperatureCheck && SOCCheck && chargerRateCheck)
    return true;
  else
    return false;
}
