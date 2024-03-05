#include "solution_217.h"

#include <unordered_set>

// 217. Contains Duplicate
//
// Given an integer array nums, return true if any value 
// appears at least twice in the array, and return false 
// if every element is distinct.

namespace leetcode {

bool Solution217::containsDuplicate(vector<int>& nums) {
  bool res = false;

  std::unordered_set<int> number_set;
  for (const auto& num : nums) {
    if (number_set.contains(num))
      return true;
    number_set.insert(num);
  }

  return res;
}

}  // namespace leetcode