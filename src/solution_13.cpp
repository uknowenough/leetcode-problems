#include "solution_13.h"

#include <iostream>
#include <map>

namespace leetcode {

int Solution_13::romanToInt(string s) {
  std::map<char, int> roman = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                               {'C', 100}, {'D', 500}, {'M', 1000}};

  int result = 0;
  for (size_t i = 0; i < s.size(); ++i) {
    const auto symbol = s[i];
    result += roman[symbol];

    if (i > 0 && s[i] != 'I') {
      const auto prev_symbol = s[i - 1];

      auto b1 = prev_symbol == 'I' && (symbol == 'V' || symbol == 'X');
      auto b2 = prev_symbol == 'X' && (symbol == 'L' || symbol == 'C');
      auto b3 = prev_symbol == 'C' && (symbol == 'D' || symbol == 'M');

      if (b1 || b2 || b3) {
        result -= roman[prev_symbol];
        result -= roman[prev_symbol];
      }
    }
  }

  return result;
}

} // namespace leetcode
