#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "solution_238.h"

using namespace testing;
using namespace leetcode;

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

TEST(leetcode, 238_example1) {
  vector<int> nums{1, 2, 3, 4};
  vector<int> expect{24, 12, 8, 6};
  EXPECT_EQ(Solution238::productExceptSelf(nums), expect);
}

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

TEST(leetcode, 238_example2) {
  vector<int> nums{-1, 1, 0, -3, 3};
  vector<int> expect{0, 0, 9, 0, 0};
  EXPECT_EQ(Solution238::productExceptSelf(nums), expect);
}