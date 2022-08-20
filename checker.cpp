#include <assert.h>
#include <iostream>
using namespace std;

int main() 
{
  assert(isBatteryStatusOk(25, 70, 0.7) == true);
  assert(isBatteryStatusOk(50, 85, 0) == false);
  assert(isBatteryStatusOk(-20, 50, 0.2) == false);
  assert(isBatteryStatusOk(45, 80, 0.8) == true);
}
