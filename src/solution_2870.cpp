/**
 * @file solution_2870.cpp
 * @author Vlad Palmanov (palmanov.work@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-01-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solution_2870.h"

#include <unordered_map>

// 2870. Minimum Number of Operations to Make Array Empty
//
// You are given a 0-indexed array nums consisting of positive integers.

// There are two types of operations that you can apply on the array any number
// of times:

// Choose two elements with equal values and delete them from the array.
// Choose three elements with equal values and delete them from the array.
// Return the minimum number of operations required to make the array empty, or
// -1 if it is not possible.

namespace leetcode {

int Solution2870::minOperations(vector<int>& nums) {
  int min = 0;

  std::unordered_map<int, int> numbers;
  for (const auto n : nums) {
    if (numbers.contains(n)) {
      ++numbers[n];
    } else {
      numbers.insert({n, 1});
    }
  }

  for (const auto& [key, value] : numbers)
    if (value == 1) return -1;

  for (auto& [key, value] : numbers) {
    while (value) {
      if (value >= 6 && value % 6 == 0) {
        value -= 6;
        min += 2;
      } else if (value >= 3 && value % 3 == 0) {
        value -= 3;
        ++min;
      } else {
        value -= 2;
        ++min;
      }
    }
  }

  return min;
}

}  // namespace leetcode