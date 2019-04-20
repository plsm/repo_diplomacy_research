// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/servables/hashmap/hashmap_source_adapter.proto

#ifndef PROTOBUF_INCLUDED_tensorflow_5fserving_2fservables_2fhashmap_2fhashmap_5fsource_5fadapter_2eproto
#define PROTOBUF_INCLUDED_tensorflow_5fserving_2fservables_2fhashmap_2fhashmap_5fsource_5fadapter_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_5fserving_2fservables_2fhashmap_2fhashmap_5fsource_5fadapter_2eproto 

namespace protobuf_tensorflow_5fserving_2fservables_2fhashmap_2fhashmap_5fsource_5fadapter_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_tensorflow_5fserving_2fservables_2fhashmap_2fhashmap_5fsource_5fadapter_2eproto
namespace tensorflow {
namespace serving {
class HashmapSourceAdapterConfig;
class HashmapSourceAdapterConfigDefaultTypeInternal;
extern HashmapSourceAdapterConfigDefaultTypeInternal _HashmapSourceAdapterConfig_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> ::tensorflow::serving::HashmapSourceAdapterConfig* Arena::CreateMaybeMessage<::tensorflow::serving::HashmapSourceAdapterConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tensorflow {
namespace serving {

enum HashmapSourceAdapterConfig_Format {
  HashmapSourceAdapterConfig_Format_SIMPLE_CSV = 0,
  HashmapSourceAdapterConfig_Format_HashmapSourceAdapterConfig_Format_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  HashmapSourceAdapterConfig_Format_HashmapSourceAdapterConfig_Format_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool HashmapSourceAdapterConfig_Format_IsValid(int value);
const HashmapSourceAdapterConfig_Format HashmapSourceAdapterConfig_Format_Format_MIN = HashmapSourceAdapterConfig_Format_SIMPLE_CSV;
const HashmapSourceAdapterConfig_Format HashmapSourceAdapterConfig_Format_Format_MAX = HashmapSourceAdapterConfig_Format_SIMPLE_CSV;
const int HashmapSourceAdapterConfig_Format_Format_ARRAYSIZE = HashmapSourceAdapterConfig_Format_Format_MAX + 1;

const ::google::protobuf::EnumDescriptor* HashmapSourceAdapterConfig_Format_descriptor();
inline const ::std::string& HashmapSourceAdapterConfig_Format_Name(HashmapSourceAdapterConfig_Format value) {
  return ::google::protobuf::internal::NameOfEnum(
    HashmapSourceAdapterConfig_Format_descriptor(), value);
}
inline bool HashmapSourceAdapterConfig_Format_Parse(
    const ::std::string& name, HashmapSourceAdapterConfig_Format* value) {
  return ::google::protobuf::internal::ParseNamedEnum<HashmapSourceAdapterConfig_Format>(
    HashmapSourceAdapterConfig_Format_descriptor(), name, value);
}
// ===================================================================

class HashmapSourceAdapterConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.serving.HashmapSourceAdapterConfig) */ {
 public:
  HashmapSourceAdapterConfig();
  virtual ~HashmapSourceAdapterConfig();

  HashmapSourceAdapterConfig(const HashmapSourceAdapterConfig& from);

  inline HashmapSourceAdapterConfig& operator=(const HashmapSourceAdapterConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HashmapSourceAdapterConfig(HashmapSourceAdapterConfig&& from) noexcept
    : HashmapSourceAdapterConfig() {
    *this = ::std::move(from);
  }

  inline HashmapSourceAdapterConfig& operator=(HashmapSourceAdapterConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const HashmapSourceAdapterConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HashmapSourceAdapterConfig* internal_default_instance() {
    return reinterpret_cast<const HashmapSourceAdapterConfig*>(
               &_HashmapSourceAdapterConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(HashmapSourceAdapterConfig* other);
  friend void swap(HashmapSourceAdapterConfig& a, HashmapSourceAdapterConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HashmapSourceAdapterConfig* New() const final {
    return CreateMaybeMessage<HashmapSourceAdapterConfig>(NULL);
  }

  HashmapSourceAdapterConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<HashmapSourceAdapterConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const HashmapSourceAdapterConfig& from);
  void MergeFrom(const HashmapSourceAdapterConfig& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(HashmapSourceAdapterConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef HashmapSourceAdapterConfig_Format Format;
  static const Format SIMPLE_CSV =
    HashmapSourceAdapterConfig_Format_SIMPLE_CSV;
  static inline bool Format_IsValid(int value) {
    return HashmapSourceAdapterConfig_Format_IsValid(value);
  }
  static const Format Format_MIN =
    HashmapSourceAdapterConfig_Format_Format_MIN;
  static const Format Format_MAX =
    HashmapSourceAdapterConfig_Format_Format_MAX;
  static const int Format_ARRAYSIZE =
    HashmapSourceAdapterConfig_Format_Format_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Format_descriptor() {
    return HashmapSourceAdapterConfig_Format_descriptor();
  }
  static inline const ::std::string& Format_Name(Format value) {
    return HashmapSourceAdapterConfig_Format_Name(value);
  }
  static inline bool Format_Parse(const ::std::string& name,
      Format* value) {
    return HashmapSourceAdapterConfig_Format_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .tensorflow.serving.HashmapSourceAdapterConfig.Format format = 1;
  void clear_format();
  static const int kFormatFieldNumber = 1;
  ::tensorflow::serving::HashmapSourceAdapterConfig_Format format() const;
  void set_format(::tensorflow::serving::HashmapSourceAdapterConfig_Format value);

  // @@protoc_insertion_point(class_scope:tensorflow.serving.HashmapSourceAdapterConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int format_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_tensorflow_5fserving_2fservables_2fhashmap_2fhashmap_5fsource_5fadapter_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HashmapSourceAdapterConfig

// .tensorflow.serving.HashmapSourceAdapterConfig.Format format = 1;
inline void HashmapSourceAdapterConfig::clear_format() {
  format_ = 0;
}
inline ::tensorflow::serving::HashmapSourceAdapterConfig_Format HashmapSourceAdapterConfig::format() const {
  // @@protoc_insertion_point(field_get:tensorflow.serving.HashmapSourceAdapterConfig.format)
  return static_cast< ::tensorflow::serving::HashmapSourceAdapterConfig_Format >(format_);
}
inline void HashmapSourceAdapterConfig::set_format(::tensorflow::serving::HashmapSourceAdapterConfig_Format value) {
  
  format_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.serving.HashmapSourceAdapterConfig.format)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace serving
}  // namespace tensorflow

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::tensorflow::serving::HashmapSourceAdapterConfig_Format> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::serving::HashmapSourceAdapterConfig_Format>() {
  return ::tensorflow::serving::HashmapSourceAdapterConfig_Format_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_tensorflow_5fserving_2fservables_2fhashmap_2fhashmap_5fsource_5fadapter_2eproto