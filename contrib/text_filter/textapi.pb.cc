// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: textapi.proto

#include "textapi.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace textapi {
        template <typename>
PROTOBUF_CONSTEXPR TextApiRequest::TextApiRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_.md5_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.text_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_._cached_size_)*/ {},
    } {}
struct TextApiRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TextApiRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TextApiRequestDefaultTypeInternal() {}
  union {
    TextApiRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TextApiRequestDefaultTypeInternal _TextApiRequest_default_instance_;
        template <typename>
PROTOBUF_CONSTEXPR TextApiResponse::TextApiResponse(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_.message_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_._cached_size_)*/ {},
    } {}
struct TextApiResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TextApiResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TextApiResponseDefaultTypeInternal() {}
  union {
    TextApiResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TextApiResponseDefaultTypeInternal _TextApiResponse_default_instance_;
}  // namespace textapi
static ::_pb::Metadata file_level_metadata_textapi_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_textapi_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_textapi_2eproto = nullptr;
const ::uint32_t TableStruct_textapi_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::textapi::TextApiRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::textapi::TextApiRequest, _impl_.md5_),
    PROTOBUF_FIELD_OFFSET(::textapi::TextApiRequest, _impl_.text_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::textapi::TextApiResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::textapi::TextApiResponse, _impl_.message_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::textapi::TextApiRequest)},
        {10, -1, -1, sizeof(::textapi::TextApiResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::textapi::_TextApiRequest_default_instance_._instance,
    &::textapi::_TextApiResponse_default_instance_._instance,
};
const char descriptor_table_protodef_textapi_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\rtextapi.proto\022\007textapi\"+\n\016TextApiReque"
    "st\022\013\n\003md5\030\001 \001(\t\022\014\n\004text\030\002 \001(\t\"\"\n\017TextApi"
    "Response\022\017\n\007message\030\001 \001(\t2I\n\007TextApi\022>\n\007"
    "TextReq\022\027.textapi.TextApiRequest\032\030.texta"
    "pi.TextApiResponse\"\000B\tZ\007textapib\006proto3"
};
static ::absl::once_flag descriptor_table_textapi_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_textapi_2eproto = {
    false,
    false,
    199,
    descriptor_table_protodef_textapi_2eproto,
    "textapi.proto",
    &descriptor_table_textapi_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_textapi_2eproto::offsets,
    file_level_metadata_textapi_2eproto,
    file_level_enum_descriptors_textapi_2eproto,
    file_level_service_descriptors_textapi_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_textapi_2eproto_getter() {
  return &descriptor_table_textapi_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_textapi_2eproto(&descriptor_table_textapi_2eproto);
namespace textapi {
// ===================================================================

class TextApiRequest::_Internal {
 public:
};

TextApiRequest::TextApiRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:textapi.TextApiRequest)
}
TextApiRequest::TextApiRequest(const TextApiRequest& from) : ::google::protobuf::Message() {
  TextApiRequest* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.md5_){},
      decltype(_impl_.text_){},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  _impl_.md5_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.md5_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_md5().empty()) {
    _this->_impl_.md5_.Set(from._internal_md5(), _this->GetArenaForAllocation());
  }
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.text_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_text().empty()) {
    _this->_impl_.text_.Set(from._internal_text(), _this->GetArenaForAllocation());
  }

  // @@protoc_insertion_point(copy_constructor:textapi.TextApiRequest)
}
inline void TextApiRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.md5_){},
      decltype(_impl_.text_){},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _impl_.md5_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.md5_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.text_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
