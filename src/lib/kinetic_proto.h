/*
* kinetic-c
* Copyright (C) 2014 Seagate Technology.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*
*/

/* Generated by the protocol buffer compiler. */
/* Generated from: kinetic.proto */

#ifndef _KINETIC_PROTO
#define _KINETIC_PROTO

#include <protobuf-c/protobuf-c.h>
#include <stdbool.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _KineticProto KineticProto;
typedef struct _KineticProto_Command KineticProto_Command;
typedef struct _KineticProto_Header KineticProto_Header;
typedef struct _KineticProto_Body KineticProto_Body;
typedef struct _KineticProto_Status KineticProto_Status;
typedef struct _KineticProto_KeyValue KineticProto_KeyValue;
typedef struct _KineticProto_Range KineticProto_Range;
typedef struct _KineticProto_Setup KineticProto_Setup;
typedef struct _KineticProto_P2POperation KineticProto_P2POperation;
typedef struct _KineticProto_P2POperation_Operation KineticProto_P2POperation_Operation;
typedef struct _KineticProto_P2POperation_Peer KineticProto_P2POperation_Peer;
typedef struct _KineticProto_GetLog KineticProto_GetLog;
typedef struct _KineticProto_GetLog_Utilization KineticProto_GetLog_Utilization;
typedef struct _KineticProto_GetLog_Temperature KineticProto_GetLog_Temperature;
typedef struct _KineticProto_GetLog_Capacity KineticProto_GetLog_Capacity;
typedef struct _KineticProto_GetLog_Configuration KineticProto_GetLog_Configuration;
typedef struct _KineticProto_GetLog_Configuration_Interface KineticProto_GetLog_Configuration_Interface;
typedef struct _KineticProto_GetLog_Statistics KineticProto_GetLog_Statistics;
typedef struct _KineticProto_GetLog_Limits KineticProto_GetLog_Limits;
typedef struct _KineticProto_Security KineticProto_Security;
typedef struct _KineticProto_Security_ACL KineticProto_Security_ACL;
typedef struct _KineticProto_Security_ACL_Scope KineticProto_Security_ACL_Scope;


/* --- enums --- */

