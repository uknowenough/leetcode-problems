#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "solution_217.h"

using namespace testing;
using namespace leetcode;

// Example 1:
//
// Input: nums = [1,2,3,1]
// Output: true

TEST(leetcode, 217_example1) {
  std::vector nums{1, 2, 3, 1};
  EXPECT_EQ(Solution217::containsDuplicate(nums), true);
}

// Example 2:
//
// Input: nums = [1,2,3,4]
// Output: false

TEST(leetcode, 217_example2) {
  std::vector nums{1, 2, 3, 4};
  EXPECT_EQ(Solution217::containsDuplicate(nums), false);
}

// Example 3:
//
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

TEST(leetcode, 217_example3) {
  std::vector nums{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  EXPECT_EQ(Solution217::containsDuplicate(nums), true);
}