#include "solution_307.h"

namespace leetcode {

NumArray::NumArray(std::vector<int> &nums)
    : v_(nums) {
  sum_ = 0;
  for (int i = 0; i < nums.size(); i++){
    sum_ += nums[i];
  }
}

void NumArray::update(int index, int val) {
  sum_ -= v_[index];
  v_[index] = val;
  sum_ += val;
}

int NumArray::sumRange(int left, int right) {
  int res = sum_;
  for(int i = 0; i < left; i++) {
    res -= v_[i];
  }

  for (int i = right+1; i < v_.size(); i++){
    res -= v_[i];
  }

  return res;
}

} // namespace leetcode
