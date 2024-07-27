// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TELEMCHRONYSTATS_MAGAOX_LOGGER_H_
#define FLATBUFFERS_GENERATED_TELEMCHRONYSTATS_MAGAOX_LOGGER_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace MagAOX {
namespace logger {

struct Telem_chrony_stats_fb;
struct Telem_chrony_stats_fbBuilder;

inline const ::flatbuffers::TypeTable *Telem_chrony_stats_fbTypeTable();

struct Telem_chrony_stats_fb FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Telem_chrony_stats_fbBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return Telem_chrony_stats_fbTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SYSTEMTIME = 4,
    VT_LASTOFFSET = 6,
    VT_RMSOFFSET = 8,
    VT_FREQ = 10,
    VT_RESIDFREQ = 12,
    VT_SKEW = 14,
    VT_ROOTDELAY = 16,
    VT_ROOTDISPERSION = 18,
    VT_UPDATEINT = 20
  };
  double systemTime() const {
    return GetField<double>(VT_SYSTEMTIME, 0.0);
  }
  double lastOffset() const {
    return GetField<double>(VT_LASTOFFSET, 0.0);
  }
  double rmsOffset() const {
    return GetField<double>(VT_RMSOFFSET, 0.0);
  }
  double freq() const {
    return GetField<double>(VT_FREQ, 0.0);
  }
  double residFreq() const {
    return GetField<double>(VT_RESIDFREQ, 0.0);
  }
  double skew() const {
    return GetField<double>(VT_SKEW, 0.0);
  }
  double rootDelay() const {
    return GetField<double>(VT_ROOTDELAY, 0.0);
  }
  double rootDispersion() const {
    return GetField<double>(VT_ROOTDISPERSION, 0.0);
  }
  double updateInt() const {
    return GetField<double>(VT_UPDATEINT, 0.0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<double>(verifier, VT_SYSTEMTIME, 8) &&
           VerifyField<double>(verifier, VT_LASTOFFSET, 8) &&
           VerifyField<double>(verifier, VT_RMSOFFSET, 8) &&
           VerifyField<double>(verifier, VT_FREQ, 8) &&
           VerifyField<double>(verifier, VT_RESIDFREQ, 8) &&
           VerifyField<double>(verifier, VT_SKEW, 8) &&
           VerifyField<double>(verifier, VT_ROOTDELAY, 8) &&
           VerifyField<double>(verifier, VT_ROOTDISPERSION, 8) &&
           VerifyField<double>(verifier, VT_UPDATEINT, 8) &&
           verifier.EndTable();
  }
};

struct Telem_chrony_stats_fbBuilder {
  typedef Telem_chrony_stats_fb Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_systemTime(double systemTime) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_SYSTEMTIME, systemTime, 0.0);
  }
  void add_lastOffset(double lastOffset) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_LASTOFFSET, lastOffset, 0.0);
  }
  void add_rmsOffset(double rmsOffset) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_RMSOFFSET, rmsOffset, 0.0);
  }
  void add_freq(double freq) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_FREQ, freq, 0.0);
  }
  void add_residFreq(double residFreq) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_RESIDFREQ, residFreq, 0.0);
  }
  void add_skew(double skew) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_SKEW, skew, 0.0);
  }
  void add_rootDelay(double rootDelay) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_ROOTDELAY, rootDelay, 0.0);
  }
  void add_rootDispersion(double rootDispersion) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_ROOTDISPERSION, rootDispersion, 0.0);
  }
  void add_updateInt(double updateInt) {
    fbb_.AddElement<double>(Telem_chrony_stats_fb::VT_UPDATEINT, updateInt, 0.0);
  }
  explicit Telem_chrony_stats_fbBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Telem_chrony_stats_fb> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Telem_chrony_stats_fb>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Telem_chrony_stats_fb> CreateTelem_chrony_stats_fb(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    double systemTime = 0.0,
    double lastOffset = 0.0,
    double rmsOffset = 0.0,
    double freq = 0.0,
    double residFreq = 0.0,
    double skew = 0.0,
    double rootDelay = 0.0,
    double rootDispersion = 0.0,
    double updateInt = 0.0) {
  Telem_chrony_stats_fbBuilder builder_(_fbb);
  builder_.add_updateInt(updateInt);
  builder_.add_rootDispersion(rootDispersion);
  builder_.add_rootDelay(rootDelay);
  builder_.add_skew(skew);
  builder_.add_residFreq(residFreq);
  builder_.add_freq(freq);
  builder_.add_rmsOffset(rmsOffset);
  builder_.add_lastOffset(lastOffset);
  builder_.add_systemTime(systemTime);
  return builder_.Finish();
}

inline const ::flatbuffers::TypeTable *Telem_chrony_stats_fbTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 },
    { ::flatbuffers::ET_DOUBLE, 0, -1 }
  };
  static const char * const names[] = {
    "systemTime",
    "lastOffset",
    "rmsOffset",
    "freq",
    "residFreq",
    "skew",
    "rootDelay",
    "rootDispersion",
    "updateInt"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 9, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const MagAOX::logger::Telem_chrony_stats_fb *GetTelem_chrony_stats_fb(const void *buf) {
  return ::flatbuffers::GetRoot<MagAOX::logger::Telem_chrony_stats_fb>(buf);
}

inline const MagAOX::logger::Telem_chrony_stats_fb *GetSizePrefixedTelem_chrony_stats_fb(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<MagAOX::logger::Telem_chrony_stats_fb>(buf);
}

inline bool VerifyTelem_chrony_stats_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<MagAOX::logger::Telem_chrony_stats_fb>(nullptr);
}

inline bool VerifySizePrefixedTelem_chrony_stats_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<MagAOX::logger::Telem_chrony_stats_fb>(nullptr);
}

inline void FinishTelem_chrony_stats_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::Telem_chrony_stats_fb> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTelem_chrony_stats_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::Telem_chrony_stats_fb> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace logger
}  // namespace MagAOX

#endif  // FLATBUFFERS_GENERATED_TELEMCHRONYSTATS_MAGAOX_LOGGER_H_
