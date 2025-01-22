#ifndef MichelTag_hh_
#define MichelTag_hh_
#include <cstdint>

#include <vector>

namespace sbnd {

  struct LateLightTail{
    int Channel;
    std::vector<float> Waveform;

    LateLightTail() {}
  };

  struct MichelTag{

    int G4ID, G4PDG;
    int CRTPlane;
    float MuonTime, MichelTime;
    int MuonMult;
    std::vector<LateLightTail> LateLightTails;

    MichelTag() {}

  };

} // namespace sbnd::comm

#endif
