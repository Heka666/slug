add_library("slug")

target_compile_definitions("slug"
  PUBLIC
    "SLUG_LOG")

target_compile_features("slug"
  PUBLIC
    cxx_std_17)

target_include_directories("slug"
  PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include")

target_sources("slug"
  PRIVATE
    "include/slug.hpp"
    "slug.cpp")
