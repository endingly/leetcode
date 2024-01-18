#include <gtest/gtest.h>

#include <unordered_set>
using std::vector, std::string;

int Parse(const std::string& str) {
  auto a = str[0] * 100;
  auto b = str[1];
  return a + b;
}

int ParseReverse(const std::string& str) {
  auto a = str[1] * 100;
  auto b = str[0];
  return a + b;
}

int maximumNumberOfStringPairs(vector<string>& words) {
  std::unordered_set<int> tmp;
  int                     sum = 0;
  for (auto&& i : words) {
    auto num = ParseReverse(i);
    if (tmp.find(num) != tmp.end()) {
      sum++;
      tmp.erase(num);
    } else {
      tmp.insert(Parse(i));
    }
  }
  return sum;
}

