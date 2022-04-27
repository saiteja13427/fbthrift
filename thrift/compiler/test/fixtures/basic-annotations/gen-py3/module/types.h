/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "src/gen-cpp2/module_data.h"
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {


template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::YourEnum>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}


template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::cpp2::MyUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}


template<>
void reset_field<::cpp2::MyStructNestedAnnotation>(
    ::cpp2::MyStructNestedAnnotation& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::cpp2::MyStructNestedAnnotation>().name_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::MyException>(
    ::cpp2::MyException& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
void reset_field<::cpp2::MyStruct>(
    ::cpp2::MyStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.majorVer_ref().copy_from(default_inst<::cpp2::MyStruct>().majorVer_ref());
      return;
    case 1:
      obj.package_ref().copy_from(default_inst<::cpp2::MyStruct>().package_ref());
      return;
    case 2:
      obj.annotation_with_quote_ref().copy_from(default_inst<::cpp2::MyStruct>().annotation_with_quote_ref());
      return;
    case 3:
      obj.class__ref().copy_from(default_inst<::cpp2::MyStruct>().class__ref());
      return;
    case 4:
      obj.annotation_with_trailing_comma_ref().copy_from(default_inst<::cpp2::MyStruct>().annotation_with_trailing_comma_ref());
      return;
    case 5:
      obj.empty_annotations_ref().copy_from(default_inst<::cpp2::MyStruct>().empty_annotations_ref());
      return;
    case 6:
      obj.my_enum_ref().copy_from(default_inst<::cpp2::MyStruct>().my_enum_ref());
      return;
    case 7:
      obj.cpp_type_annotation_ref().copy_from(default_inst<::cpp2::MyStruct>().cpp_type_annotation_ref());
      return;
    case 8:
      obj.my_union_ref().copy_from(default_inst<::cpp2::MyStruct>().my_union_ref());
      return;
  }
}

template<>
void reset_field<::cpp2::SecretStruct>(
    ::cpp2::SecretStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.id_ref().copy_from(default_inst<::cpp2::SecretStruct>().id_ref());
      return;
    case 1:
      obj.password_ref().copy_from(default_inst<::cpp2::SecretStruct>().password_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStructNestedAnnotation>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyException>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::MyStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::SecretStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
