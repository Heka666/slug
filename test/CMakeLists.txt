add_executable("slug_test")

target_link_libraries("slug_test"
  PRIVATE
    "slug")

target_sources("slug_test"
  PRIVATE
    "slug_test.cpp")
