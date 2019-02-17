#pragma once

#include "Hash.h"
#include "sparsepp/spp.h"

static const char* MapName = "spp::sparse_hash_map";

template <class Key, class Val>
using Map = spp::sparse_hash_map<Key, Val, Hash<Key>>;
