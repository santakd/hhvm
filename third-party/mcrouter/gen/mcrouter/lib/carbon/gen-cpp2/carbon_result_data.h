/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "mcrouter/lib/carbon/gen-cpp2/carbon_result_types.h"

namespace carbon {

struct _ResultEnumDataStorage {
  using type = Result;
  static constexpr const std::size_t size = 34;
  static constexpr const std::array<Result, 34> values = {{
    Result::UNKNOWN,
    Result::DELETED,
    Result::TOUCHED,
    Result::FOUND,
    Result::FOUNDSTALE,
    Result::NOTFOUND,
    Result::NOTFOUNDHOT,
    Result::NOTSTORED,
    Result::STALESTORED,
    Result::OK,
    Result::STORED,
    Result::EXISTS,
    Result::OOO,
    Result::TIMEOUT,
    Result::CONNECT_TIMEOUT,
    Result::CONNECT_ERROR,
    Result::BUSY,
    Result::RES_TRY_AGAIN,
    Result::SHUTDOWN,
    Result::TKO,
    Result::BAD_COMMAND,
    Result::BAD_KEY,
    Result::BAD_FLAGS,
    Result::BAD_EXPTIME,
    Result::BAD_LEASE_ID,
    Result::BAD_CAS_ID,
    Result::BAD_VALUE,
    Result::ABORTED,
    Result::CLIENT_ERROR,
    Result::LOCAL_ERROR,
    Result::REMOTE_ERROR,
    Result::WAITING,
    Result::DEADLINE_EXCEEDED,
    Result::NUM_RESULTS,
  }};
  static constexpr const std::array<folly::StringPiece, 34> names = {{
    "UNKNOWN",
    "DELETED",
    "TOUCHED",
    "FOUND",
    "FOUNDSTALE",
    "NOTFOUND",
    "NOTFOUNDHOT",
    "NOTSTORED",
    "STALESTORED",
    "OK",
    "STORED",
    "EXISTS",
    "OOO",
    "TIMEOUT",
    "CONNECT_TIMEOUT",
    "CONNECT_ERROR",
    "BUSY",
    "RES_TRY_AGAIN",
    "SHUTDOWN",
    "TKO",
    "BAD_COMMAND",
    "BAD_KEY",
    "BAD_FLAGS",
    "BAD_EXPTIME",
    "BAD_LEASE_ID",
    "BAD_CAS_ID",
    "BAD_VALUE",
    "ABORTED",
    "CLIENT_ERROR",
    "LOCAL_ERROR",
    "REMOTE_ERROR",
    "WAITING",
    "DEADLINE_EXCEEDED",
    "NUM_RESULTS",
  }};
};

} // carbon
namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::carbon::Result> {
  using storage_type = ::carbon::_ResultEnumDataStorage;
};

}} // apache::thrift

