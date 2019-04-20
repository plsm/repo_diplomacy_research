// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: diplomacy_tensorflow/core/protobuf/cluster.proto

#ifndef PROTOBUF_INCLUDED_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto
#define PROTOBUF_INCLUDED_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto 

namespace protobuf_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto
namespace diplomacy {
namespace tensorflow {
class ClusterDef;
class ClusterDefDefaultTypeInternal;
extern ClusterDefDefaultTypeInternal _ClusterDef_default_instance_;
class JobDef;
class JobDefDefaultTypeInternal;
extern JobDefDefaultTypeInternal _JobDef_default_instance_;
class JobDef_TasksEntry_DoNotUse;
class JobDef_TasksEntry_DoNotUseDefaultTypeInternal;
extern JobDef_TasksEntry_DoNotUseDefaultTypeInternal _JobDef_TasksEntry_DoNotUse_default_instance_;
}  // namespace tensorflow
}  // namespace diplomacy
namespace google {
namespace protobuf {
template<> ::diplomacy::tensorflow::ClusterDef* Arena::CreateMaybeMessage<::diplomacy::tensorflow::ClusterDef>(Arena*);
template<> ::diplomacy::tensorflow::JobDef* Arena::CreateMaybeMessage<::diplomacy::tensorflow::JobDef>(Arena*);
template<> ::diplomacy::tensorflow::JobDef_TasksEntry_DoNotUse* Arena::CreateMaybeMessage<::diplomacy::tensorflow::JobDef_TasksEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace diplomacy {
namespace tensorflow {

// ===================================================================

class JobDef_TasksEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<JobDef_TasksEntry_DoNotUse, 
    ::google::protobuf::int32, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<JobDef_TasksEntry_DoNotUse, 
    ::google::protobuf::int32, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  JobDef_TasksEntry_DoNotUse();
  JobDef_TasksEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const JobDef_TasksEntry_DoNotUse& other);
  static const JobDef_TasksEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const JobDef_TasksEntry_DoNotUse*>(&_JobDef_TasksEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class JobDef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:diplomacy.tensorflow.JobDef) */ {
 public:
  JobDef();
  virtual ~JobDef();

  JobDef(const JobDef& from);

  inline JobDef& operator=(const JobDef& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  JobDef(JobDef&& from) noexcept
    : JobDef() {
    *this = ::std::move(from);
  }

  inline JobDef& operator=(JobDef&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const JobDef& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const JobDef* internal_default_instance() {
    return reinterpret_cast<const JobDef*>(
               &_JobDef_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void UnsafeArenaSwap(JobDef* other);
  void Swap(JobDef* other);
  friend void swap(JobDef& a, JobDef& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline JobDef* New() const final {
    return CreateMaybeMessage<JobDef>(NULL);
  }

  JobDef* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<JobDef>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const JobDef& from);
  void MergeFrom(const JobDef& from);
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
  void InternalSwap(JobDef* other);
  protected:
  explicit JobDef(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<int32, string> tasks = 2;
  int tasks_size() const;
  void clear_tasks();
  static const int kTasksFieldNumber = 2;
  const ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >&
      tasks() const;
  ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >*
      mutable_tasks();

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  ::std::string* unsafe_arena_release_name();
  PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // @@protoc_insertion_point(class_scope:diplomacy.tensorflow.JobDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::MapField<
      JobDef_TasksEntry_DoNotUse,
      ::google::protobuf::int32, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > tasks_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ClusterDef : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:diplomacy.tensorflow.ClusterDef) */ {
 public:
  ClusterDef();
  virtual ~ClusterDef();

  ClusterDef(const ClusterDef& from);

  inline ClusterDef& operator=(const ClusterDef& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ClusterDef(ClusterDef&& from) noexcept
    : ClusterDef() {
    *this = ::std::move(from);
  }

  inline ClusterDef& operator=(ClusterDef&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline ::google::protobuf::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const ClusterDef& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClusterDef* internal_default_instance() {
    return reinterpret_cast<const ClusterDef*>(
               &_ClusterDef_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void UnsafeArenaSwap(ClusterDef* other);
  void Swap(ClusterDef* other);
  friend void swap(ClusterDef& a, ClusterDef& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClusterDef* New() const final {
    return CreateMaybeMessage<ClusterDef>(NULL);
  }

  ClusterDef* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ClusterDef>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ClusterDef& from);
  void MergeFrom(const ClusterDef& from);
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
  void InternalSwap(ClusterDef* other);
  protected:
  explicit ClusterDef(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .diplomacy.tensorflow.JobDef job = 1;
  int job_size() const;
  void clear_job();
  static const int kJobFieldNumber = 1;
  ::diplomacy::tensorflow::JobDef* mutable_job(int index);
  ::google::protobuf::RepeatedPtrField< ::diplomacy::tensorflow::JobDef >*
      mutable_job();
  const ::diplomacy::tensorflow::JobDef& job(int index) const;
  ::diplomacy::tensorflow::JobDef* add_job();
  const ::google::protobuf::RepeatedPtrField< ::diplomacy::tensorflow::JobDef >&
      job() const;

  // @@protoc_insertion_point(class_scope:diplomacy.tensorflow.ClusterDef)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::google::protobuf::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::RepeatedPtrField< ::diplomacy::tensorflow::JobDef > job_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// JobDef

// string name = 1;
inline void JobDef::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& JobDef::name() const {
  // @@protoc_insertion_point(field_get:diplomacy.tensorflow.JobDef.name)
  return name_.Get();
}
inline void JobDef::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:diplomacy.tensorflow.JobDef.name)
}
#if LANG_CXX11
inline void JobDef::set_name(::std::string&& value) {
  
  name_.Set(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_rvalue:diplomacy.tensorflow.JobDef.name)
}
#endif
inline void JobDef::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:diplomacy.tensorflow.JobDef.name)
}
inline void JobDef::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:diplomacy.tensorflow.JobDef.name)
}
inline ::std::string* JobDef::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:diplomacy.tensorflow.JobDef.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* JobDef::release_name() {
  // @@protoc_insertion_point(field_release:diplomacy.tensorflow.JobDef.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline void JobDef::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:diplomacy.tensorflow.JobDef.name)
}
inline ::std::string* JobDef::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:diplomacy.tensorflow.JobDef.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void JobDef::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:diplomacy.tensorflow.JobDef.name)
}

// map<int32, string> tasks = 2;
inline int JobDef::tasks_size() const {
  return tasks_.size();
}
inline void JobDef::clear_tasks() {
  tasks_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >&
JobDef::tasks() const {
  // @@protoc_insertion_point(field_map:diplomacy.tensorflow.JobDef.tasks)
  return tasks_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >*
JobDef::mutable_tasks() {
  // @@protoc_insertion_point(field_mutable_map:diplomacy.tensorflow.JobDef.tasks)
  return tasks_.MutableMap();
}

// -------------------------------------------------------------------

// ClusterDef

// repeated .diplomacy.tensorflow.JobDef job = 1;
inline int ClusterDef::job_size() const {
  return job_.size();
}
inline void ClusterDef::clear_job() {
  job_.Clear();
}
inline ::diplomacy::tensorflow::JobDef* ClusterDef::mutable_job(int index) {
  // @@protoc_insertion_point(field_mutable:diplomacy.tensorflow.ClusterDef.job)
  return job_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::diplomacy::tensorflow::JobDef >*
ClusterDef::mutable_job() {
  // @@protoc_insertion_point(field_mutable_list:diplomacy.tensorflow.ClusterDef.job)
  return &job_;
}
inline const ::diplomacy::tensorflow::JobDef& ClusterDef::job(int index) const {
  // @@protoc_insertion_point(field_get:diplomacy.tensorflow.ClusterDef.job)
  return job_.Get(index);
}
inline ::diplomacy::tensorflow::JobDef* ClusterDef::add_job() {
  // @@protoc_insertion_point(field_add:diplomacy.tensorflow.ClusterDef.job)
  return job_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::diplomacy::tensorflow::JobDef >&
ClusterDef::job() const {
  // @@protoc_insertion_point(field_list:diplomacy.tensorflow.ClusterDef.job)
  return job_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow
}  // namespace diplomacy

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_diplomacy_5ftensorflow_2fcore_2fprotobuf_2fcluster_2eproto