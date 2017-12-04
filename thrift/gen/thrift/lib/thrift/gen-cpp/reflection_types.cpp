/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/lib/thrift/gen-cpp/reflection_types.h"
#include "thrift/lib/thrift/gen-cpp/reflection_data.h"

#include <algorithm>
#include <string.h>

#include <folly/Indestructible.h>

namespace apache { namespace thrift { namespace reflection {

const typename _Type_EnumMapFactory::ValuesToNamesMapType _Type_VALUES_TO_NAMES = _Type_EnumMapFactory::makeValuesToNamesMap();

const typename _Type_EnumMapFactory::NamesToValuesMapType _Type_NAMES_TO_VALUES = _Type_EnumMapFactory::makeNamesToValuesMap();

}}} // namespace
namespace apache { namespace thrift {
template <>const std::size_t TEnumTraits< ::apache::thrift::reflection::Type>::size = 16;
template <>const folly::Range<const  ::apache::thrift::reflection::Type*> TEnumTraits< ::apache::thrift::reflection::Type>::values = folly::range( ::apache::thrift::reflection::_TypeEnumDataStorage::values);
template <>const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::reflection::Type>::names = folly::range( ::apache::thrift::reflection::_TypeEnumDataStorage::names);

template<>
const char* TEnumTraits< ::apache::thrift::reflection::Type>::findName( ::apache::thrift::reflection::Type value) {
  static const auto map = folly::Indestructible< ::apache::thrift::reflection::_Type_EnumMapFactory::ValuesToNamesMapType>{ ::apache::thrift::reflection::_Type_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template<>
bool TEnumTraits< ::apache::thrift::reflection::Type>::findValue(const char* name,  ::apache::thrift::reflection::Type* out) {
  static const auto map = folly::Indestructible< ::apache::thrift::reflection::_Type_EnumMapFactory::NamesToValuesMapType>{ ::apache::thrift::reflection::_Type_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, out);
}
}} // apache::thrift

namespace apache { namespace thrift { namespace reflection {
bool StructField::operator == (const StructField & rhs) const {
  if (!(this->isRequired == rhs.isRequired))
    return false;
  if (!(this->type == rhs.type))
    return false;
  if (!(this->name == rhs.name))
    return false;
  if (__isset.annotations != rhs.__isset.annotations)
    return false;
  else if (__isset.annotations && !(annotations == rhs.annotations))
    return false;
  if (!(this->order == rhs.order))
    return false;
  return true;
}

void StructField::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "isRequired") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_BOOL;
  }
  else if (_fname == "type") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "name") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "annotations") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "order") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_I16;
  }
};

uint32_t StructField::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->isRequired);
          this->__isset.isRequired = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->type);
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 4:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->annotations.clear();
            uint32_t _size1;
            bool _sizeUnknown2;
            apache::thrift::protocol::TType _ktype3 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype4 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype3, _vtype4, _size1, _sizeUnknown2);
            if (!_sizeUnknown2) {
              uint32_t _i7;
              for (_i7 = 0; _i7 < _size1; ++_i7)
              {
                std::string _key8;
                xfer += iprot->readString(_key8);
                std::string& _val9 = this->annotations[_key8];
                xfer += iprot->readString(_val9);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key10;
                xfer += iprot->readString(_key10);
                std::string& _val11 = this->annotations[_key10];
                xfer += iprot->readString(_val11);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.annotations = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 5:
        if (_ftype == apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->order);
          this->__isset.order = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void StructField::__clear() {
  isRequired = 0;
  type = 0;
  name = "";
  annotations.clear();
  order = 0;
  __isset.__clear();
}
uint32_t StructField::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("StructField");
  xfer += oprot->writeFieldBegin("isRequired", apache::thrift::protocol::T_BOOL, 1);
  xfer += oprot->writeBool(this->isRequired);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("type", apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->type);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.annotations) {
    xfer += oprot->writeFieldBegin("annotations", apache::thrift::protocol::T_MAP, 4);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_STRING, this->annotations.size());
      std::unordered_map<std::string, std::string> ::const_iterator _iter12;
      for (_iter12 = this->annotations.begin(); _iter12 != this->annotations.end(); ++_iter12)
      {
        xfer += oprot->writeString(_iter12->first);
        xfer += oprot->writeString(_iter12->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("order", apache::thrift::protocol::T_I16, 5);
  xfer += oprot->writeI16(this->order);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(StructField &a, StructField &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.isRequired, b.isRequired);
  swap(a.type, b.type);
  swap(a.name, b.name);
  swap(a.annotations, b.annotations);
  swap(a.order, b.order);
  swap(a.__isset, b.__isset);
}

void merge(const StructField& from, StructField& to) {
  using apache::thrift::merge;
  merge(from.isRequired, to.isRequired);
  to.__isset.isRequired = to.__isset.isRequired || from.__isset.isRequired;
  merge(from.type, to.type);
  to.__isset.type = to.__isset.type || from.__isset.type;
  merge(from.name, to.name);
  to.__isset.name = to.__isset.name || from.__isset.name;
  if (from.__isset.annotations) {
    merge(from.annotations, to.annotations);
    to.__isset.annotations = true;
  }
  merge(from.order, to.order);
  to.__isset.order = to.__isset.order || from.__isset.order;
}

void merge(StructField&& from, StructField& to) {
  using apache::thrift::merge;
  merge(std::move(from.isRequired), to.isRequired);
  to.__isset.isRequired = to.__isset.isRequired || from.__isset.isRequired;
  merge(std::move(from.type), to.type);
  to.__isset.type = to.__isset.type || from.__isset.type;
  merge(std::move(from.name), to.name);
  to.__isset.name = to.__isset.name || from.__isset.name;
  if (from.__isset.annotations) {
    merge(std::move(from.annotations), to.annotations);
    to.__isset.annotations = true;
  }
  merge(std::move(from.order), to.order);
  to.__isset.order = to.__isset.order || from.__isset.order;
}

bool DataType::operator == (const DataType & rhs) const {
  if (!(this->name == rhs.name))
    return false;
  if (__isset.fields != rhs.__isset.fields)
    return false;
  else if (__isset.fields && !(fields == rhs.fields))
    return false;
  if (__isset.mapKeyType != rhs.__isset.mapKeyType)
    return false;
  else if (__isset.mapKeyType && !(mapKeyType == rhs.mapKeyType))
    return false;
  if (__isset.valueType != rhs.__isset.valueType)
    return false;
  else if (__isset.valueType && !(valueType == rhs.valueType))
    return false;
  if (__isset.enumValues != rhs.__isset.enumValues)
    return false;
  else if (__isset.enumValues && !(enumValues == rhs.enumValues))
    return false;
  return true;
}

void DataType::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "name") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
  else if (_fname == "fields") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "mapKeyType") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "valueType") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_I64;
  }
  else if (_fname == "enumValues") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_MAP;
  }
};

