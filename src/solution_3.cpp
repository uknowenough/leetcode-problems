#include "solution_3.h"

#include <map>

namespace leetcode {

// Максимально неоптимально
int Solution3::lengthOfLongestSubstring(std::string s) {
  std::map<char, std::string::const_iterator> letter_map;

  int max_combo = 0;
  for (auto it = s.cbegin(); it != s.cend(); it++) {
    if (letter_map.find(*it) != letter_map.end()) {
      it = letter_map.at(*it)+1;
      letter_map.clear();
    }

    letter_map.insert( { *it, it} );

    if (max_combo < letter_map.size())
      max_combo = letter_map.size();
  }

  return max_combo;
}

} // namespace leetcode
