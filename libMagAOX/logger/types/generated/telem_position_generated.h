// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TELEMPOSITION_MAGAOX_LOGGER_H_
#define FLATBUFFERS_GENERATED_TELEMPOSITION_MAGAOX_LOGGER_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace MagAOX {
namespace logger {

struct Telem_position_fb;
struct Telem_position_fbBuilder;

inline const ::flatbuffers::TypeTable *Telem_position_fbTypeTable();

struct Telem_position_fb FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Telem_position_fbBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return Telem_position_fbTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POS = 4
  };
  /// position
  float pos() const {
    return GetField<float>(VT_POS, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<float>(verifier, VT_POS, 4) &&
           verifier.EndTable();
  }
};

struct Telem_position_fbBuilder {
  typedef Telem_position_fb Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_pos(float pos) {
    fbb_.AddElement<float>(Telem_position_fb::VT_POS, pos, 0.0f);
  }
  explicit Telem_position_fbBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Telem_position_fb> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Telem_position_fb>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Telem_position_fb> CreateTelem_position_fb(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    float pos = 0.0f) {
  Telem_position_fbBuilder builder_(_fbb);
  builder_.add_pos(pos);
  return builder_.Finish();
}

inline const ::flatbuffers::TypeTable *Telem_position_fbTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_FLOAT, 0, -1 }
  };
  static const char * const names[] = {
    "pos"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 1, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const MagAOX::logger::Telem_position_fb *GetTelem_position_fb(const void *buf) {
  return ::flatbuffers::GetRoot<MagAOX::logger::Telem_position_fb>(buf);
}

inline const MagAOX::logger::Telem_position_fb *GetSizePrefixedTelem_position_fb(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<MagAOX::logger::Telem_position_fb>(buf);
}

inline bool VerifyTelem_position_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<MagAOX::logger::Telem_position_fb>(nullptr);
}

inline bool VerifySizePrefixedTelem_position_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<MagAOX::logger::Telem_position_fb>(nullptr);
}

inline void FinishTelem_position_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::Telem_position_fb> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTelem_position_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::Telem_position_fb> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace logger
}  // namespace MagAOX

#endif  // FLATBUFFERS_GENERATED_TELEMPOSITION_MAGAOX_LOGGER_H_
