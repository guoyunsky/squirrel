/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef async_request_object_TYPES_H
#define async_request_object_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>

#include "request_type_types.h"


namespace squirrel { namespace common {


class AsyncRequestObject {
 public:

  static const char* ascii_fingerprint; // = "8CFADE1976027CCC2C5EFD96B68CDAD3";
  static const uint8_t binary_fingerprint[16]; // = {0x8C,0xFA,0xDE,0x19,0x76,0x02,0x7C,0xCC,0x2C,0x5E,0xFD,0x96,0xB6,0x8C,0xDA,0xD3};

  AsyncRequestObject() : request_id_(0), terminal_guid_(0), type_(( ::squirrel::common::RequestType::type)0), storage_type_(( ::squirrel::common::StorageType::type)0), key_(""), key_hash_value_(0), request_("") {
  }

  virtual ~AsyncRequestObject() throw() {}

  int64_t request_id_;
  int64_t terminal_guid_;
   ::squirrel::common::RequestType::type type_;
   ::squirrel::common::StorageType::type storage_type_;
  std::string key_;
  int32_t key_hash_value_;
  std::string request_;

  void __set_request_id_(const int64_t val) {
    request_id_ = val;
  }

  void __set_terminal_guid_(const int64_t val) {
    terminal_guid_ = val;
  }

  void __set_type_(const  ::squirrel::common::RequestType::type val) {
    type_ = val;
  }

  void __set_storage_type_(const  ::squirrel::common::StorageType::type val) {
    storage_type_ = val;
  }

  void __set_key_(const std::string& val) {
    key_ = val;
  }

  void __set_key_hash_value_(const int32_t val) {
    key_hash_value_ = val;
  }

  void __set_request_(const std::string& val) {
    request_ = val;
  }

  bool operator == (const AsyncRequestObject & rhs) const
  {
    if (!(request_id_ == rhs.request_id_))
      return false;
    if (!(terminal_guid_ == rhs.terminal_guid_))
      return false;
    if (!(type_ == rhs.type_))
      return false;
    if (!(storage_type_ == rhs.storage_type_))
      return false;
    if (!(key_ == rhs.key_))
      return false;
    if (!(key_hash_value_ == rhs.key_hash_value_))
      return false;
    if (!(request_ == rhs.request_))
      return false;
    return true;
  }
  bool operator != (const AsyncRequestObject &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AsyncRequestObject & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}} // namespace

#endif
