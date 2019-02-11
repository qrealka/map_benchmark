#pragma once

#include "hashes.h"
#include "robin_hood/robin_hood.h"

static const char* MapName = "robin_hood::unordered_flat_map hash::FNV1a";

template <class Key, class Val>
using Map = robin_hood::unordered_flat_map<Key, Val, hash::FNV1a<Key>>;