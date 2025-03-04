#ifndef MichelTag_hh_
#define MichelTag_hh_
#include <cstdint>

#include <vector>

namespace sbnd {
/*
  struct LateLightTail{
    int Channel;
    std::vector<float> Waveform;

    LateLightTail() {}
  };
*/
  struct MichelTag{

    int G4ID, G4PDG;
    int CRTPlane;
    float MuonTime, MichelTime;
    std::vector<float> MuonMultCoat, MuonMultUncoat, MichelMultCoat, MichelMultUncoat;
    int MuonMult, MichelMult;
    float MuonRawAmp, MichelRawAmp, MuonSADCWAmp, MichelSADCWAmp;
    // std::vector<LateLightTail> LateLightTails;

    MichelTag() {}

  };

} // namespace sbnd::comm

#endif
