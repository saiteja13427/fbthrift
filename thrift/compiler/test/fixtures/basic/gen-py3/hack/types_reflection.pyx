#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)

cimport facebook.thrift.annotation.scope.types as _facebook_thrift_annotation_scope_types

cimport hack.types as _hack_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__FieldWrapper():
    cdef _hack_types.FieldWrapper defaults = _hack_types.FieldWrapper._fbthrift_create(
        constant_shared_ptr[_hack_types.cFieldWrapper](
            default_inst[_hack_types.cFieldWrapper]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="FieldWrapper",
        kind=__StructType.STRUCT,
        annotations={
            """thrift.uri""": """facebook.com/thrift/annotation/hack/FieldWrapper""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="name",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__SkipCodegen():
    cdef _hack_types.SkipCodegen defaults = _hack_types.SkipCodegen._fbthrift_create(
        constant_shared_ptr[_hack_types.cSkipCodegen](
            default_inst[_hack_types.cSkipCodegen]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="SkipCodegen",
        kind=__StructType.STRUCT,
        annotations={
            """thrift.uri""": """facebook.com/thrift/annotation/hack/SkipCodegen""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="reason",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec