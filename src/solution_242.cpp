#include "solution_242.h"

#include <map>

namespace leetcode {

bool Solution242::isAnagram(std::string s, std::string t)
{
  if (s.size() != t.size())
    return false;

  auto it1 = s.cbegin();
  std::map<char, int> letter_str1;
  for (; it1 != s.cend(); it1++) {
    if (letter_str1.find(*it1) == letter_str1.end()) {
      letter_str1.insert( {*it1, 1} );
    } else {
      ++letter_str1.at(*it1);
    }
  }

  std::map<char, int> letter_str2;
  for (auto it2 = t.cbegin(); it2 != t.cend(); it2++) {
    if (letter_str2.find(*it2) == letter_str2.end()) {
      letter_str2.insert( {*it2, 1} );
    } else {
      ++letter_str2.at(*it2);
    }
  }

  return letter_str1 == letter_str2;
}

} // namespace leetcode