typedef enum _KineticProto_Status_StatusCode {
  KINETIC_PROTO_STATUS_STATUS_CODE_INVALID_STATUS_CODE = -1,
  KINETIC_PROTO_STATUS_STATUS_CODE_NOT_ATTEMPTED = 0,
  KINETIC_PROTO_STATUS_STATUS_CODE_SUCCESS = 1,
  KINETIC_PROTO_STATUS_STATUS_CODE_HMAC_FAILURE = 2,
  KINETIC_PROTO_STATUS_STATUS_CODE_NOT_AUTHORIZED = 3,
  KINETIC_PROTO_STATUS_STATUS_CODE_VERSION_FAILURE = 4,
  KINETIC_PROTO_STATUS_STATUS_CODE_INTERNAL_ERROR = 5,
  KINETIC_PROTO_STATUS_STATUS_CODE_HEADER_REQUIRED = 6,
  KINETIC_PROTO_STATUS_STATUS_CODE_NOT_FOUND = 7,
  KINETIC_PROTO_STATUS_STATUS_CODE_VERSION_MISMATCH = 8,
  KINETIC_PROTO_STATUS_STATUS_CODE_SERVICE_BUSY = 9,
  KINETIC_PROTO_STATUS_STATUS_CODE_EXPIRED = 10,
  KINETIC_PROTO_STATUS_STATUS_CODE_DATA_ERROR = 11,
  KINETIC_PROTO_STATUS_STATUS_CODE_PERM_DATA_ERROR = 12,
  KINETIC_PROTO_STATUS_STATUS_CODE_REMOTE_CONNECTION_ERROR = 13,
  KINETIC_PROTO_STATUS_STATUS_CODE_NO_SPACE = 14,
  KINETIC_PROTO_STATUS_STATUS_CODE_NO_SUCH_HMAC_ALGORITHM = 15,
  KINETIC_PROTO_STATUS_STATUS_CODE_INVALID_REQUEST = 16,
  KINETIC_PROTO_STATUS_STATUS_CODE_NESTED_OPERATION_ERRORS = 17
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_STATUS_STATUS_CODE)
} KineticProto_Status_StatusCode;
typedef enum _KineticProto_GetLog_Type {
  KINETIC_PROTO_GET_LOG_TYPE_INVALID_TYPE = -1,
  KINETIC_PROTO_GET_LOG_TYPE_UTILIZATIONS = 0,
  KINETIC_PROTO_GET_LOG_TYPE_TEMPERATURES = 1,
  KINETIC_PROTO_GET_LOG_TYPE_CAPACITIES = 2,
  KINETIC_PROTO_GET_LOG_TYPE_CONFIGURATION = 3,
  KINETIC_PROTO_GET_LOG_TYPE_STATISTICS = 4,
  KINETIC_PROTO_GET_LOG_TYPE_MESSAGES = 5,
  KINETIC_PROTO_GET_LOG_TYPE_LIMITS = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_GET_LOG_TYPE)
} KineticProto_GetLog_Type;
typedef enum _KineticProto_Security_ACL_HMACAlgorithm {
  KINETIC_PROTO_SECURITY_ACL_HMACALGORITHM_INVALID_HMAC_ALGORITHM = -1,
  KINETIC_PROTO_SECURITY_ACL_HMACALGORITHM_HmacSHA1 = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_SECURITY_ACL_HMACALGORITHM)
} KineticProto_Security_ACL_HMACAlgorithm;
typedef enum _KineticProto_Security_ACL_Permission {
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_INVALID_PERMISSION = -1,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_READ = 0,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_WRITE = 1,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_DELETE = 2,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_RANGE = 3,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_SETUP = 4,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_P2POP = 5,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_GETLOG = 7,
  KINETIC_PROTO_SECURITY_ACL_PERMISSION_SECURITY = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_SECURITY_ACL_PERMISSION)
} KineticProto_Security_ACL_Permission;
typedef enum _KineticProto_Synchronization {
  KINETIC_PROTO_SYNCHRONIZATION_INVALID_SYNCHRONIZATION = -1,
  KINETIC_PROTO_SYNCHRONIZATION_WRITETHROUGH = 1,
  KINETIC_PROTO_SYNCHRONIZATION_WRITEBACK = 2,
  KINETIC_PROTO_SYNCHRONIZATION_FLUSH = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_SYNCHRONIZATION)
} KineticProto_Synchronization;
typedef enum _KineticProto_Algorithm {
  KINETIC_PROTO_ALGORITHM_INVALID_ALGORITHM = -1,
  KINETIC_PROTO_ALGORITHM_SHA1 = 1,
  KINETIC_PROTO_ALGORITHM_SHA2 = 2,
  KINETIC_PROTO_ALGORITHM_SHA3 = 3,
  KINETIC_PROTO_ALGORITHM_CRC32 = 4,
  KINETIC_PROTO_ALGORITHM_CRC64 = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_ALGORITHM)
} KineticProto_Algorithm;
typedef enum _KineticProto_MessageType {
  KINETIC_PROTO_MESSAGE_TYPE_INVALID_MESSAGE_TYPE = -1,
  KINETIC_PROTO_MESSAGE_TYPE_GET = 2,
  KINETIC_PROTO_MESSAGE_TYPE_GET_RESPONSE = 1,
  KINETIC_PROTO_MESSAGE_TYPE_PUT = 4,
  KINETIC_PROTO_MESSAGE_TYPE_PUT_RESPONSE = 3,
  KINETIC_PROTO_MESSAGE_TYPE_DELETE = 6,
  KINETIC_PROTO_MESSAGE_TYPE_DELETE_RESPONSE = 5,
  KINETIC_PROTO_MESSAGE_TYPE_GETNEXT = 8,
  KINETIC_PROTO_MESSAGE_TYPE_GETNEXT_RESPONSE = 7,
  KINETIC_PROTO_MESSAGE_TYPE_GETPREVIOUS = 10,
  KINETIC_PROTO_MESSAGE_TYPE_GETPREVIOUS_RESPONSE = 9,
  KINETIC_PROTO_MESSAGE_TYPE_GETKEYRANGE = 12,
  KINETIC_PROTO_MESSAGE_TYPE_GETKEYRANGE_RESPONSE = 11,
  KINETIC_PROTO_MESSAGE_TYPE_GETVERSION = 16,
  KINETIC_PROTO_MESSAGE_TYPE_GETVERSION_RESPONSE = 15,
  KINETIC_PROTO_MESSAGE_TYPE_SETUP = 22,
  KINETIC_PROTO_MESSAGE_TYPE_SETUP_RESPONSE = 21,
  KINETIC_PROTO_MESSAGE_TYPE_GETLOG = 24,
  KINETIC_PROTO_MESSAGE_TYPE_GETLOG_RESPONSE = 23,
  KINETIC_PROTO_MESSAGE_TYPE_SECURITY = 26,
  KINETIC_PROTO_MESSAGE_TYPE_SECURITY_RESPONSE = 25,
  KINETIC_PROTO_MESSAGE_TYPE_PEER2PEERPUSH = 28,
  KINETIC_PROTO_MESSAGE_TYPE_PEER2PEERPUSH_RESPONSE = 27,
  KINETIC_PROTO_MESSAGE_TYPE_NOOP = 30,
  KINETIC_PROTO_MESSAGE_TYPE_NOOP_RESPONSE = 29,
  KINETIC_PROTO_MESSAGE_TYPE_FLUSHALLDATA = 32,
  KINETIC_PROTO_MESSAGE_TYPE_FLUSHALLDATA_RESPONSE = 31
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(KINETIC_PROTO_MESSAGE_TYPE)
} KineticProto_MessageType;

