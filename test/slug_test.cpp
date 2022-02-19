#include <slug.hpp>

int main() {
  slug::g_logger.error("error", " test", " error");

  auto const* stream = &slug::g_logger.stream();
}
