#include <fmt/core.h>
#include <project/sayhello.h>

void sayhello(const std::string& name) {
  fmt::print("hello, {}!\n", name);
}