TextApiRequest::~TextApiRequest() {
  // @@protoc_insertion_point(destructor:textapi.TextApiRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TextApiRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.md5_.Destroy();
  _impl_.text_.Destroy();
}
void TextApiRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void TextApiRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:textapi.TextApiRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.md5_.ClearToEmpty();
  _impl_.text_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TextApiRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 38, 2> TextApiRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TextApiRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string text = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(TextApiRequest, _impl_.text_)}},
    // string md5 = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TextApiRequest, _impl_.md5_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string md5 = 1;
    {PROTOBUF_FIELD_OFFSET(TextApiRequest, _impl_.md5_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string text = 2;
    {PROTOBUF_FIELD_OFFSET(TextApiRequest, _impl_.text_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\26\3\4\0\0\0\0\0"
    "textapi.TextApiRequest"
    "md5"
    "text"
  }},
};

::uint8_t* TextApiRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:textapi.TextApiRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string md5 = 1;
  if (!this->_internal_md5().empty()) {
    const std::string& _s = this->_internal_md5();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "textapi.TextApiRequest.md5");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string text = 2;
  if (!this->_internal_text().empty()) {
    const std::string& _s = this->_internal_text();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "textapi.TextApiRequest.text");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:textapi.TextApiRequest)
  return target;
}

::size_t TextApiRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:textapi.TextApiRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string md5 = 1;
  if (!this->_internal_md5().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_md5());
  }

  // string text = 2;
  if (!this->_internal_text().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_text());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TextApiRequest::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    TextApiRequest::MergeImpl
};
const ::google::protobuf::Message::ClassData*TextApiRequest::GetClassData() const { return &_class_data_; }


void TextApiRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TextApiRequest*>(&to_msg);
  auto& from = static_cast<const TextApiRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:textapi.TextApiRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_md5().empty()) {
    _this->_internal_set_md5(from._internal_md5());
  }
  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TextApiRequest::CopyFrom(const TextApiRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:textapi.TextApiRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TextApiRequest::IsInitialized() const {
  return true;
}

void TextApiRequest::InternalSwap(TextApiRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.md5_, lhs_arena,
                                       &other->_impl_.md5_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.text_, lhs_arena,
                                       &other->_impl_.text_, rhs_arena);
}

::google::protobuf::Metadata TextApiRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_textapi_2eproto_getter, &descriptor_table_textapi_2eproto_once,
      file_level_metadata_textapi_2eproto[0]);
}
// ===================================================================

class TextApiResponse::_Internal {
 public:
};

TextApiResponse::TextApiResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:textapi.TextApiResponse)
}
TextApiResponse::TextApiResponse(const TextApiResponse& from) : ::google::protobuf::Message() {
  TextApiResponse* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_message().empty()) {
    _this->_impl_.message_.Set(from._internal_message(), _this->GetArenaForAllocation());
  }

  // @@protoc_insertion_point(copy_constructor:textapi.TextApiResponse)
}
inline void TextApiResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.message_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
TextApiResponse::~TextApiResponse() {
  // @@protoc_insertion_point(destructor:textapi.TextApiResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TextApiResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.message_.Destroy();
}
void TextApiResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void TextApiResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:textapi.TextApiResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TextApiResponse::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 39, 2> TextApiResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TextApiResponse_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string message = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TextApiResponse, _impl_.message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string message = 1;
    {PROTOBUF_FIELD_OFFSET(TextApiResponse, _impl_.message_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\27\7\0\0\0\0\0\0"
    "textapi.TextApiResponse"
    "message"
  }},
};

::uint8_t* TextApiResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:textapi.TextApiResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    const std::string& _s = this->_internal_message();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "textapi.TextApiResponse.message");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:textapi.TextApiResponse)
  return target;
}

::size_t TextApiResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:textapi.TextApiResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TextApiResponse::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    TextApiResponse::MergeImpl
};
const ::google::protobuf::Message::ClassData*TextApiResponse::GetClassData() const { return &_class_data_; }


void TextApiResponse::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TextApiResponse*>(&to_msg);
  auto& from = static_cast<const TextApiResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:textapi.TextApiResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TextApiResponse::CopyFrom(const TextApiResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:textapi.TextApiResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TextApiResponse::IsInitialized() const {
  return true;
}

void TextApiResponse::InternalSwap(TextApiResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, lhs_arena,
                                       &other->_impl_.message_, rhs_arena);
}

::google::protobuf::Metadata TextApiResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_textapi_2eproto_getter, &descriptor_table_textapi_2eproto_once,
      file_level_metadata_textapi_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace textapi
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"