/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef map_message_TYPES_H
#define map_message_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>



namespace squirrel { namespace common {

struct MapRequestType {
  enum type {
    MAP_REQUEST_TYPE_INSERT = 0,
    MAP_REQUEST_TYPE_REMOVE = 1,
    MAP_REQUEST_TYPE_QUERY_RANKING = 2,
    MAP_REQUEST_TYPE_QUERY_RANKING_RANGE = 3,
    MAP_REQUEST_TYPE_RESET_RANKING_KEY = 4,
    MAP_REQUEST_TYPE_CLEAR = 5,
    MAP_REQUEST_TYPE_DELETE = 6,
    MAP_REQUEST_TYPE_MAX = 7
  };
};

extern const std::map<int, const char*> _MapRequestType_VALUES_TO_NAMES;

struct MapResponseType {
  enum type {
    MAP_RESPONSE_TYPE_SUCCESS = 0,
    MAP_RESPONSE_TYPE_KEY_NOT_EXIST = 1,
    MAP_RESPONSE_TYPE_ELEM_ALREDY_EXIST = 2,
    MAP_RESPONSE_TYPE_ELEM_NOT_EXIST = 3,
    MAP_RESPONSE_TYPE_DISCONNECTED = 4,
    MAP_RESPONSE_TYPE_UNKNOWN = 5,
    MAP_RESPONSE_TYPE_MAX = 6
  };
};

extern const std::map<int, const char*> _MapResponseType_VALUES_TO_NAMES;

struct MapSortType {
  enum type {
    MAP_SORT_TYPE_ASC = 0,
    MAP_SORT_TYPE_DESC = 1,
    MAP_SORT_TYPE_MAX = 2
  };
};

extern const std::map<int, const char*> _MapSortType_VALUES_TO_NAMES;

typedef struct _MapRequest__isset {
  _MapRequest__isset() : data_(false) {}
  bool data_;
} _MapRequest__isset;

class MapRequest {
 public:

  static const char* ascii_fingerprint; // = "8A168E64138582CD39890B77E0F15FF4";
  static const uint8_t binary_fingerprint[16]; // = {0x8A,0x16,0x8E,0x64,0x13,0x85,0x82,0xCD,0x39,0x89,0x0B,0x77,0xE0,0xF1,0x5F,0xF4};

  MapRequest() : type_((MapRequestType::type)0), key_(""), data_("") {
  }

  virtual ~MapRequest() throw() {}

  MapRequestType::type type_;
  std::string key_;
  std::string data_;

  _MapRequest__isset __isset;

  void __set_type_(const MapRequestType::type val) {
    type_ = val;
  }

  void __set_key_(const std::string& val) {
    key_ = val;
  }

  void __set_data_(const std::string& val) {
    data_ = val;
    __isset.data_ = true;
  }

