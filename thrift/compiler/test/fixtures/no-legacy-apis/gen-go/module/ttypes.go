// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	thrift0 "thrift/annotation/thrift"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = thrift0.GoUnusedProtection__
var GoUnusedProtection__ int;

type MyEnum int64
const (
  MyEnum_MyValue1 MyEnum = 0
  MyEnum_MyValue2 MyEnum = 1
)

var MyEnumToName = map[MyEnum]string {
  MyEnum_MyValue1: "MyValue1",
  MyEnum_MyValue2: "MyValue2",
}

var MyEnumToValue = map[string]MyEnum {
  "MyValue1": MyEnum_MyValue1,
  "MyValue2": MyEnum_MyValue2,
}

var MyEnumNames = []string {
  "MyValue1",
  "MyValue2",
}

var MyEnumValues = []MyEnum {
  MyEnum_MyValue1,
  MyEnum_MyValue2,
}

func (p MyEnum) String() string {
  if v, ok := MyEnumToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func MyEnumFromString(s string) (MyEnum, error) {
  if v, ok := MyEnumToValue[s]; ok {
    return v, nil
  }
  return MyEnum(0), fmt.Errorf("not a valid MyEnum string")
}

func MyEnumPtr(v MyEnum) *MyEnum { return &v }

// Attributes:
//  - MyIntField
//  - MyStringField
type MyStruct struct {
  MyIntField int64 `thrift:"myIntField,1" db:"myIntField" json:"myIntField"`
  MyStringField string `thrift:"myStringField,2" db:"myStringField" json:"myStringField"`
}

func NewMyStruct() *MyStruct {
  return &MyStruct{}
}


func (p *MyStruct) GetMyIntField() int64 {
  return p.MyIntField
}

func (p *MyStruct) GetMyStringField() string {
  return p.MyStringField
}
type MyStructBuilder struct {
  obj *MyStruct
}

func NewMyStructBuilder() *MyStructBuilder{
  return &MyStructBuilder{
    obj: NewMyStruct(),
  }
}

func (p MyStructBuilder) Emit() *MyStruct{
  return &MyStruct{
    MyIntField: p.obj.MyIntField,
    MyStringField: p.obj.MyStringField,
  }
}

func (m *MyStructBuilder) MyIntField(myIntField int64) *MyStructBuilder {
  m.obj.MyIntField = myIntField
  return m
}

func (m *MyStructBuilder) MyStringField(myStringField string) *MyStructBuilder {
  m.obj.MyStringField = myStringField
  return m
}

func (m *MyStruct) SetMyIntField(myIntField int64) *MyStruct {
  m.MyIntField = myIntField
  return m
}

func (m *MyStruct) SetMyStringField(myStringField string) *MyStruct {
  m.MyStringField = myStringField
  return m
}

func (p *MyStruct) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyStruct)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI64(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.MyIntField = v
  }
  return nil
}

func (p *MyStruct)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 2: ", err)
  } else {
    p.MyStringField = v
  }
  return nil
}