/* --- messages --- */

struct  _KineticProto_Command
{
  ProtobufCMessage base;
  KineticProto_Header *header;
  KineticProto_Body *body;
  KineticProto_Status *status;
};
#define KINETIC_PROTO_COMMAND__INIT (KineticProto_Command){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto_command__descriptor)}

struct  _KineticProto_Header
{
  ProtobufCMessage base;
  bool has_clusterVersion;
  int64_t clusterVersion;
  bool has_identity;
  int64_t identity;
  bool has_connectionID;
  int64_t connectionID;
  bool has_sequence;
  int64_t sequence;
  bool has_ackSequence;
  int64_t ackSequence;
  bool has_messageType;
  KineticProto_MessageType messageType;
  bool has_timeout;
  int64_t timeout;
  bool has_earlyExit;
  bool earlyExit;
  bool has_backgroundScan;
  bool backgroundScan;
};
#define KINETIC_PROTO_HEADER__INIT (KineticProto_Header){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto_header__descriptor)}


struct  _KineticProto_Body
{
  ProtobufCMessage base;
  KineticProto_KeyValue *keyValue;
  KineticProto_Range *range;
  KineticProto_Setup *setup;
  KineticProto_P2POperation *p2pOperation;
  KineticProto_GetLog *getLog;
  KineticProto_Security *security;
};
#define KINETIC_PROTO_BODY__INIT (KineticProto_Body){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto_body__descriptor)};


struct  _KineticProto_Status
{
  ProtobufCMessage base;
  bool has_code;
  KineticProto_Status_StatusCode code;
  char* statusMessage;
  bool has_detailedMessage;
  ProtobufCBinaryData detailedMessage;
};
#define KINETIC_PROTO_STATUS__INIT (KineticProto_Status){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto_status__descriptor),}