  bool operator == (const MapRequest & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(key_ == rhs.key_))
      return false;
    if (__isset.data_ != rhs.__isset.data_)
      return false;
    else if (__isset.data_ && !(data_ == rhs.data_))
      return false;
    return true;
  }
  bool operator != (const MapRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MapResponse__isset {
  _MapResponse__isset() : data_(false) {}
  bool data_;
} _MapResponse__isset;

class MapResponse {
 public:

  static const char* ascii_fingerprint; // = "19AAB18E981C4EB11AEBB34F40FF0939";
  static const uint8_t binary_fingerprint[16]; // = {0x19,0xAA,0xB1,0x8E,0x98,0x1C,0x4E,0xB1,0x1A,0xEB,0xB3,0x4F,0x40,0xFF,0x09,0x39};

  MapResponse() : type_((MapRequestType::type)0), result_((MapResponseType::type)0), data_("") {
  }

  virtual ~MapResponse() throw() {}

  MapRequestType::type type_;
  MapResponseType::type result_;
  std::string data_;

  _MapResponse__isset __isset;

  void __set_type_(const MapRequestType::type val) {
    type_ = val;
  }

  void __set_result_(const MapResponseType::type val) {
    result_ = val;
  }

  void __set_data_(const std::string& val) {
    data_ = val;
    __isset.data_ = true;
  }

  bool operator == (const MapResponse & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(result_ == rhs.result_))
      return false;
    if (__isset.data_ != rhs.__isset.data_)
      return false;
    else if (__isset.data_ && !(data_ == rhs.data_))
      return false;
    return true;
  }
  bool operator != (const MapResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapInsertRequest {
 public:

  static const char* ascii_fingerprint; // = "07A9615F837F7D0A952B595DD3020972";
  static const uint8_t binary_fingerprint[16]; // = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};

  MapInsertRequest() : ranking_key_(""), element_("") {
  }

  virtual ~MapInsertRequest() throw() {}

  std::string ranking_key_;
  std::string element_;

  void __set_ranking_key_(const std::string& val) {
    ranking_key_ = val;
  }

  void __set_element_(const std::string& val) {
    element_ = val;
  }

  bool operator == (const MapInsertRequest & rhs) const
  {
    if (!(ranking_key_ == rhs.ranking_key_))
      return false;
    if (!(element_ == rhs.element_))
      return false;
    return true;
  }
  bool operator != (const MapInsertRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapInsertRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapResetRankingKeyRequest {
 public:

  static const char* ascii_fingerprint; // = "07A9615F837F7D0A952B595DD3020972";
  static const uint8_t binary_fingerprint[16]; // = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};

  MapResetRankingKeyRequest() : ranking_key_(""), element_("") {
  }

  virtual ~MapResetRankingKeyRequest() throw() {}

  std::string ranking_key_;
  std::string element_;

  void __set_ranking_key_(const std::string& val) {
    ranking_key_ = val;
  }

  void __set_element_(const std::string& val) {
    element_ = val;
  }

  bool operator == (const MapResetRankingKeyRequest & rhs) const
  {
    if (!(ranking_key_ == rhs.ranking_key_))
      return false;
    if (!(element_ == rhs.element_))
      return false;
    return true;
  }
  bool operator != (const MapResetRankingKeyRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapResetRankingKeyRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapRemoveRequest {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MapRemoveRequest() : element_("") {
  }

  virtual ~MapRemoveRequest() throw() {}

  std::string element_;

  void __set_element_(const std::string& val) {
    element_ = val;
  }

  bool operator == (const MapRemoveRequest & rhs) const
  {
    if (!(element_ == rhs.element_))
      return false;
    return true;
  }
  bool operator != (const MapRemoveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapRemoveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapQueryRankingRequest {
 public:

  static const char* ascii_fingerprint; // = "D6FD826D949221396F4FFC3ECCD3D192";
  static const uint8_t binary_fingerprint[16]; // = {0xD6,0xFD,0x82,0x6D,0x94,0x92,0x21,0x39,0x6F,0x4F,0xFC,0x3E,0xCC,0xD3,0xD1,0x92};

  MapQueryRankingRequest() : element_(""), sort_type_((MapSortType::type)0) {
  }

  virtual ~MapQueryRankingRequest() throw() {}

  std::string element_;
  MapSortType::type sort_type_;

  void __set_element_(const std::string& val) {
    element_ = val;
  }

  void __set_sort_type_(const MapSortType::type val) {
    sort_type_ = val;
  }

  bool operator == (const MapQueryRankingRequest & rhs) const
  {
    if (!(element_ == rhs.element_))
      return false;
    if (!(sort_type_ == rhs.sort_type_))
      return false;
    return true;
  }
  bool operator != (const MapQueryRankingRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapQueryRankingRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapQueryRankingResponse {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MapQueryRankingResponse() : ranking_("") {
  }

  virtual ~MapQueryRankingResponse() throw() {}

  std::string ranking_;

  void __set_ranking_(const std::string& val) {
    ranking_ = val;
  }

  bool operator == (const MapQueryRankingResponse & rhs) const
  {
    if (!(ranking_ == rhs.ranking_))
      return false;
    return true;
  }
  bool operator != (const MapQueryRankingResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapQueryRankingResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapQueryRankingRangeRequest {
 public:

  static const char* ascii_fingerprint; // = "4F8ABE747D9A2DF14F7E84DDBE60D55C";
  static const uint8_t binary_fingerprint[16]; // = {0x4F,0x8A,0xBE,0x74,0x7D,0x9A,0x2D,0xF1,0x4F,0x7E,0x84,0xDD,0xBE,0x60,0xD5,0x5C};

  MapQueryRankingRangeRequest() : start_(""), end_(""), sort_type_((MapSortType::type)0) {
  }

  virtual ~MapQueryRankingRangeRequest() throw() {}

  std::string start_;
  std::string end_;
  MapSortType::type sort_type_;

  void __set_start_(const std::string& val) {
    start_ = val;
  }

  void __set_end_(const std::string& val) {
    end_ = val;
  }

  void __set_sort_type_(const MapSortType::type val) {
    sort_type_ = val;
  }

  bool operator == (const MapQueryRankingRangeRequest & rhs) const
  {
    if (!(start_ == rhs.start_))
      return false;
    if (!(end_ == rhs.end_))
      return false;
    if (!(sort_type_ == rhs.sort_type_))
      return false;
    return true;
  }
  bool operator != (const MapQueryRankingRangeRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapQueryRankingRangeRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapQueryRankingRangeInfo {
 public:

  static const char* ascii_fingerprint; // = "AB879940BD15B6B25691265F7384B271";
  static const uint8_t binary_fingerprint[16]; // = {0xAB,0x87,0x99,0x40,0xBD,0x15,0xB6,0xB2,0x56,0x91,0x26,0x5F,0x73,0x84,0xB2,0x71};

  MapQueryRankingRangeInfo() : ranking_(""), ranking_key_(""), elements_("") {
  }

  virtual ~MapQueryRankingRangeInfo() throw() {}

  std::string ranking_;
  std::string ranking_key_;
  std::string elements_;

  void __set_ranking_(const std::string& val) {
    ranking_ = val;
  }

  void __set_ranking_key_(const std::string& val) {
    ranking_key_ = val;
  }

  void __set_elements_(const std::string& val) {
    elements_ = val;
  }

  bool operator == (const MapQueryRankingRangeInfo & rhs) const
  {
    if (!(ranking_ == rhs.ranking_))
      return false;
    if (!(ranking_key_ == rhs.ranking_key_))
      return false;
    if (!(elements_ == rhs.elements_))
      return false;
    return true;
  }
  bool operator != (const MapQueryRankingRangeInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapQueryRankingRangeInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MapQueryRankingRangeResponse {
 public:

  static const char* ascii_fingerprint; // = "0146931C2E0BE367167559BCD459F51A";
  static const uint8_t binary_fingerprint[16]; // = {0x01,0x46,0x93,0x1C,0x2E,0x0B,0xE3,0x67,0x16,0x75,0x59,0xBC,0xD4,0x59,0xF5,0x1A};

  MapQueryRankingRangeResponse() {
  }

  virtual ~MapQueryRankingRangeResponse() throw() {}

  std::vector<MapQueryRankingRangeInfo>  elements_;

  void __set_elements_(const std::vector<MapQueryRankingRangeInfo> & val) {
    elements_ = val;
  }

  bool operator == (const MapQueryRankingRangeResponse & rhs) const
  {
    if (!(elements_ == rhs.elements_))
      return false;
    return true;
  }
  bool operator != (const MapQueryRankingRangeResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MapQueryRankingRangeResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

}} // namespace

#endif
