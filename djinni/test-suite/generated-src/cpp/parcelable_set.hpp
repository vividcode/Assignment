// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#pragma once

#include <string>
#include <unordered_set>
#include <utility>

namespace testsuite {

struct ParcelableSet final {
    std::unordered_set<std::string> set;

    ParcelableSet(std::unordered_set<std::string> set_)
    : set(std::move(set_))
    {}
};

}  // namespace testsuite
