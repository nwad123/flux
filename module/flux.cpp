
module;

#include <algorithm>
#include <array>
#include <bitset>
#include <compare>
#include <concepts>
#include <coroutine>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <exception>
#include <functional>
#include <initializer_list>
#include <iosfwd>
#include <iterator>
#include <limits>
#include <optional>
#include <ranges>
#include <source_location>
#include <stdexcept>
#include <string>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <utility>
#include <variant>
#include <version>

export module flux;

#define FLUX_MODULE_INTERFACE

#ifdef __clang__
#pragma clang diagnostic push
#if __has_warning("-Winclude-angled-in-module-purview")
#pragma clang diagnostic ignored "-Winclude-angled-in-module-purview"
#endif
#endif

#include <flux.hpp>

#ifdef __clang__
#pragma clang diagnostic pop
#endif
