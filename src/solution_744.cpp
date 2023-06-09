#include "solution_744.h"

namespace leetcode {

char Solution744::nextGreatestLetter(vector<char>& letters, char target) {
  char result = letters[0];

  for (const auto& l : letters) {
    if (target < l) {
      result = l;
      break;
    }
  }

  return result;
}

} // namespace leetcode