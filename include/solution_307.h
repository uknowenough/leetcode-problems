#ifndef LEETCODE_SOLUTION307_H
#define LEETCODE_SOLUTION307_H

/**
 * \brief 307. Range Sum Query - Mutable
 *
 * Given an integer array nums, handle multiple queries of the following types:
 *
 * Update the value of an element in nums.
 * Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
 *
 * Implement the NumArray class:
 *
 * NumArray(int[] nums) Initializes the object with the integer array nums.
 * void update(int index, int val) Updates the value of nums[index] to be val.
 * int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
 */

#include <vector>

using std::vector;

namespace leetcode {

class NumArray {
 public:
  NumArray(vector<int>& nums);

  void update(int index, int val);
  int sumRange(int left, int right);

 private:
  vector<int> v_;
  int sum_;
};

} // namespace leetcode

#endif // LEETCODE_SOLUTION307_H
