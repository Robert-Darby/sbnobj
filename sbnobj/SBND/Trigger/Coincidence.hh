#ifndef Coincidence_h
#define Coincidence_h

#include <cstddef>
#include <vector>

namespace sbnd {
  struct Coincidence{
    double TimeStamp;
    std::vector<unsigned> Planes;

    Coincidence() {}
    Coincidence(double time, std::vector<unsigned> planes) :
      TimeStamp(time), Planes(planes) {}
  };
}

#endif
