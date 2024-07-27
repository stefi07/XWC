// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TELEMLOOPGAIN_MAGAOX_LOGGER_H_
#define FLATBUFFERS_GENERATED_TELEMLOOPGAIN_MAGAOX_LOGGER_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace MagAOX {
namespace logger {

struct Telem_loopgain_fb;
struct Telem_loopgain_fbBuilder;

inline const ::flatbuffers::TypeTable *Telem_loopgain_fbTypeTable();

struct Telem_loopgain_fb FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Telem_loopgain_fbBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return Telem_loopgain_fbTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_STATE = 4,
    VT_GAIN = 6,
    VT_MULTCOEF = 8,
    VT_LIMIT = 10
  };
  uint8_t state() const {
    return GetField<uint8_t>(VT_STATE, 0);
  }
  float gain() const {
    return GetField<float>(VT_GAIN, 0.0f);
  }
  float multcoef() const {
    return GetField<float>(VT_MULTCOEF, 0.0f);
  }
  float limit() const {
    return GetField<float>(VT_LIMIT, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_STATE, 1) &&
           VerifyField<float>(verifier, VT_GAIN, 4) &&
           VerifyField<float>(verifier, VT_MULTCOEF, 4) &&
           VerifyField<float>(verifier, VT_LIMIT, 4) &&
           verifier.EndTable();
  }
};

struct Telem_loopgain_fbBuilder {
  typedef Telem_loopgain_fb Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_state(uint8_t state) {
    fbb_.AddElement<uint8_t>(Telem_loopgain_fb::VT_STATE, state, 0);
  }
  void add_gain(float gain) {
    fbb_.AddElement<float>(Telem_loopgain_fb::VT_GAIN, gain, 0.0f);
  }
  void add_multcoef(float multcoef) {
    fbb_.AddElement<float>(Telem_loopgain_fb::VT_MULTCOEF, multcoef, 0.0f);
  }
  void add_limit(float limit) {
    fbb_.AddElement<float>(Telem_loopgain_fb::VT_LIMIT, limit, 0.0f);
  }
  explicit Telem_loopgain_fbBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Telem_loopgain_fb> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Telem_loopgain_fb>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Telem_loopgain_fb> CreateTelem_loopgain_fb(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t state = 0,
    float gain = 0.0f,
    float multcoef = 0.0f,
    float limit = 0.0f) {
  Telem_loopgain_fbBuilder builder_(_fbb);
  builder_.add_limit(limit);
  builder_.add_multcoef(multcoef);
  builder_.add_gain(gain);
  builder_.add_state(state);
  return builder_.Finish();
}

inline const ::flatbuffers::TypeTable *Telem_loopgain_fbTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_UCHAR, 0, -1 },
    { ::flatbuffers::ET_FLOAT, 0, -1 },
    { ::flatbuffers::ET_FLOAT, 0, -1 },
    { ::flatbuffers::ET_FLOAT, 0, -1 }
  };
  static const char * const names[] = {
    "state",
    "gain",
    "multcoef",
    "limit"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 4, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const MagAOX::logger::Telem_loopgain_fb *GetTelem_loopgain_fb(const void *buf) {
  return ::flatbuffers::GetRoot<MagAOX::logger::Telem_loopgain_fb>(buf);
}

inline const MagAOX::logger::Telem_loopgain_fb *GetSizePrefixedTelem_loopgain_fb(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<MagAOX::logger::Telem_loopgain_fb>(buf);
}

inline bool VerifyTelem_loopgain_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<MagAOX::logger::Telem_loopgain_fb>(nullptr);
}

inline bool VerifySizePrefixedTelem_loopgain_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<MagAOX::logger::Telem_loopgain_fb>(nullptr);
}

inline void FinishTelem_loopgain_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::Telem_loopgain_fb> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTelem_loopgain_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::Telem_loopgain_fb> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace logger
}  // namespace MagAOX

#endif  // FLATBUFFERS_GENERATED_TELEMLOOPGAIN_MAGAOX_LOGGER_H_
