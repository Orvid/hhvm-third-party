/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include "thrift/lib/thrift/gen-cpp/reflection_types.h"
#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>

#include <unordered_map>


namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

typedef  ::apache::thrift::reflection::Type Type;
typedef ::apache::thrift::reflection::StructField StructField;
template <class Protocol_>
uint32_t StructField_read(Protocol_* iprot, StructField* obj);
template <class Protocol_>
uint32_t StructField_serializedSize(Protocol_ const* prot_, const StructField* obj);
template <class Protocol_>
uint32_t StructField_serializedSizeZC(Protocol_ const* prot_, const StructField* obj);
template <class Protocol_>
uint32_t StructField_write(Protocol_* prot_, const StructField* obj);
extern template uint32_t StructField_read<>(apache::thrift::BinaryProtocolReader*, StructField*);
extern template uint32_t StructField_write<>(apache::thrift::BinaryProtocolWriter*, const StructField*);
extern template uint32_t StructField_serializedSize<>(apache::thrift::BinaryProtocolWriter const*, const StructField*);
extern template uint32_t StructField_serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*, const StructField*);
extern template uint32_t StructField_read<>(apache::thrift::CompactProtocolReader*, StructField*);
extern template uint32_t StructField_write<>(apache::thrift::CompactProtocolWriter*, const StructField*);
extern template uint32_t StructField_serializedSize<>(apache::thrift::CompactProtocolWriter const*, const StructField*);
extern template uint32_t StructField_serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*, const StructField*);

}}}} // apache::thrift::reflection::cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::reflection::cpp2::StructField>::clear( ::apache::thrift::reflection::cpp2::StructField* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::reflection::cpp2::StructField>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::StructField>::write(Protocol* proto,  ::apache::thrift::reflection::cpp2::StructField const* obj) {
  return  ::apache::thrift::reflection::cpp2::StructField_write(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::StructField>::read(Protocol* proto,  ::apache::thrift::reflection::cpp2::StructField* obj) {
  return  ::apache::thrift::reflection::cpp2::StructField_read(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::StructField>::serializedSize(Protocol const* proto,  ::apache::thrift::reflection::cpp2::StructField const* obj) {
  return  ::apache::thrift::reflection::cpp2::StructField_serializedSize(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::StructField>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::reflection::cpp2::StructField const* obj) {
  return  ::apache::thrift::reflection::cpp2::StructField_serializedSizeZC(proto, obj);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

typedef ::apache::thrift::reflection::DataType DataType;
template <class Protocol_>
uint32_t DataType_read(Protocol_* iprot, DataType* obj);
template <class Protocol_>
uint32_t DataType_serializedSize(Protocol_ const* prot_, const DataType* obj);
template <class Protocol_>
uint32_t DataType_serializedSizeZC(Protocol_ const* prot_, const DataType* obj);
template <class Protocol_>
uint32_t DataType_write(Protocol_* prot_, const DataType* obj);
extern template uint32_t DataType_read<>(apache::thrift::BinaryProtocolReader*, DataType*);
extern template uint32_t DataType_write<>(apache::thrift::BinaryProtocolWriter*, const DataType*);
extern template uint32_t DataType_serializedSize<>(apache::thrift::BinaryProtocolWriter const*, const DataType*);
extern template uint32_t DataType_serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*, const DataType*);
extern template uint32_t DataType_read<>(apache::thrift::CompactProtocolReader*, DataType*);
extern template uint32_t DataType_write<>(apache::thrift::CompactProtocolWriter*, const DataType*);
extern template uint32_t DataType_serializedSize<>(apache::thrift::CompactProtocolWriter const*, const DataType*);
extern template uint32_t DataType_serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*, const DataType*);

}}}} // apache::thrift::reflection::cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::reflection::cpp2::DataType>::clear( ::apache::thrift::reflection::cpp2::DataType* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::reflection::cpp2::DataType>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::DataType>::write(Protocol* proto,  ::apache::thrift::reflection::cpp2::DataType const* obj) {
  return  ::apache::thrift::reflection::cpp2::DataType_write(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::DataType>::read(Protocol* proto,  ::apache::thrift::reflection::cpp2::DataType* obj) {
  return  ::apache::thrift::reflection::cpp2::DataType_read(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::DataType>::serializedSize(Protocol const* proto,  ::apache::thrift::reflection::cpp2::DataType const* obj) {
  return  ::apache::thrift::reflection::cpp2::DataType_serializedSize(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::DataType>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::reflection::cpp2::DataType const* obj) {
  return  ::apache::thrift::reflection::cpp2::DataType_serializedSizeZC(proto, obj);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

typedef ::apache::thrift::reflection::Schema Schema;
template <class Protocol_>
uint32_t Schema_read(Protocol_* iprot, Schema* obj);
template <class Protocol_>
uint32_t Schema_serializedSize(Protocol_ const* prot_, const Schema* obj);
template <class Protocol_>
uint32_t Schema_serializedSizeZC(Protocol_ const* prot_, const Schema* obj);
template <class Protocol_>
uint32_t Schema_write(Protocol_* prot_, const Schema* obj);
extern template uint32_t Schema_read<>(apache::thrift::BinaryProtocolReader*, Schema*);
extern template uint32_t Schema_write<>(apache::thrift::BinaryProtocolWriter*, const Schema*);
extern template uint32_t Schema_serializedSize<>(apache::thrift::BinaryProtocolWriter const*, const Schema*);
extern template uint32_t Schema_serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*, const Schema*);
extern template uint32_t Schema_read<>(apache::thrift::CompactProtocolReader*, Schema*);
extern template uint32_t Schema_write<>(apache::thrift::CompactProtocolWriter*, const Schema*);
extern template uint32_t Schema_serializedSize<>(apache::thrift::CompactProtocolWriter const*, const Schema*);
extern template uint32_t Schema_serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*, const Schema*);

}}}} // apache::thrift::reflection::cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::apache::thrift::reflection::cpp2::Schema>::clear( ::apache::thrift::reflection::cpp2::Schema* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::apache::thrift::reflection::cpp2::Schema>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::Schema>::write(Protocol* proto,  ::apache::thrift::reflection::cpp2::Schema const* obj) {
  return  ::apache::thrift::reflection::cpp2::Schema_write(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::Schema>::read(Protocol* proto,  ::apache::thrift::reflection::cpp2::Schema* obj) {
  return  ::apache::thrift::reflection::cpp2::Schema_read(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::Schema>::serializedSize(Protocol const* proto,  ::apache::thrift::reflection::cpp2::Schema const* obj) {
  return  ::apache::thrift::reflection::cpp2::Schema_serializedSize(proto, obj);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::apache::thrift::reflection::cpp2::Schema>::serializedSizeZC(Protocol const* proto,  ::apache::thrift::reflection::cpp2::Schema const* obj) {
  return  ::apache::thrift::reflection::cpp2::Schema_serializedSizeZC(proto, obj);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace reflection { namespace cpp2 {

}}}} // apache::thrift::reflection::cpp2