struct  _KineticProto_KeyValue
{
  ProtobufCMessage base;
  bool has_newVersion;
  ProtobufCBinaryData newVersion;
  bool has_force;
  bool force;
  bool has_key;
  ProtobufCBinaryData key;
  bool has_dbVersion;
  ProtobufCBinaryData dbVersion;
  bool has_tag;
  ProtobufCBinaryData tag;
  bool has_algorithm;
  KineticProto_Algorithm algorithm;
  bool has_metadataOnly;
  bool metadataOnly;
  bool has_Synchronization;
  KineticProto_Synchronization synchronization;
};
#define KINETIC_PROTO_KEY_VALUE__INIT (KineticProto_KeyValue){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto_key_value__descriptor)}


struct  _KineticProto_Range
{
  ProtobufCMessage base;
  bool has_startKey;
  ProtobufCBinaryData startKey;
  bool has_endKey;
  ProtobufCBinaryData endKey;
  bool has_startKeyInclusive;
  bool startKeyInclusive;
  bool has_endKeyInclusive;
  bool endKeyInclusive;
  bool has_maxReturned;
  int32_t maxReturned;
  bool has_reverse;
  bool reverse;
  size_t n_key;
  ProtobufCBinaryData *key;
};
#define KINETIC_PROTO_RANGE__INIT (KineticProto_Range){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto_range__descriptor)}


struct  _KineticProto_Setup
{
  ProtobufCMessage base;
  bool has_newClusterVersion;
  int64_t newClusterVersion;
  bool has_instantSecureErase;
  bool instantSecureErase;
  bool has_setPin;
  ProtobufCBinaryData setPin;
  bool has_pin;
  ProtobufCBinaryData pin;
  bool has_firmwareDownload;
  bool firmwareDownload;
};
#define KINETIC_PROTO_SETUP__INIT (KineticProto_Setup){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_setup__descriptor)}

struct  _KineticProto_P2POperation_Operation
{
  ProtobufCMessage base;
  bool has_key;
  ProtobufCBinaryData key;
  bool has_version;
  ProtobufCBinaryData version;
  bool has_newKey;
  ProtobufCBinaryData newKey;
  bool has_force;
  bool force;
  KineticProto_Status *status;
  KineticProto_P2POperation *p2pop;
};
#define KINETIC_PROTO_P2_POPERATION_OPERATION__INIT (KineticProto_P2POperation_Operation){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_p2_poperation_operation__descriptor)}


struct  _KineticProto_P2POperation_Peer
{
  ProtobufCMessage base;
  char* hostname;
  bool has_port;
  int32_t port;
  bool has_tls;
  bool tls;
};
#define KINETIC_PROTO_P2_POPERATION_PEER__INIT (KineticProto_P2POperation_Peer){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_p2_poperation_peer__descriptor)}

struct  _KineticProto_P2POperation
{
  ProtobufCMessage base;
  KineticProto_P2POperation_Peer *peer;
  size_t n_operation;
  KineticProto_P2POperation_Operation **operation;
  bool has_allChildOperationsSucceeded;
  bool allChildOperationsSucceeded;
};
#define KINETIC_PROTO_P2_POPERATION__INIT (KineticProto_P2POperation){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_p2_poperation__descriptor)}

struct  _KineticProto_GetLog_Utilization
{
  ProtobufCMessage base;
  char* name;
  bool has_value;
  float value;
};
#define KINETIC_PROTO_GET_LOG_UTILIZATION__INIT (KineticProto_GetLog_Utilization){PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log_utilization__descriptor)}

struct  _KineticProto_GetLog_Temperature
{
  ProtobufCMessage base;
  char* name;
  bool has_current;
  float current;
  bool has_minimum;
  float minimum;
  bool has_maximum;
  float maximum;
  bool has_target;
  float target;
};
#define KINETIC_PROTO_GET_LOG_TEMPERATURE__INIT (KineticProto_GetLog_Temperature){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log_temperature__descriptor)}

