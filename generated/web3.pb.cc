// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: web3.proto

#include "web3.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace rpcdaemon {
class VersionRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VersionRequest> _instance;
} _VersionRequest_default_instance_;
class VersionResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VersionResponse> _instance;
} _VersionResponse_default_instance_;
}  // namespace rpcdaemon
static void InitDefaultsscc_info_VersionRequest_web3_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::rpcdaemon::_VersionRequest_default_instance_;
    new (ptr) ::rpcdaemon::VersionRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::rpcdaemon::VersionRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VersionRequest_web3_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VersionRequest_web3_2eproto}, {}};

static void InitDefaultsscc_info_VersionResponse_web3_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::rpcdaemon::_VersionResponse_default_instance_;
    new (ptr) ::rpcdaemon::VersionResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::rpcdaemon::VersionResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VersionResponse_web3_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VersionResponse_web3_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_web3_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_web3_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_web3_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_web3_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::VersionRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::VersionResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::rpcdaemon::VersionRequest)},
  { 5, -1, sizeof(::rpcdaemon::VersionResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::rpcdaemon::_VersionRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::rpcdaemon::_VersionResponse_default_instance_),
};

const char descriptor_table_protodef_web3_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nweb3.proto\022\trpcdaemon\032\034google/api/anno"
  "tations.proto\"\020\n\016VersionRequest\"\021\n\017Versi"
  "onResponse2l\n\013Web3Service\022]\n\007Version\022\031.r"
  "pcdaemon.VersionRequest\032\032.rpcdaemon.Vers"
  "ionResponse\"\033\202\323\344\223\002\025\"\020/v1/example/echo:\001*"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_web3_2eproto_deps[1] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_web3_2eproto_sccs[2] = {
  &scc_info_VersionRequest_web3_2eproto.base,
  &scc_info_VersionResponse_web3_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_web3_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_web3_2eproto = {
  false, false, descriptor_table_protodef_web3_2eproto, "web3.proto", 208,
  &descriptor_table_web3_2eproto_once, descriptor_table_web3_2eproto_sccs, descriptor_table_web3_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_web3_2eproto::offsets,
  file_level_metadata_web3_2eproto, 2, file_level_enum_descriptors_web3_2eproto, file_level_service_descriptors_web3_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_web3_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_web3_2eproto)), true);
namespace rpcdaemon {

// ===================================================================

void VersionRequest::InitAsDefaultInstance() {
}
class VersionRequest::_Internal {
 public:
};

VersionRequest::VersionRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:rpcdaemon.VersionRequest)
}
VersionRequest::VersionRequest(const VersionRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:rpcdaemon.VersionRequest)
}

void VersionRequest::SharedCtor() {
}

VersionRequest::~VersionRequest() {
  // @@protoc_insertion_point(destructor:rpcdaemon.VersionRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VersionRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void VersionRequest::ArenaDtor(void* object) {
  VersionRequest* _this = reinterpret_cast< VersionRequest* >(object);
  (void)_this;
}
void VersionRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VersionRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VersionRequest& VersionRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VersionRequest_web3_2eproto.base);
  return *internal_default_instance();
}


void VersionRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:rpcdaemon.VersionRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VersionRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* VersionRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rpcdaemon.VersionRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpcdaemon.VersionRequest)
  return target;
}

size_t VersionRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rpcdaemon.VersionRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VersionRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:rpcdaemon.VersionRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const VersionRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VersionRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:rpcdaemon.VersionRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:rpcdaemon.VersionRequest)
    MergeFrom(*source);
  }
}

void VersionRequest::MergeFrom(const VersionRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rpcdaemon.VersionRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void VersionRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:rpcdaemon.VersionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VersionRequest::CopyFrom(const VersionRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rpcdaemon.VersionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VersionRequest::IsInitialized() const {
  return true;
}

void VersionRequest::InternalSwap(VersionRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VersionRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void VersionResponse::InitAsDefaultInstance() {
}
class VersionResponse::_Internal {
 public:
};

VersionResponse::VersionResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:rpcdaemon.VersionResponse)
}
VersionResponse::VersionResponse(const VersionResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:rpcdaemon.VersionResponse)
}

void VersionResponse::SharedCtor() {
}

VersionResponse::~VersionResponse() {
  // @@protoc_insertion_point(destructor:rpcdaemon.VersionResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void VersionResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void VersionResponse::ArenaDtor(void* object) {
  VersionResponse* _this = reinterpret_cast< VersionResponse* >(object);
  (void)_this;
}
void VersionResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void VersionResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VersionResponse& VersionResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VersionResponse_web3_2eproto.base);
  return *internal_default_instance();
}


void VersionResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:rpcdaemon.VersionResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* VersionResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* VersionResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rpcdaemon.VersionResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpcdaemon.VersionResponse)
  return target;
}

size_t VersionResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rpcdaemon.VersionResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VersionResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:rpcdaemon.VersionResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const VersionResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VersionResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:rpcdaemon.VersionResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:rpcdaemon.VersionResponse)
    MergeFrom(*source);
  }
}

void VersionResponse::MergeFrom(const VersionResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rpcdaemon.VersionResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void VersionResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:rpcdaemon.VersionResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VersionResponse::CopyFrom(const VersionResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rpcdaemon.VersionResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VersionResponse::IsInitialized() const {
  return true;
}

void VersionResponse::InternalSwap(VersionResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VersionResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rpcdaemon
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::rpcdaemon::VersionRequest* Arena::CreateMaybeMessage< ::rpcdaemon::VersionRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rpcdaemon::VersionRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::rpcdaemon::VersionResponse* Arena::CreateMaybeMessage< ::rpcdaemon::VersionResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rpcdaemon::VersionResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