uint32_t DataType::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->fields.clear();
            uint32_t _size14;
            bool _sizeUnknown15;
            apache::thrift::protocol::TType _ktype16 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype17 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype16, _vtype17, _size14, _sizeUnknown15);
            if (!_sizeUnknown15) {
              uint32_t _i20;
              for (_i20 = 0; _i20 < _size14; ++_i20)
              {
                int16_t _key21;
                xfer += iprot->readI16(_key21);
                StructField& _val22 = this->fields[_key21];
                xfer += _val22.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key23;
                xfer += iprot->readI16(_key23);
                StructField& _val24 = this->fields[_key23];
                xfer += _val24.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fields = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->mapKeyType);
          this->__isset.mapKeyType = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 4:
        if (_ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->valueType);
          this->__isset.valueType = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 5:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->enumValues.clear();
            uint32_t _size25;
            bool _sizeUnknown26;
            apache::thrift::protocol::TType _ktype27 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype28 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype27, _vtype28, _size25, _sizeUnknown26);
            if (!_sizeUnknown26) {
              uint32_t _i31;
              for (_i31 = 0; _i31 < _size25; ++_i31)
              {
                std::string _key32;
                xfer += iprot->readString(_key32);
                int32_t& _val33 = this->enumValues[_key32];
                xfer += iprot->readI32(_val33);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key34;
                xfer += iprot->readString(_key34);
                int32_t& _val35 = this->enumValues[_key34];
                xfer += iprot->readI32(_val35);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.enumValues = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void DataType::__clear() {
  name = "";
  fields.clear();
  mapKeyType = 0;
  valueType = 0;
  enumValues.clear();
  __isset.__clear();
}
uint32_t DataType::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("DataType");
  xfer += oprot->writeFieldBegin("name", apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.fields) {
    xfer += oprot->writeFieldBegin("fields", apache::thrift::protocol::T_MAP, 2);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_STRUCT, this->fields.size());
      std::unordered_map<int16_t, StructField> ::const_iterator _iter36;
      for (_iter36 = this->fields.begin(); _iter36 != this->fields.end(); ++_iter36)
      {
        xfer += oprot->writeI16(_iter36->first);
        xfer += _iter36->second.write(oprot);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.mapKeyType) {
    xfer += oprot->writeFieldBegin("mapKeyType", apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->mapKeyType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.valueType) {
    xfer += oprot->writeFieldBegin("valueType", apache::thrift::protocol::T_I64, 4);
    xfer += oprot->writeI64(this->valueType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.enumValues) {
    xfer += oprot->writeFieldBegin("enumValues", apache::thrift::protocol::T_MAP, 5);
    {
      xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_I32, this->enumValues.size());
      std::unordered_map<std::string, int32_t> ::const_iterator _iter37;
      for (_iter37 = this->enumValues.begin(); _iter37 != this->enumValues.end(); ++_iter37)
      {
        xfer += oprot->writeString(_iter37->first);
        xfer += oprot->writeI32(_iter37->second);
      }
      xfer += oprot->writeMapEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(DataType &a, DataType &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.name, b.name);
  swap(a.fields, b.fields);
  swap(a.mapKeyType, b.mapKeyType);
  swap(a.valueType, b.valueType);
  swap(a.enumValues, b.enumValues);
  swap(a.__isset, b.__isset);
}

void merge(const DataType& from, DataType& to) {
  using apache::thrift::merge;
  merge(from.name, to.name);
  to.__isset.name = to.__isset.name || from.__isset.name;
  if (from.__isset.fields) {
    merge(from.fields, to.fields);
    to.__isset.fields = true;
  }
  if (from.__isset.mapKeyType) {
    merge(from.mapKeyType, to.mapKeyType);
    to.__isset.mapKeyType = true;
  }
  if (from.__isset.valueType) {
    merge(from.valueType, to.valueType);
    to.__isset.valueType = true;
  }
  if (from.__isset.enumValues) {
    merge(from.enumValues, to.enumValues);
    to.__isset.enumValues = true;
  }
}

void merge(DataType&& from, DataType& to) {
  using apache::thrift::merge;
  merge(std::move(from.name), to.name);
  to.__isset.name = to.__isset.name || from.__isset.name;
  if (from.__isset.fields) {
    merge(std::move(from.fields), to.fields);
    to.__isset.fields = true;
  }
  if (from.__isset.mapKeyType) {
    merge(std::move(from.mapKeyType), to.mapKeyType);
    to.__isset.mapKeyType = true;
  }
  if (from.__isset.valueType) {
    merge(std::move(from.valueType), to.valueType);
    to.__isset.valueType = true;
  }
  if (from.__isset.enumValues) {
    merge(std::move(from.enumValues), to.enumValues);
    to.__isset.enumValues = true;
  }
}

bool Schema::operator == (const Schema & rhs) const {
  if (!(this->dataTypes == rhs.dataTypes))
    return false;
  if (!(this->names == rhs.names))
    return false;
  return true;
}

void Schema::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "dataTypes") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "names") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
};

uint32_t Schema::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->dataTypes.clear();
            uint32_t _size39;
            bool _sizeUnknown40;
            apache::thrift::protocol::TType _ktype41 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype42 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype41, _vtype42, _size39, _sizeUnknown40);
            if (!_sizeUnknown40) {
              uint32_t _i45;
              for (_i45 = 0; _i45 < _size39; ++_i45)
              {
                int64_t _key46;
                xfer += iprot->readI64(_key46);
                DataType& _val47 = this->dataTypes[_key46];
                xfer += _val47.read(iprot);
              }
            } else {
              while (iprot->peekMap())
              {
                int64_t _key48;
                xfer += iprot->readI64(_key48);
                DataType& _val49 = this->dataTypes[_key48];
                xfer += _val49.read(iprot);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.dataTypes = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->names.clear();
            uint32_t _size50;
            bool _sizeUnknown51;
            apache::thrift::protocol::TType _ktype52 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype53 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype52, _vtype53, _size50, _sizeUnknown51);
            if (!_sizeUnknown51) {
              uint32_t _i56;
              for (_i56 = 0; _i56 < _size50; ++_i56)
              {
                std::string _key57;
                xfer += iprot->readString(_key57);
                int64_t& _val58 = this->names[_key57];
                xfer += iprot->readI64(_val58);
              }
            } else {
              while (iprot->peekMap())
              {
                std::string _key59;
                xfer += iprot->readString(_key59);
                int64_t& _val60 = this->names[_key59];
                xfer += iprot->readI64(_val60);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.names = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void Schema::__clear() {
  dataTypes.clear();
  names.clear();
  __isset.__clear();
}
uint32_t Schema::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Schema");
  xfer += oprot->writeFieldBegin("dataTypes", apache::thrift::protocol::T_MAP, 1);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I64, apache::thrift::protocol::T_STRUCT, this->dataTypes.size());
    std::unordered_map<int64_t, DataType> ::const_iterator _iter61;
    for (_iter61 = this->dataTypes.begin(); _iter61 != this->dataTypes.end(); ++_iter61)
    {
      xfer += oprot->writeI64(_iter61->first);
      xfer += _iter61->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("names", apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_STRING, apache::thrift::protocol::T_I64, this->names.size());
    std::unordered_map<std::string, int64_t> ::const_iterator _iter62;
    for (_iter62 = this->names.begin(); _iter62 != this->names.end(); ++_iter62)
    {
      xfer += oprot->writeString(_iter62->first);
      xfer += oprot->writeI64(_iter62->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Schema &a, Schema &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.dataTypes, b.dataTypes);
  swap(a.names, b.names);
  swap(a.__isset, b.__isset);
}

void merge(const Schema& from, Schema& to) {
  using apache::thrift::merge;
  merge(from.dataTypes, to.dataTypes);
  to.__isset.dataTypes = to.__isset.dataTypes || from.__isset.dataTypes;
  merge(from.names, to.names);
  to.__isset.names = to.__isset.names || from.__isset.names;
}

void merge(Schema&& from, Schema& to) {
  using apache::thrift::merge;
  merge(std::move(from.dataTypes), to.dataTypes);
  to.__isset.dataTypes = to.__isset.dataTypes || from.__isset.dataTypes;
  merge(std::move(from.names), to.names);
  to.__isset.names = to.__isset.names || from.__isset.names;
}

}}} // namespace
