/**
 * @file solution_2610.cpp
 * @author Vlad Palmanov (palmanov.work@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-01-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solution_2610.h"

#include <unordered_map>

// 2610. Convert an Array Into a 2D Array With Conditions
//
// You are given an integer array nums. You need to create a 2D array from nums
// satisfying the following conditions:
//
// The 2D array should contain only the elements of the array nums. Each row in
// the 2D array contains distinct integers. The number of rows in the 2D array
// should be minimal.
// Return the resulting array. If there are multiple answers, return any of
// them.
//
// Note that the 2D array can have a different number of elements on each row.

namespace leetcode {

vector<vector<int>> Solution2610::findMatrix(vector<int>& nums) {
  vector<vector<int>> vv;

  std::unordered_map<int, int> numbers;

  for (const auto& n : nums) ++numbers[n];

  for (const auto& [key, value] : numbers) {
    if (value > vv.size()) vv.resize(value);

    for (size_t i = 0; i < value; ++i) {
      vv[i].push_back(key);
    }
  }

  return vv;
}

}  // namespace leetcode