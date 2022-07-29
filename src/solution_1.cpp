#include "solution_1.h"

#include <map>

namespace leetcode {

std::vector<int> Solution1::twoSum(std::vector<int> &nums, int target) {
  std::vector<int> index;
  std::map<int, int> t;

  for (int i = 0; i < nums.size(); i++) {
    const auto& num = nums.at(i);

    if (t.find(target-num) != t.end()) {
      index.insert( index.end(), { t.at(target-num), i } );
      break;
    }

    t[num] = i;
  }

  return index;
}

} // namespace leetcode