struct  _KineticProto_GetLog_Capacity
{
  ProtobufCMessage base;
  bool has_nominalCapacityInBytes;
  uint64_t nominalCapacityInBytes;
  bool has_portionFull;
  float portionFull;
};
#define KINETIC_PROTO_GET_LOG_CAPACITY__INIT (KineticProto_GetLog_Capacity){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log_capacity__descriptor)}

struct  _KineticProto_GetLog_Configuration_Interface
{
  ProtobufCMessage base;
  char* name;
  bool has_MAC;
  ProtobufCBinaryData MAC;
  bool has_ipv4Address;
  ProtobufCBinaryData ipv4Address;
  bool has_ipv6Address;
  ProtobufCBinaryData ipv6Address;
};
#define KINETIC_PROTO_GET_LOG_CONFIGURATION_INTERFACE__INIT (KineticProto_GetLog_Configuration_Interface){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log_configuration_interface__descriptor)}

struct  _KineticProto_GetLog_Configuration
{
  ProtobufCMessage base;
  char* vendor;
  char* model;
  bool has_serialNumber;
  ProtobufCBinaryData serialNumber;
  bool has_worldWideName;
  ProtobufCBinaryData worldWideName;
  char* version;
  char* compilationDate;
  char* sourceHash;
  char* protocolVersion;
  char* protocolCompilationDate;
  char* protocolSourceHash;
  size_t n_interface;
  KineticProto_GetLog_Configuration_Interface **interface;
  bool has_port;
  int32_t port;
  bool has_tlsPort;
  int32_t tlsPort;
};
#define KINETIC_PROTO_GET_LOG_CONFIGURATION__INIT (KineticProto_GetLog_Configuration){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log_configuration__descriptor)}

struct  _KineticProto_GetLog_Statistics
{
  ProtobufCMessage base;
  bool has_messageType;
  KineticProto_MessageType messageType;
  bool has_count;
  uint64_t count;
  bool has_bytes;
  uint64_t bytes;
};
#define KINETIC_PROTO_GET_LOG_STATISTICS__INIT (KineticProto_GetLog_Statistics){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log_statistics__descriptor)}

struct  _KineticProto_GetLog_Limits
{
  ProtobufCMessage base;
  bool has_maxKeySize;
  uint32_t maxKeySize;
  bool has_maxValueSize;
  uint32_t maxValueSize;
  bool has_maxVersionSize;
  uint32_t maxVersionSize;
  bool has_maxTagSize;
  uint32_t maxTagSize;
  bool has_maxConnections;
  uint32_t maxConnections;
  bool has_maxOutstandingReadRequests;
  uint32_t maxOutstandingReadRequests;
  bool has_maxOutstandingWriteRequests;
  uint32_t maxOutstandingWriteRequests;
  bool has_maxMessageSize;
  uint32_t maxMessageSize;
  bool has_maxKeyRangeCount;
  uint32_t maxKeyRangeCount;
};
#define KINETIC_PROTO_GET_LOG_LIMITS__INIT (KineticProto_GetLog_Limits){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log_limits__descriptor)}

struct  _KineticProto_GetLog
{
  ProtobufCMessage base;
  size_t n_type;
  KineticProto_GetLog_Type *type;
  size_t n_utilization;
  KineticProto_GetLog_Utilization **utilization;
  size_t n_temperature;
  KineticProto_GetLog_Temperature **temperature;
  KineticProto_GetLog_Capacity *capacity;
  KineticProto_GetLog_Configuration *configuration;
  size_t n_statistics;
  KineticProto_GetLog_Statistics **statistics;
  bool has_messages;
  ProtobufCBinaryData messages;
  KineticProto_GetLog_Limits *limits;
};
#define KINETIC_PROTO_GET_LOG__INIT (KineticProto_GetLog){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_get_log__descriptor)}

