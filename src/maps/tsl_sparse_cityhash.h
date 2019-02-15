#pragma once

#include "hashes.h"
#include "tsl/sparse_map.h"

static const char* MapName = "tsl::sparse_map hash::CityHash";

template <class Key, class Val>
using Map = tsl::sparse_map<Key, Val, hash::CityHash<Key>>;
