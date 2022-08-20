#include <assert.h>
#include <iostream>
#include "batteryStatusChecker.cpp"
using namespace std;

int main() 
{
  assert(isBatteryStatusOk(25, 70, 0.7) == true);
  assert(isBatteryStatusOk(50, 85, 0) == false);
  assert(isBatteryStatusOk(20, 50, 0.2) == true);
  assert(isBatteryStatusOk(45, 80, 0.8) == true);
  return 1;
}