struct  _KineticProto_Security_ACL_Scope
{
  ProtobufCMessage base;
  bool has_offset;
  int64_t offset;
  bool has_value;
  ProtobufCBinaryData value;
  size_t n_permission;
  KineticProto_Security_ACL_Permission *permission;
  bool has_TlsRequired;
  bool TlsRequired;
};
#define KINETIC_PROTO_SECURITY_ACL_SCOPE__INIT (KineticProto_Security_ACL_Scope){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_security_acl_scope__descriptor)}

struct  _KineticProto_Security_ACL
{
  ProtobufCMessage base;
  bool has_identity;
  int64_t identity;
  bool has_key;
  ProtobufCBinaryData key;
  bool has_hmacAlgorithm;
  KineticProto_Security_ACL_HMACAlgorithm hmacAlgorithm;
  size_t n_scope;
  KineticProto_Security_ACL_Scope **scope;
};
#define KINETIC_PROTO_SECURITY_ACL__INIT (KineticProto_Security_ACL){.base = PROTOBUF_C_MESSAGE_INIT(&KineticProto_security_acl__descriptor)}

struct  _KineticProto_Security
{
  ProtobufCMessage base;
  size_t n_acl;
  KineticProto_Security_ACL **acl;
};
#define KINETIC_PROTO_SECURITY__INIT (KineticProto_Security){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto_security__descriptor)}

struct  _KineticProto
{
  ProtobufCMessage base;
  KineticProto_Command *command;
  bool has_hmac;
  ProtobufCBinaryData hmac;
};
#define KINETIC_PROTO__INIT (KineticProto){.base = PROTOBUF_C_MESSAGE_INIT (&KineticProto__descriptor)}

/* KineticProto_Command methods */
void KineticProto_command__init
  (KineticProto_Command* message);
/* KineticProto_Header methods */
void KineticProto_header__init
  (KineticProto_Header* message);
/* KineticProto_Body methods */
void KineticProto_body__init
  (KineticProto_Body* message);
/* KineticProto_Status methods */
void KineticProto_status__init
  (KineticProto_Status* message);
/* KineticProto_KeyValue methods */
void KineticProto_key_value__init
  (KineticProto_KeyValue* message);
/* KineticProto_Range methods */
void KineticProto_range__init
  (KineticProto_Range* message);
/* KineticProto_Setup methods */
void KineticProto_setup__init
  (KineticProto_Setup* message);
/* KineticProto_P2POperation_Operation methods */
void KineticProto_p2_poperation_operation__init
  (KineticProto_P2POperation_Operation* message);
/* KineticProto_P2POperation_Peer methods */
void KineticProto_p2_poperation_peer__init
  (KineticProto_P2POperation_Peer* message);
/* KineticProto_P2POperation methods */
void KineticProto_p2_poperation__init
  (KineticProto_P2POperation* message);
/* KineticProto_GetLog_Utilization methods */
void KineticProto_get_log_utilization__init
  (KineticProto_GetLog_Utilization* message);
/* KineticProto_GetLog_Temperature methods */
void KineticProto_get_log_temperature__init
  (KineticProto_GetLog_Temperature* message);
/* KineticProto_GetLog_Capacity methods */
void KineticProto_get_log_capacity__init
  (KineticProto_GetLog_Capacity* message);
/* KineticProto_GetLog_Configuration_Interface methods */
void KineticProto_get_log_configuration_interface__init
  (KineticProto_GetLog_Configuration_Interface* message);
/* KineticProto_GetLog_Configuration methods */
void KineticProto_get_log_configuration__init
  (KineticProto_GetLog_Configuration* message);
/* KineticProto_GetLog_Statistics methods */
void KineticProto_get_log_statistics__init
  (KineticProto_GetLog_Statistics* message);
/* KineticProto_GetLog_Limits methods */
void KineticProto_get_log_limits__init
  (KineticProto_GetLog_Limits* message);
/* KineticProto_GetLog methods */
void KineticProto_get_log__init
  (KineticProto_GetLog* message);
/* KineticProto_Security_ACL_Scope methods */
void KineticProto_security_acl_scope__init
  (KineticProto_Security_ACL_Scope* message);
