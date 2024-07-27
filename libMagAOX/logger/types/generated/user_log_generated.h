// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_USERLOG_MAGAOX_LOGGER_H_
#define FLATBUFFERS_GENERATED_USERLOG_MAGAOX_LOGGER_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace MagAOX {
namespace logger {

struct User_log_fb;
struct User_log_fbBuilder;

inline const ::flatbuffers::TypeTable *User_log_fbTypeTable();

struct User_log_fb FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef User_log_fbBuilder Builder;
  static const ::flatbuffers::TypeTable *MiniReflectTypeTable() {
    return User_log_fbTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_EMAIL = 4,
    VT_MESSAGE = 6
  };
  const ::flatbuffers::String *email() const {
    return GetPointer<const ::flatbuffers::String *>(VT_EMAIL);
  }
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_EMAIL) &&
           verifier.VerifyString(email()) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           verifier.EndTable();
  }
};

struct User_log_fbBuilder {
  typedef User_log_fb Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_email(::flatbuffers::Offset<::flatbuffers::String> email) {
    fbb_.AddOffset(User_log_fb::VT_EMAIL, email);
  }
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(User_log_fb::VT_MESSAGE, message);
  }
  explicit User_log_fbBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<User_log_fb> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<User_log_fb>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<User_log_fb> CreateUser_log_fb(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> email = 0,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0) {
  User_log_fbBuilder builder_(_fbb);
  builder_.add_message(message);
  builder_.add_email(email);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<User_log_fb> CreateUser_log_fbDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *email = nullptr,
    const char *message = nullptr) {
  auto email__ = email ? _fbb.CreateString(email) : 0;
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return MagAOX::logger::CreateUser_log_fb(
      _fbb,
      email__,
      message__);
}

inline const ::flatbuffers::TypeTable *User_log_fbTypeTable() {
  static const ::flatbuffers::TypeCode type_codes[] = {
    { ::flatbuffers::ET_STRING, 0, -1 },
    { ::flatbuffers::ET_STRING, 0, -1 }
  };
  static const char * const names[] = {
    "email",
    "message"
  };
  static const ::flatbuffers::TypeTable tt = {
    ::flatbuffers::ST_TABLE, 2, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const MagAOX::logger::User_log_fb *GetUser_log_fb(const void *buf) {
  return ::flatbuffers::GetRoot<MagAOX::logger::User_log_fb>(buf);
}

inline const MagAOX::logger::User_log_fb *GetSizePrefixedUser_log_fb(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<MagAOX::logger::User_log_fb>(buf);
}

inline bool VerifyUser_log_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<MagAOX::logger::User_log_fb>(nullptr);
}

inline bool VerifySizePrefixedUser_log_fbBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<MagAOX::logger::User_log_fb>(nullptr);
}

inline void FinishUser_log_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::User_log_fb> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedUser_log_fbBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<MagAOX::logger::User_log_fb> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace logger
}  // namespace MagAOX

#endif  // FLATBUFFERS_GENERATED_USERLOG_MAGAOX_LOGGER_H_
