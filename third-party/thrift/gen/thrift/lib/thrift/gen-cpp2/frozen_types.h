/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct layoutId;
struct offset;
struct size;
struct bits;
struct fields;
struct typeName;
struct fileVersion;
struct relaxTypeChecks;
struct layouts;
struct rootLayout;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_layoutId
#define APACHE_THRIFT_ACCESSOR_layoutId
APACHE_THRIFT_DEFINE_ACCESSOR(layoutId);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_offset
#define APACHE_THRIFT_ACCESSOR_offset
APACHE_THRIFT_DEFINE_ACCESSOR(offset);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_size
#define APACHE_THRIFT_ACCESSOR_size
APACHE_THRIFT_DEFINE_ACCESSOR(size);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_bits
#define APACHE_THRIFT_ACCESSOR_bits
APACHE_THRIFT_DEFINE_ACCESSOR(bits);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fields
#define APACHE_THRIFT_ACCESSOR_fields
APACHE_THRIFT_DEFINE_ACCESSOR(fields);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_typeName
#define APACHE_THRIFT_ACCESSOR_typeName
APACHE_THRIFT_DEFINE_ACCESSOR(typeName);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fileVersion
#define APACHE_THRIFT_ACCESSOR_fileVersion
APACHE_THRIFT_DEFINE_ACCESSOR(fileVersion);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_relaxTypeChecks
#define APACHE_THRIFT_ACCESSOR_relaxTypeChecks
APACHE_THRIFT_DEFINE_ACCESSOR(relaxTypeChecks);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_layouts
#define APACHE_THRIFT_ACCESSOR_layouts
APACHE_THRIFT_DEFINE_ACCESSOR(layouts);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_rootLayout
#define APACHE_THRIFT_ACCESSOR_rootLayout
APACHE_THRIFT_DEFINE_ACCESSOR(rootLayout);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace apache { namespace thrift { namespace frozen { namespace schema {
class Field;
class Layout;
class Schema;
}}}} // apache::thrift::frozen::schema
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace apache { namespace thrift { namespace frozen { namespace schema {
class Field final : private apache::thrift::detail::st::ComparisonOperators<Field> {
 public:

  Field() :
      layoutId(0),
      offset(static_cast<int16_t>(0)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Field(apache::thrift::FragileConstructor, int16_t layoutId__arg, int16_t offset__arg);

  Field(Field&&) = default;

  Field(const Field&) = default;

  Field& operator=(Field&&) = default;

  Field& operator=(const Field&) = default;
  void __clear();
 public:
  int16_t layoutId;
 public:
  int16_t offset;

 public:
  struct __isset {
    bool layoutId;
    bool offset;
  } __isset = {};
  bool operator==(const Field& rhs) const;
  bool operator<(const Field& rhs) const;

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> layoutId_ref() const& {
    return {this->layoutId, __isset.layoutId};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> layoutId_ref() const&& {
    return {std::move(this->layoutId), __isset.layoutId};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> layoutId_ref() & {
    return {this->layoutId, __isset.layoutId};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> layoutId_ref() && {
    return {std::move(this->layoutId), __isset.layoutId};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> offset_ref() const& {
    return {this->offset, __isset.offset};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> offset_ref() const&& {
    return {std::move(this->offset), __isset.offset};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> offset_ref() & {
    return {this->offset, __isset.offset};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> offset_ref() && {
    return {std::move(this->offset), __isset.offset};
  }

  int16_t get_layoutId() const {
    return layoutId;
  }

  int16_t& set_layoutId(int16_t layoutId_) {
    layoutId = layoutId_;
    __isset.layoutId = true;
    return layoutId;
  }

  int16_t get_offset() const {
    return offset;
  }

  int16_t& set_offset(int16_t offset_) {
    offset = offset_;
    __isset.offset = true;
    return offset;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Field >;
};

void swap(Field& a, Field& b);

template <class Protocol_>
uint32_t Field::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}}} // apache::thrift::frozen::schema
namespace apache { namespace thrift { namespace frozen { namespace schema {
class Layout final : private apache::thrift::detail::st::ComparisonOperators<Layout> {
 public:

  Layout() :
      size(0),
      bits(static_cast<int16_t>(0)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Layout(apache::thrift::FragileConstructor, int32_t size__arg, int16_t bits__arg, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field> fields__arg, ::std::string typeName__arg);

  Layout(Layout&&) = default;

  Layout(const Layout&) = default;

  Layout& operator=(Layout&&) = default;

  Layout& operator=(const Layout&) = default;
  void __clear();
 public:
  int32_t size;
 public:
  int16_t bits;
 public:
  ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field> fields;
 public:
  ::std::string typeName;

 public:
  struct __isset {
    bool size;
    bool bits;
    bool fields;
    bool typeName;
  } __isset = {};
  bool operator==(const Layout& rhs) const;
  bool operator<(const Layout& rhs) const;

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> size_ref() const& {
    return {this->size, __isset.size};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> size_ref() const&& {
    return {std::move(this->size), __isset.size};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> size_ref() & {
    return {this->size, __isset.size};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> size_ref() && {
    return {std::move(this->size), __isset.size};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> bits_ref() const& {
    return {this->bits, __isset.bits};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> bits_ref() const&& {
    return {std::move(this->bits), __isset.bits};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> bits_ref() & {
    return {this->bits, __isset.bits};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> bits_ref() && {
    return {std::move(this->bits), __isset.bits};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fields_ref() const& {
    return {this->fields, __isset.fields};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fields_ref() const&& {
    return {std::move(this->fields), __isset.fields};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fields_ref() & {
    return {this->fields, __isset.fields};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fields_ref() && {
    return {std::move(this->fields), __isset.fields};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> typeName_ref() const& {
    return {this->typeName, __isset.typeName};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> typeName_ref() const&& {
    return {std::move(this->typeName), __isset.typeName};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> typeName_ref() & {
    return {this->typeName, __isset.typeName};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> typeName_ref() && {
    return {std::move(this->typeName), __isset.typeName};
  }

  int32_t get_size() const {
    return size;
  }

  int32_t& set_size(int32_t size_) {
    size = size_;
    __isset.size = true;
    return size;
  }

  int16_t get_bits() const {
    return bits;
  }

  int16_t& set_bits(int16_t bits_) {
    bits = bits_;
    __isset.bits = true;
    return bits;
  }
  const ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>& get_fields() const&;
  ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field> get_fields() &&;

  template <typename T_Layout_fields_struct_setter = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>>
  ::std::map<int16_t,  ::apache::thrift::frozen::schema::Field>& set_fields(T_Layout_fields_struct_setter&& fields_) {
    fields = std::forward<T_Layout_fields_struct_setter>(fields_);
    __isset.fields = true;
    return fields;
  }

  const ::std::string& get_typeName() const& {
    return typeName;
  }

  ::std::string get_typeName() && {
    return std::move(typeName);
  }

  template <typename T_Layout_typeName_struct_setter = ::std::string>
  ::std::string& set_typeName(T_Layout_typeName_struct_setter&& typeName_) {
    typeName = std::forward<T_Layout_typeName_struct_setter>(typeName_);
    __isset.typeName = true;
    return typeName;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Layout >;
};

void swap(Layout& a, Layout& b);

template <class Protocol_>
uint32_t Layout::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}}} // apache::thrift::frozen::schema
namespace apache { namespace thrift { namespace frozen { namespace schema {
class Schema final : private apache::thrift::detail::st::ComparisonOperators<Schema> {
 public:

  Schema() :
      fileVersion(0),
      relaxTypeChecks(0),
      rootLayout(static_cast<int16_t>(0)) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Schema(apache::thrift::FragileConstructor, int32_t fileVersion__arg, bool relaxTypeChecks__arg, ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout> layouts__arg, int16_t rootLayout__arg);

  Schema(Schema&&) = default;

  Schema(const Schema&) = default;

  Schema& operator=(Schema&&) = default;

  Schema& operator=(const Schema&) = default;
  void __clear();
 public:
  int32_t fileVersion;
 public:
  bool relaxTypeChecks;
 public:
  ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout> layouts;
 public:
  int16_t rootLayout;

 public:
  struct __isset {
    bool fileVersion;
    bool relaxTypeChecks;
    bool layouts;
    bool rootLayout;
  } __isset = {};
  bool operator==(const Schema& rhs) const;
  bool operator<(const Schema& rhs) const;

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fileVersion_ref() const& {
    return {this->fileVersion, __isset.fileVersion};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fileVersion_ref() const&& {
    return {std::move(this->fileVersion), __isset.fileVersion};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fileVersion_ref() & {
    return {this->fileVersion, __isset.fileVersion};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fileVersion_ref() && {
    return {std::move(this->fileVersion), __isset.fileVersion};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> relaxTypeChecks_ref() const& {
    return {this->relaxTypeChecks, __isset.relaxTypeChecks};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> relaxTypeChecks_ref() const&& {
    return {std::move(this->relaxTypeChecks), __isset.relaxTypeChecks};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> relaxTypeChecks_ref() & {
    return {this->relaxTypeChecks, __isset.relaxTypeChecks};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> relaxTypeChecks_ref() && {
    return {std::move(this->relaxTypeChecks), __isset.relaxTypeChecks};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> layouts_ref() const& {
    return {this->layouts, __isset.layouts};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> layouts_ref() const&& {
    return {std::move(this->layouts), __isset.layouts};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> layouts_ref() & {
    return {this->layouts, __isset.layouts};
  }

  template <typename..., typename T = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> layouts_ref() && {
    return {std::move(this->layouts), __isset.layouts};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> rootLayout_ref() const& {
    return {this->rootLayout, __isset.rootLayout};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> rootLayout_ref() const&& {
    return {std::move(this->rootLayout), __isset.rootLayout};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> rootLayout_ref() & {
    return {this->rootLayout, __isset.rootLayout};
  }

  template <typename..., typename T = int16_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> rootLayout_ref() && {
    return {std::move(this->rootLayout), __isset.rootLayout};
  }

  int32_t get_fileVersion() const {
    return fileVersion;
  }

  int32_t& set_fileVersion(int32_t fileVersion_) {
    fileVersion = fileVersion_;
    __isset.fileVersion = true;
    return fileVersion;
  }

  bool get_relaxTypeChecks() const {
    return relaxTypeChecks;
  }

  bool& set_relaxTypeChecks(bool relaxTypeChecks_) {
    relaxTypeChecks = relaxTypeChecks_;
    __isset.relaxTypeChecks = true;
    return relaxTypeChecks;
  }
  const ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>& get_layouts() const&;
  ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout> get_layouts() &&;

  template <typename T_Schema_layouts_struct_setter = ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>>
  ::std::map<int16_t,  ::apache::thrift::frozen::schema::Layout>& set_layouts(T_Schema_layouts_struct_setter&& layouts_) {
    layouts = std::forward<T_Schema_layouts_struct_setter>(layouts_);
    __isset.layouts = true;
    return layouts;
  }

  int16_t get_rootLayout() const {
    return rootLayout;
  }

  int16_t& set_rootLayout(int16_t rootLayout_) {
    rootLayout = rootLayout_;
    __isset.rootLayout = true;
    return rootLayout;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Schema >;
};

void swap(Schema& a, Schema& b);

template <class Protocol_>
uint32_t Schema::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}}} // apache::thrift::frozen::schema
