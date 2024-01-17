#include "toolkit.hpp"
#include <list>

int toolkit::StringToInt(const std::string& str) {
  int sum = 0;
  for (auto&& i : str) {
    sum += i;
  }
  return sum;
}