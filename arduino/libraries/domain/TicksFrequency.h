#ifndef TicksFrequency_h
#define TicksFrequency_h

#include "../time/TimeSpanMeasure.h"

class TicksFrequency {
public:
  float getFrequency(unsigned long currentTickCount, unsigned int timeSpanInMillis);
private:
  unsigned long _lastTickCount = 0;
  unsigned long getDifTickCount(unsigned long currentTickCount);
};

#endif