/* KineticProto_Security_ACL methods */
void KineticProto_security_acl__init
  (KineticProto_Security_ACL* message);
/* KineticProto_Security methods */
void KineticProto_security__init
  (KineticProto_Security* message);
/* KineticProto methods */
void KineticProto__init
  (KineticProto* message);
size_t KineticProto__get_packed_size(
  const KineticProto *message);
size_t KineticProto__pack(
  const KineticProto *message,
  uint8_t* out);
size_t KineticProto__pack_to_buffer(
  const KineticProto* message,
  ProtobufCBuffer* buffer);
KineticProto * KineticProto__unpack(
    ProtobufCAllocator* allocator,
    size_t len,
    const uint8_t* data);
void KineticProto__free_unpacked(
  KineticProto* message,
  ProtobufCAllocator* allocator);
/* --- per-message closures --- */

typedef void (*KineticProto_Command_Closure) (
  const KineticProto_Command* message,
  void* closure_data);
typedef void (*KineticProto_Header_Closure) (
  const KineticProto_Header* message,
  void* closure_data);
typedef void (*KineticProto_Body_Closure) (
  const KineticProto_Body* message,
  void* closure_data);
typedef void (*KineticProto_Status_Closure) (
  const KineticProto_Status* message,
  void* closure_data);
typedef void (*KineticProto_KeyValue_Closure) (
  const KineticProto_KeyValue* message,
  void* closure_data);
typedef void (*KineticProto_Range_Closure) (
  const KineticProto_Range* message,
  void* closure_data);
typedef void (*KineticProto_Setup_Closure) (
  const KineticProto_Setup* message,
  void* closure_data);
typedef void (*KineticProto_P2POperation_Operation_Closure) (
  const KineticProto_P2POperation_Operation* message,
  void* closure_data);
typedef void (*KineticProto_P2POperation_Peer_Closure) (
  const KineticProto_P2POperation_Peer* message,
  void* closure_data);
typedef void (*KineticProto_P2POperation_Closure) (
  const KineticProto_P2POperation* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Utilization_Closure) (
  const KineticProto_GetLog_Utilization* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Temperature_Closure) (
  const KineticProto_GetLog_Temperature* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Capacity_Closure) (
  const KineticProto_GetLog_Capacity* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Configuration_Interface_Closure) (
  const KineticProto_GetLog_Configuration_Interface* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Configuration_Closure) (
  const KineticProto_GetLog_Configuration* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Statistics_Closure) (
  const KineticProto_GetLog_Statistics* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Limits_Closure) (
  const KineticProto_GetLog_Limits* message,
  void* closure_data);
typedef void (*KineticProto_GetLog_Closure) (
  const KineticProto_GetLog* message,
  void* closure_data);
typedef void (*KineticProto_Security_ACL_Scope_Closure) (
  const KineticProto_Security_ACL_Scope* message,
  void* closure_data);
typedef void (*KineticProto_Security_ACL_Closure) (
  const KineticProto_Security_ACL* message,
  void* closure_data);
typedef void (*KineticProto_Security_Closure) (
  const KineticProto_Security* message,
  void* closure_data);
typedef void (*KineticProto_Closure) (
  const KineticProto* message,
  void* closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor KineticProto__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_command__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_header__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_body__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_status__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_status_status_code__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_key_value__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_range__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_setup__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_p2_poperation__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_p2_poperation_operation__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_p2_poperation_peer__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log_utilization__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log_temperature__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log_capacity__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log_configuration__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log_configuration_interface__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log_statistics__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_get_log_limits__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_get_log_type__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_security__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_security_acl__descriptor;
extern const ProtobufCMessageDescriptor KineticProto_security_acl_scope__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_security_acl_hmacalgorithm__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_security_acl_permission__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_synchronization__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_algorithm__descriptor;
extern const ProtobufCEnumDescriptor    KineticProto_message_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* _KINETIC_PROTO */
