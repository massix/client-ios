// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server-web.proto

#ifndef PROTOBUF_server_2dweb_2eproto__INCLUDED
#define PROTOBUF_server_2dweb_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace orwell {
namespace messages {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_server_2dweb_2eproto();
void protobuf_AssignDesc_server_2dweb_2eproto();
void protobuf_ShutdownFile_server_2dweb_2eproto();

class GetAccess;
class GetGameState;

// ===================================================================

class GetAccess : public ::google_public::protobuf::MessageLite {
 public:
  GetAccess();
  virtual ~GetAccess();

  GetAccess(const GetAccess& from);

  inline GetAccess& operator=(const GetAccess& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetAccess& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetAccess* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetAccess* other);

  // implements Message ----------------------------------------------

  GetAccess* New() const;
  void CheckTypeAndMergeFrom(const ::google_public::protobuf::MessageLite& from);
  void CopyFrom(const GetAccess& from);
  void MergeFrom(const GetAccess& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google_public::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google_public::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:orwell.messages.GetAccess)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::std::string* name_;

  mutable int _cached_size_;
  ::google_public::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_server_2dweb_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_server_2dweb_2eproto();
  #endif
  friend void protobuf_AssignDesc_server_2dweb_2eproto();
  friend void protobuf_ShutdownFile_server_2dweb_2eproto();

  void InitAsDefaultInstance();
  static GetAccess* default_instance_;
};
// -------------------------------------------------------------------

class GetGameState : public ::google_public::protobuf::MessageLite {
 public:
  GetGameState();
  virtual ~GetGameState();

  GetGameState(const GetGameState& from);

  inline GetGameState& operator=(const GetGameState& from) {
    CopyFrom(from);
    return *this;
  }

  static const GetGameState& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GetGameState* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GetGameState* other);

  // implements Message ----------------------------------------------

  GetGameState* New() const;
  void CheckTypeAndMergeFrom(const ::google_public::protobuf::MessageLite& from);
  void CopyFrom(const GetGameState& from);
  void MergeFrom(const GetGameState& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google_public::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google_public::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:orwell.messages.GetGameState)
 private:


  mutable int _cached_size_;
  ::google_public::protobuf::uint32 _has_bits_[1];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_server_2dweb_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_server_2dweb_2eproto();
  #endif
  friend void protobuf_AssignDesc_server_2dweb_2eproto();
  friend void protobuf_ShutdownFile_server_2dweb_2eproto();

  void InitAsDefaultInstance();
  static GetGameState* default_instance_;
};
// ===================================================================


// ===================================================================

// GetAccess

// optional string name = 1;
inline bool GetAccess::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetAccess::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetAccess::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetAccess::clear_name() {
  if (name_ != &::google_public::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& GetAccess::name() const {
  return *name_;
}
inline void GetAccess::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google_public::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void GetAccess::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google_public::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void GetAccess::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google_public::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* GetAccess::mutable_name() {
  set_has_name();
  if (name_ == &::google_public::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* GetAccess::release_name() {
  clear_has_name();
  if (name_ == &::google_public::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google_public::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void GetAccess::set_allocated_name(::std::string* name) {
  if (name_ != &::google_public::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google_public::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// GetGameState


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace orwell

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_server_2dweb_2eproto__INCLUDED
