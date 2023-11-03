#ifndef Coincidence_h
#define Coincidence_h

#include <cstddef>
#include <vector>

namespace sbnd {
  struct Coincidence{
    double TimeStamp;
    std::vector<unsigned> Planes;
    unsigned Multiplicity;

    Coincidence() {}
    Coincidence(double time, std::vector<unsigned> planes, unsigned mult) :
      TimeStamp(time), Planes(planes), Multiplicity(mult) {}
  };
}

#endif
