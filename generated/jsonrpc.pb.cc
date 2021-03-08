// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: jsonrpc.proto

#include "jsonrpc.pb.h"

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
class JsonRpcRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<JsonRpcRequest> _instance;
} _JsonRpcRequest_default_instance_;
class JsonRpcResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<JsonRpcResponse> _instance;
} _JsonRpcResponse_default_instance_;
}  // namespace rpcdaemon
static void InitDefaultsscc_info_JsonRpcRequest_jsonrpc_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::rpcdaemon::_JsonRpcRequest_default_instance_;
    new (ptr) ::rpcdaemon::JsonRpcRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::rpcdaemon::JsonRpcRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_JsonRpcRequest_jsonrpc_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_JsonRpcRequest_jsonrpc_2eproto}, {}};

static void InitDefaultsscc_info_JsonRpcResponse_jsonrpc_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::rpcdaemon::_JsonRpcResponse_default_instance_;
    new (ptr) ::rpcdaemon::JsonRpcResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::rpcdaemon::JsonRpcResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_JsonRpcResponse_jsonrpc_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_JsonRpcResponse_jsonrpc_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_jsonrpc_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_jsonrpc_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_jsonrpc_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_jsonrpc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::JsonRpcRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::JsonRpcRequest, jsonrpc_),
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::JsonRpcRequest, method_),
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::JsonRpcRequest, params_),
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::JsonRpcRequest, id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::JsonRpcResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::rpcdaemon::JsonRpcResponse, result_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::rpcdaemon::JsonRpcRequest)},
  { 9, -1, sizeof(::rpcdaemon::JsonRpcResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::rpcdaemon::_JsonRpcRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::rpcdaemon::_JsonRpcResponse_default_instance_),
};

const char descriptor_table_protodef_jsonrpc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rjsonrpc.proto\022\trpcdaemon\032\034google/api/a"
  "nnotations.proto\"M\n\016JsonRpcRequest\022\017\n\007js"
  "onrpc\030\001 \001(\t\022\016\n\006method\030\003 \001(\t\022\016\n\006params\030\005 "
  "\001(\t\022\n\n\002id\030\007 \001(\004\"!\n\017JsonRpcResponse\022\016\n\006re"
  "sult\030\001 \001(\t2`\n\016JsonRpcService\022N\n\007JsonRpc\022"
  "\031.rpcdaemon.JsonRpcRequest\032\032.rpcdaemon.J"
  "sonRpcResponse\"\014\202\323\344\223\002\006\"\001/:\001*b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_jsonrpc_2eproto_deps[1] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_jsonrpc_2eproto_sccs[2] = {
  &scc_info_JsonRpcRequest_jsonrpc_2eproto.base,
  &scc_info_JsonRpcResponse_jsonrpc_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_jsonrpc_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_jsonrpc_2eproto = {
  false, false, descriptor_table_protodef_jsonrpc_2eproto, "jsonrpc.proto", 276,
  &descriptor_table_jsonrpc_2eproto_once, descriptor_table_jsonrpc_2eproto_sccs, descriptor_table_jsonrpc_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_jsonrpc_2eproto::offsets,
  file_level_metadata_jsonrpc_2eproto, 2, file_level_enum_descriptors_jsonrpc_2eproto, file_level_service_descriptors_jsonrpc_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_jsonrpc_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_jsonrpc_2eproto)), true);
namespace rpcdaemon {

// ===================================================================

void JsonRpcRequest::InitAsDefaultInstance() {
}
class JsonRpcRequest::_Internal {
 public:
};

JsonRpcRequest::JsonRpcRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:rpcdaemon.JsonRpcRequest)
}
JsonRpcRequest::JsonRpcRequest(const JsonRpcRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  jsonrpc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_jsonrpc().empty()) {
    jsonrpc_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_jsonrpc(),
      GetArena());
  }
  method_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_method().empty()) {
    method_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_method(),
      GetArena());
  }
  params_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_params().empty()) {
    params_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_params(),
      GetArena());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:rpcdaemon.JsonRpcRequest)
}

void JsonRpcRequest::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_JsonRpcRequest_jsonrpc_2eproto.base);
  jsonrpc_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  method_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  params_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  id_ = PROTOBUF_ULONGLONG(0);
}

JsonRpcRequest::~JsonRpcRequest() {
  // @@protoc_insertion_point(destructor:rpcdaemon.JsonRpcRequest)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void JsonRpcRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  jsonrpc_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  method_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  params_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void JsonRpcRequest::ArenaDtor(void* object) {
  JsonRpcRequest* _this = reinterpret_cast< JsonRpcRequest* >(object);
  (void)_this;
}
void JsonRpcRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void JsonRpcRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const JsonRpcRequest& JsonRpcRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_JsonRpcRequest_jsonrpc_2eproto.base);
  return *internal_default_instance();
}


void JsonRpcRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:rpcdaemon.JsonRpcRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  jsonrpc_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  method_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  params_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  id_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* JsonRpcRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string jsonrpc = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_jsonrpc();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "rpcdaemon.JsonRpcRequest.jsonrpc"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string method = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_method();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "rpcdaemon.JsonRpcRequest.method"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string params = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_params();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "rpcdaemon.JsonRpcRequest.params"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 id = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* JsonRpcRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rpcdaemon.JsonRpcRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string jsonrpc = 1;
  if (this->jsonrpc().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_jsonrpc().data(), static_cast<int>(this->_internal_jsonrpc().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "rpcdaemon.JsonRpcRequest.jsonrpc");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_jsonrpc(), target);
  }

  // string method = 3;
  if (this->method().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_method().data(), static_cast<int>(this->_internal_method().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "rpcdaemon.JsonRpcRequest.method");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_method(), target);
  }

  // string params = 5;
  if (this->params().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_params().data(), static_cast<int>(this->_internal_params().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "rpcdaemon.JsonRpcRequest.params");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_params(), target);
  }

  // uint64 id = 7;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(7, this->_internal_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpcdaemon.JsonRpcRequest)
  return target;
}

size_t JsonRpcRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rpcdaemon.JsonRpcRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string jsonrpc = 1;
  if (this->jsonrpc().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_jsonrpc());
  }

  // string method = 3;
  if (this->method().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_method());
  }

  // string params = 5;
  if (this->params().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_params());
  }

  // uint64 id = 7;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void JsonRpcRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:rpcdaemon.JsonRpcRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const JsonRpcRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<JsonRpcRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:rpcdaemon.JsonRpcRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:rpcdaemon.JsonRpcRequest)
    MergeFrom(*source);
  }
}

void JsonRpcRequest::MergeFrom(const JsonRpcRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rpcdaemon.JsonRpcRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.jsonrpc().size() > 0) {
    _internal_set_jsonrpc(from._internal_jsonrpc());
  }
  if (from.method().size() > 0) {
    _internal_set_method(from._internal_method());
  }
  if (from.params().size() > 0) {
    _internal_set_params(from._internal_params());
  }
  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
}

void JsonRpcRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:rpcdaemon.JsonRpcRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JsonRpcRequest::CopyFrom(const JsonRpcRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rpcdaemon.JsonRpcRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JsonRpcRequest::IsInitialized() const {
  return true;
}

void JsonRpcRequest::InternalSwap(JsonRpcRequest* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  jsonrpc_.Swap(&other->jsonrpc_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  method_.Swap(&other->method_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  params_.Swap(&other->params_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata JsonRpcRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void JsonRpcResponse::InitAsDefaultInstance() {
}
class JsonRpcResponse::_Internal {
 public:
};

JsonRpcResponse::JsonRpcResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:rpcdaemon.JsonRpcResponse)
}
JsonRpcResponse::JsonRpcResponse(const JsonRpcResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  result_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_result().empty()) {
    result_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_result(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:rpcdaemon.JsonRpcResponse)
}

void JsonRpcResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_JsonRpcResponse_jsonrpc_2eproto.base);
  result_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

JsonRpcResponse::~JsonRpcResponse() {
  // @@protoc_insertion_point(destructor:rpcdaemon.JsonRpcResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void JsonRpcResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  result_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void JsonRpcResponse::ArenaDtor(void* object) {
  JsonRpcResponse* _this = reinterpret_cast< JsonRpcResponse* >(object);
  (void)_this;
}
void JsonRpcResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void JsonRpcResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const JsonRpcResponse& JsonRpcResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_JsonRpcResponse_jsonrpc_2eproto.base);
  return *internal_default_instance();
}


void JsonRpcResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:rpcdaemon.JsonRpcResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* JsonRpcResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_result();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "rpcdaemon.JsonRpcResponse.result"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* JsonRpcResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:rpcdaemon.JsonRpcResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (this->result().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_result().data(), static_cast<int>(this->_internal_result().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "rpcdaemon.JsonRpcResponse.result");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_result(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:rpcdaemon.JsonRpcResponse)
  return target;
}

size_t JsonRpcResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:rpcdaemon.JsonRpcResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string result = 1;
  if (this->result().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_result());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void JsonRpcResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:rpcdaemon.JsonRpcResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const JsonRpcResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<JsonRpcResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:rpcdaemon.JsonRpcResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:rpcdaemon.JsonRpcResponse)
    MergeFrom(*source);
  }
}

void JsonRpcResponse::MergeFrom(const JsonRpcResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:rpcdaemon.JsonRpcResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result().size() > 0) {
    _internal_set_result(from._internal_result());
  }
}

void JsonRpcResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:rpcdaemon.JsonRpcResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JsonRpcResponse::CopyFrom(const JsonRpcResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:rpcdaemon.JsonRpcResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JsonRpcResponse::IsInitialized() const {
  return true;
}

void JsonRpcResponse::InternalSwap(JsonRpcResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  result_.Swap(&other->result_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata JsonRpcResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rpcdaemon
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::rpcdaemon::JsonRpcRequest* Arena::CreateMaybeMessage< ::rpcdaemon::JsonRpcRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rpcdaemon::JsonRpcRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::rpcdaemon::JsonRpcResponse* Arena::CreateMaybeMessage< ::rpcdaemon::JsonRpcResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::rpcdaemon::JsonRpcResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>