func (p *MyStruct) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("MyStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyStruct) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("myIntField", thrift.I64, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:myIntField: ", p), err) }
  if err := oprot.WriteI64(int64(p.MyIntField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.myIntField (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:myIntField: ", p), err) }
  return err
}

func (p *MyStruct) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("myStringField", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:myStringField: ", p), err) }
  if err := oprot.WriteString(string(p.MyStringField)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.myStringField (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:myStringField: ", p), err) }
  return err
}

func (p *MyStruct) String() string {
  if p == nil {
    return "<nil>"
  }

  myIntFieldVal := fmt.Sprintf("%v", p.MyIntField)
  myStringFieldVal := fmt.Sprintf("%v", p.MyStringField)
  return fmt.Sprintf("MyStruct({MyIntField:%s MyStringField:%s})", myIntFieldVal, myStringFieldVal)
}

// Attributes:
//  - MyEnum
//  - MyDataItem
type MyUnion struct {
  MyEnum *MyEnum `thrift:"myEnum,1,optional" db:"myEnum" json:"myEnum,omitempty"`
  MyDataItem *MyStruct `thrift:"myDataItem,2,optional" db:"myDataItem" json:"myDataItem,omitempty"`
}

func NewMyUnion() *MyUnion {
  return &MyUnion{}
}

var MyUnion_MyEnum_DEFAULT MyEnum
func (p *MyUnion) GetMyEnum() MyEnum {
  if !p.IsSetMyEnum() {
    return MyUnion_MyEnum_DEFAULT
  }
return *p.MyEnum
}
var MyUnion_MyDataItem_DEFAULT *MyStruct
func (p *MyUnion) GetMyDataItem() *MyStruct {
  if !p.IsSetMyDataItem() {
    return MyUnion_MyDataItem_DEFAULT
  }
return p.MyDataItem
}
func (p *MyUnion) CountSetFieldsMyUnion() int {
  count := 0
  if (p.IsSetMyEnum()) {
    count++
  }
  if (p.IsSetMyDataItem()) {
    count++
  }
  return count

}

func (p *MyUnion) IsSetMyEnum() bool {
  return p != nil && p.MyEnum != nil
}

func (p *MyUnion) IsSetMyDataItem() bool {
  return p != nil && p.MyDataItem != nil
}

type MyUnionBuilder struct {
  obj *MyUnion
}

func NewMyUnionBuilder() *MyUnionBuilder{
  return &MyUnionBuilder{
    obj: NewMyUnion(),
  }
}

func (p MyUnionBuilder) Emit() *MyUnion{
  return &MyUnion{
    MyEnum: p.obj.MyEnum,
    MyDataItem: p.obj.MyDataItem,
  }
}

func (m *MyUnionBuilder) MyEnum(myEnum *MyEnum) *MyUnionBuilder {
  m.obj.MyEnum = myEnum
  return m
}

func (m *MyUnionBuilder) MyDataItem(myDataItem *MyStruct) *MyUnionBuilder {
  m.obj.MyDataItem = myDataItem
  return m
}

func (m *MyUnion) SetMyEnum(myEnum *MyEnum) *MyUnion {
  m.MyEnum = myEnum
  return m
}

func (m *MyUnion) SetMyDataItem(myDataItem *MyStruct) *MyUnion {
  m.MyDataItem = myDataItem
  return m
}

func (p *MyUnion) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyUnion)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadI32(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    temp := MyEnum(v)
    p.MyEnum = &temp
  }
  return nil
}

func (p *MyUnion)  ReadField2(iprot thrift.Protocol) error {
  p.MyDataItem = NewMyStruct()
  if err := p.MyDataItem.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.MyDataItem), err)
  }
  return nil
}

func (p *MyUnion) Write(oprot thrift.Protocol) error {
  if c := p.CountSetFieldsMyUnion(); c > 1 {
    return fmt.Errorf("%T write union: no more than one field must be set (%d set).", p, c)
  }
  if err := oprot.WriteStructBegin("MyUnion"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyUnion) writeField1(oprot thrift.Protocol) (err error) {
  if p.IsSetMyEnum() {
    if err := oprot.WriteFieldBegin("myEnum", thrift.I32, 1); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:myEnum: ", p), err) }
    if err := oprot.WriteI32(int32(*p.MyEnum)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.myEnum (1) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 1:myEnum: ", p), err) }
  }
  return err
}

func (p *MyUnion) writeField2(oprot thrift.Protocol) (err error) {
  if p.IsSetMyDataItem() {
    if err := oprot.WriteFieldBegin("myDataItem", thrift.STRUCT, 2); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:myDataItem: ", p), err) }
    if err := p.MyDataItem.Write(oprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.MyDataItem), err)
    }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 2:myDataItem: ", p), err) }
  }
  return err
}

func (p *MyUnion) String() string {
  if p == nil {
    return "<nil>"
  }

  var myEnumVal string
  if p.MyEnum == nil {
    myEnumVal = "<nil>"
  } else {
    myEnumVal = fmt.Sprintf("%v", *p.MyEnum)
  }
  var myDataItemVal string
  if p.MyDataItem == nil {
    myDataItemVal = "<nil>"
  } else {
    myDataItemVal = fmt.Sprintf("%v", p.MyDataItem)
  }
  return fmt.Sprintf("MyUnion({MyEnum:%s MyDataItem:%s})", myEnumVal, myDataItemVal)
}
