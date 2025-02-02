#include "solution_238.h"

// 238. Product of Array Except Self
//
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
//
// You must write an algorithm that runs in O(n) time and without using the division operation.

namespace leetcode {

vector<int> Solution238::productExceptSelf(vector<int>& nums) {
  int n = nums.size();
  vector<int> ans(n, 0);
  int product = 1;
  int zeros = 0;

  for (int num : nums) {
    if (num == 0) {
        zeros++;
        continue;
    }

    product *= num;
  }

  if (zeros == 1) {
    for (int i = 0; i < n; i++) {
      ans[i] = (nums[i] == 0) ? product : 0;
    }
  } else if (zeros == 0) {
    for (int i = 0; i < n; i++) {
      ans[i] = product / nums[i];
    }
  }

  return ans;
}

}  // namespace leetcode