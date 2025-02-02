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
    ::test::fixtures::patch::InnerUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}

template<>
const std::vector<std::pair<std::string_view, std::string_view>>& PyEnumTraits<
    ::test::fixtures::patch::MyUnion::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> pairs {
    {
    }
  };
  return *pairs;
}


template<>
void reset_field<::test::fixtures::patch::MyData>(
    ::test::fixtures::patch::MyData& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.data1_ref().copy_from(default_inst<::test::fixtures::patch::MyData>().data1_ref());
      return;
    case 1:
      obj.data2_ref().copy_from(default_inst<::test::fixtures::patch::MyData>().data2_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyStruct>(
    ::test::fixtures::patch::MyStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.boolVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().boolVal_ref());
      return;
    case 1:
      obj.byteVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().byteVal_ref());
      return;
    case 2:
      obj.i16Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().i16Val_ref());
      return;
    case 3:
      obj.i32Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().i32Val_ref());
      return;
    case 4:
      obj.i64Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().i64Val_ref());
      return;
    case 5:
      obj.floatVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().floatVal_ref());
      return;
    case 6:
      obj.doubleVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().doubleVal_ref());
      return;
    case 7:
      obj.stringVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().stringVal_ref());
      return;
    case 8:
      obj.binaryVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().binaryVal_ref());
      return;
    case 9:
      obj.structVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().structVal_ref());
      return;
    case 10:
      obj.optBoolVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optBoolVal_ref());
      return;
    case 11:
      obj.optByteVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optByteVal_ref());
      return;
    case 12:
      obj.optI16Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optI16Val_ref());
      return;
    case 13:
      obj.optI32Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optI32Val_ref());
      return;
    case 14:
      obj.optI64Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optI64Val_ref());
      return;
    case 15:
      obj.optFloatVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optFloatVal_ref());
      return;
    case 16:
      obj.optDoubleVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optDoubleVal_ref());
      return;
    case 17:
      obj.optStringVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optStringVal_ref());
      return;
    case 18:
      obj.optBinaryVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optBinaryVal_ref());
      return;
    case 19:
      obj.optStructVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optStructVal_ref());
      return;
    case 20:
      obj.optListVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optListVal_ref());
      return;
    case 21:
      obj.optSetVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optSetVal_ref());
      return;
    case 22:
      obj.optMapVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().optMapVal_ref());
      return;
    case 23:
      obj.unionVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStruct>().unionVal_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyDataPatch>(
    ::test::fixtures::patch::MyDataPatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.data1_ref().copy_from(default_inst<::test::fixtures::patch::MyDataPatch>().data1_ref());
      return;
    case 1:
      obj.data2_ref().copy_from(default_inst<::test::fixtures::patch::MyDataPatch>().data2_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyDataValuePatch>(
    ::test::fixtures::patch::MyDataValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::test::fixtures::patch::MyDataValuePatch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::MyDataValuePatch>().clear_ref());
      return;
    case 2:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::MyDataValuePatch>().patch_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::OptionalMyDataValuePatch>(
    ::test::fixtures::patch::OptionalMyDataValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyDataValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyDataValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyDataValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyDataValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::InnerUnionPatch>(
    ::test::fixtures::patch::InnerUnionPatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.innerOption_ref().copy_from(default_inst<::test::fixtures::patch::InnerUnionPatch>().innerOption_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::InnerUnionValuePatch>(
    ::test::fixtures::patch::InnerUnionValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::InnerUnionValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::InnerUnionValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::InnerUnionValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::InnerUnionValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::OptionalInnerUnionValuePatch>(
    ::test::fixtures::patch::OptionalInnerUnionValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::OptionalInnerUnionValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::OptionalInnerUnionValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::OptionalInnerUnionValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::OptionalInnerUnionValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyUnionPatch>(
    ::test::fixtures::patch::MyUnionPatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.option1_ref().copy_from(default_inst<::test::fixtures::patch::MyUnionPatch>().option1_ref());
      return;
    case 1:
      obj.option2_ref().copy_from(default_inst<::test::fixtures::patch::MyUnionPatch>().option2_ref());
      return;
    case 2:
      obj.option3_ref().copy_from(default_inst<::test::fixtures::patch::MyUnionPatch>().option3_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyUnionValuePatch>(
    ::test::fixtures::patch::MyUnionValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::MyUnionValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::MyUnionValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::MyUnionValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::MyUnionValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::OptionalMyUnionValuePatch>(
    ::test::fixtures::patch::OptionalMyUnionValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyUnionValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyUnionValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyUnionValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyUnionValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyStructPatch>(
    ::test::fixtures::patch::MyStructPatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.boolVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().boolVal_ref());
      return;
    case 1:
      obj.byteVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().byteVal_ref());
      return;
    case 2:
      obj.i16Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().i16Val_ref());
      return;
    case 3:
      obj.i32Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().i32Val_ref());
      return;
    case 4:
      obj.i64Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().i64Val_ref());
      return;
    case 5:
      obj.floatVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().floatVal_ref());
      return;
    case 6:
      obj.doubleVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().doubleVal_ref());
      return;
    case 7:
      obj.stringVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().stringVal_ref());
      return;
    case 8:
      obj.binaryVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().binaryVal_ref());
      return;
    case 9:
      obj.structVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().structVal_ref());
      return;
    case 10:
      obj.optBoolVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optBoolVal_ref());
      return;
    case 11:
      obj.optByteVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optByteVal_ref());
      return;
    case 12:
      obj.optI16Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optI16Val_ref());
      return;
    case 13:
      obj.optI32Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optI32Val_ref());
      return;
    case 14:
      obj.optI64Val_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optI64Val_ref());
      return;
    case 15:
      obj.optFloatVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optFloatVal_ref());
      return;
    case 16:
      obj.optDoubleVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optDoubleVal_ref());
      return;
    case 17:
      obj.optStringVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optStringVal_ref());
      return;
    case 18:
      obj.optBinaryVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optBinaryVal_ref());
      return;
    case 19:
      obj.optStructVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optStructVal_ref());
      return;
    case 20:
      obj.optListVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optListVal_ref());
      return;
    case 21:
      obj.optSetVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optSetVal_ref());
      return;
    case 22:
      obj.optMapVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().optMapVal_ref());
      return;
    case 23:
      obj.unionVal_ref().copy_from(default_inst<::test::fixtures::patch::MyStructPatch>().unionVal_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyStructField21Patch>(
    ::test::fixtures::patch::MyStructField21Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField21Patch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField21Patch>().clear_ref());
      return;
    case 2:
      obj.prepend_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField21Patch>().prepend_ref());
      return;
    case 3:
      obj.append_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField21Patch>().append_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::OptionalMyStructField21Patch>(
    ::test::fixtures::patch::OptionalMyStructField21Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField21Patch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField21Patch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField21Patch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField21Patch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyStructField22Patch>(
    ::test::fixtures::patch::MyStructField22Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField22Patch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField22Patch>().clear_ref());
      return;
    case 2:
      obj.remove_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField22Patch>().remove_ref());
      return;
    case 3:
      obj.add_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField22Patch>().add_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::OptionalMyStructField22Patch>(
    ::test::fixtures::patch::OptionalMyStructField22Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField22Patch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField22Patch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField22Patch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField22Patch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyStructField23Patch>(
    ::test::fixtures::patch::MyStructField23Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField23Patch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField23Patch>().clear_ref());
      return;
    case 2:
      obj.put_ref().copy_from(default_inst<::test::fixtures::patch::MyStructField23Patch>().put_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::OptionalMyStructField23Patch>(
    ::test::fixtures::patch::OptionalMyStructField23Patch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField23Patch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField23Patch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField23Patch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructField23Patch>().patchAfter_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::MyStructValuePatch>(
    ::test::fixtures::patch::MyStructValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.assign_ref().copy_from(default_inst<::test::fixtures::patch::MyStructValuePatch>().assign_ref());
      return;
    case 1:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::MyStructValuePatch>().clear_ref());
      return;
    case 2:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::MyStructValuePatch>().patch_ref());
      return;
  }
}

template<>
void reset_field<::test::fixtures::patch::OptionalMyStructValuePatch>(
    ::test::fixtures::patch::OptionalMyStructValuePatch& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.clear_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructValuePatch>().clear_ref());
      return;
    case 1:
      obj.patch_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructValuePatch>().patch_ref());
      return;
    case 2:
      obj.ensure_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructValuePatch>().ensure_ref());
      return;
    case 3:
      obj.patchAfter_ref().copy_from(default_inst<::test::fixtures::patch::OptionalMyStructValuePatch>().patchAfter_ref());
      return;
  }
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyData>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::InnerUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyUnion>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyDataPatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyDataValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::OptionalMyDataValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::InnerUnionPatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::InnerUnionValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::OptionalInnerUnionValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyUnionPatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyUnionValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::OptionalMyUnionValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyStructPatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyStructField21Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::OptionalMyStructField21Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyStructField22Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::OptionalMyStructField22Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyStructField23Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::OptionalMyStructField23Patch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::MyStructValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::test::fixtures::patch::OptionalMyStructValuePatch>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
