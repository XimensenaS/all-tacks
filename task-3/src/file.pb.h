// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: file.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_file_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_file_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4023000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4023004 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_file_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_file_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_file_2eproto;
class Date;
struct DateDefaultTypeInternal;
extern DateDefaultTypeInternal _Date_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template <>
::Date* Arena::CreateMaybeMessage<::Date>(Arena*);
PROTOBUF_NAMESPACE_CLOSE


// ===================================================================


// -------------------------------------------------------------------

class Date final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Date) */ {
 public:
  inline Date() : Date(nullptr) {}
  ~Date() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Date(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Date(const Date& from);
  Date(Date&& from) noexcept
    : Date() {
    *this = ::std::move(from);
  }

  inline Date& operator=(const Date& from) {
    CopyFrom(from);
    return *this;
  }
  inline Date& operator=(Date&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Date& default_instance() {
    return *internal_default_instance();
  }
  static inline const Date* internal_default_instance() {
    return reinterpret_cast<const Date*>(
               &_Date_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Date& a, Date& b) {
    a.Swap(&b);
  }
  inline void Swap(Date* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Date* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Date* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Date>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Date& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Date& from) {
    Date::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Date* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Date";
  }
  protected:
  explicit Date(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLegalAddressFieldNumber = 2,
    kCompanyNameFieldNumber = 3,
    kTypeActivityFieldNumber = 4,
    kYearFoundationFieldNumber = 1,
    kImplementationFieldNumber = 5,
  };
  // required string legalAddress = 2;
  bool has_legaladdress() const;
  void clear_legaladdress() ;
  const std::string& legaladdress() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_legaladdress(Arg_&& arg, Args_... args);
  std::string* mutable_legaladdress();
  PROTOBUF_NODISCARD std::string* release_legaladdress();
  void set_allocated_legaladdress(std::string* ptr);

  private:
  const std::string& _internal_legaladdress() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_legaladdress(
      const std::string& value);
  std::string* _internal_mutable_legaladdress();

  public:
  // required string companyName = 3;
  bool has_companyname() const;
  void clear_companyname() ;
  const std::string& companyname() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_companyname(Arg_&& arg, Args_... args);
  std::string* mutable_companyname();
  PROTOBUF_NODISCARD std::string* release_companyname();
  void set_allocated_companyname(std::string* ptr);

  private:
  const std::string& _internal_companyname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_companyname(
      const std::string& value);
  std::string* _internal_mutable_companyname();

  public:
  // optional string typeActivity = 4;
  bool has_typeactivity() const;
  void clear_typeactivity() ;
  const std::string& typeactivity() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_typeactivity(Arg_&& arg, Args_... args);
  std::string* mutable_typeactivity();
  PROTOBUF_NODISCARD std::string* release_typeactivity();
  void set_allocated_typeactivity(std::string* ptr);

  private:
  const std::string& _internal_typeactivity() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_typeactivity(
      const std::string& value);
  std::string* _internal_mutable_typeactivity();

  public:
  // required int32 yearFoundation = 1;
  bool has_yearfoundation() const;
  void clear_yearfoundation() ;
  ::int32_t yearfoundation() const;
  void set_yearfoundation(::int32_t value);

  private:
  ::int32_t _internal_yearfoundation() const;
  void _internal_set_yearfoundation(::int32_t value);

  public:
  // optional bool implementation = 5;
  bool has_implementation() const;
  void clear_implementation() ;
  bool implementation() const;
  void set_implementation(bool value);

  private:
  bool _internal_implementation() const;
  void _internal_set_implementation(bool value);

  public:
  // @@protoc_insertion_point(class_scope:Date)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  ::size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr legaladdress_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr companyname_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr typeactivity_;
    ::int32_t yearfoundation_;
    bool implementation_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_file_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Date

// required int32 yearFoundation = 1;
inline bool Date::has_yearfoundation() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Date::clear_yearfoundation() {
  _impl_.yearfoundation_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t Date::yearfoundation() const {
  // @@protoc_insertion_point(field_get:Date.yearFoundation)
  return _internal_yearfoundation();
}
inline void Date::set_yearfoundation(::int32_t value) {
  _internal_set_yearfoundation(value);
  // @@protoc_insertion_point(field_set:Date.yearFoundation)
}
inline ::int32_t Date::_internal_yearfoundation() const {
  return _impl_.yearfoundation_;
}
inline void Date::_internal_set_yearfoundation(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.yearfoundation_ = value;
}

// required string legalAddress = 2;
inline bool Date::has_legaladdress() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Date::clear_legaladdress() {
  _impl_.legaladdress_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Date::legaladdress() const {
  // @@protoc_insertion_point(field_get:Date.legalAddress)
  return _internal_legaladdress();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Date::set_legaladdress(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legaladdress_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Date.legalAddress)
}
inline std::string* Date::mutable_legaladdress() {
  std::string* _s = _internal_mutable_legaladdress();
  // @@protoc_insertion_point(field_mutable:Date.legalAddress)
  return _s;
}
inline const std::string& Date::_internal_legaladdress() const {
  return _impl_.legaladdress_.Get();
}
inline void Date::_internal_set_legaladdress(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.legaladdress_.Set(value, GetArenaForAllocation());
}
inline std::string* Date::_internal_mutable_legaladdress() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.legaladdress_.Mutable( GetArenaForAllocation());
}
inline std::string* Date::release_legaladdress() {
  // @@protoc_insertion_point(field_release:Date.legalAddress)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.legaladdress_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.legaladdress_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Date::set_allocated_legaladdress(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.legaladdress_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.legaladdress_.IsDefault()) {
          _impl_.legaladdress_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Date.legalAddress)
}

// required string companyName = 3;
inline bool Date::has_companyname() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Date::clear_companyname() {
  _impl_.companyname_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Date::companyname() const {
  // @@protoc_insertion_point(field_get:Date.companyName)
  return _internal_companyname();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Date::set_companyname(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.companyname_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Date.companyName)
}
inline std::string* Date::mutable_companyname() {
  std::string* _s = _internal_mutable_companyname();
  // @@protoc_insertion_point(field_mutable:Date.companyName)
  return _s;
}
inline const std::string& Date::_internal_companyname() const {
  return _impl_.companyname_.Get();
}
inline void Date::_internal_set_companyname(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;


  _impl_.companyname_.Set(value, GetArenaForAllocation());
}
inline std::string* Date::_internal_mutable_companyname() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.companyname_.Mutable( GetArenaForAllocation());
}
inline std::string* Date::release_companyname() {
  // @@protoc_insertion_point(field_release:Date.companyName)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.companyname_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.companyname_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Date::set_allocated_companyname(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.companyname_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.companyname_.IsDefault()) {
          _impl_.companyname_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Date.companyName)
}

// optional string typeActivity = 4;
inline bool Date::has_typeactivity() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Date::clear_typeactivity() {
  _impl_.typeactivity_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Date::typeactivity() const {
  // @@protoc_insertion_point(field_get:Date.typeActivity)
  return _internal_typeactivity();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Date::set_typeactivity(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.typeactivity_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Date.typeActivity)
}
inline std::string* Date::mutable_typeactivity() {
  std::string* _s = _internal_mutable_typeactivity();
  // @@protoc_insertion_point(field_mutable:Date.typeActivity)
  return _s;
}
inline const std::string& Date::_internal_typeactivity() const {
  return _impl_.typeactivity_.Get();
}
inline void Date::_internal_set_typeactivity(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000004u;


  _impl_.typeactivity_.Set(value, GetArenaForAllocation());
}
inline std::string* Date::_internal_mutable_typeactivity() {
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.typeactivity_.Mutable( GetArenaForAllocation());
}
inline std::string* Date::release_typeactivity() {
  // @@protoc_insertion_point(field_release:Date.typeActivity)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.typeactivity_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.typeactivity_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Date::set_allocated_typeactivity(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.typeactivity_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.typeactivity_.IsDefault()) {
          _impl_.typeactivity_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Date.typeActivity)
}

// optional bool implementation = 5;
inline bool Date::has_implementation() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Date::clear_implementation() {
  _impl_.implementation_ = false;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool Date::implementation() const {
  // @@protoc_insertion_point(field_get:Date.implementation)
  return _internal_implementation();
}
inline void Date::set_implementation(bool value) {
  _internal_set_implementation(value);
  // @@protoc_insertion_point(field_set:Date.implementation)
}
inline bool Date::_internal_implementation() const {
  return _impl_.implementation_;
}
inline void Date::_internal_set_implementation(bool value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.implementation_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_file_2eproto_2epb_2eh
