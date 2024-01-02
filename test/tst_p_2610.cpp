#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include <vector>

#include "solution_2610.h"

using namespace testing;
using namespace leetcode;

// Input: nums = [1,3,4,1,2,3,1]
// Output: [[1,3,4,2],[1,3],[1]]
// Explanation: We can create a 2D array that contains the following rows:
// - 1,3,4,2
// - 1,3
// - 1
// All elements of nums were used, and each row of the 2D array contains
// distinct integers, so it is a valid answer. It can be shown that we cannot
// have less than 3 rows in a valid array.

TEST(leetcode, 2610_example1) {
  std::vector nums{1, 3, 4, 1, 2, 3, 1};
  std::vector<std::vector<int>> expect_vv = {{1, 3, 4, 2}, {1, 3}, {1}};

  int i = 0;
  for (const auto& v : Solution2610::findMatrix(nums)) {
    EXPECT_THAT(v, UnorderedElementsAreArray(expect_vv[i]));
    ++i;
  }
}

// Input: nums = [1,2,3,4]
// Output: [[4,3,2,1]]
// Explanation: All elements of the array are distinct, so we can keep all of
// them in the first row of the 2D array.

TEST(leetcode, 2610_example2) {
  std::vector nums{1, 2, 3, 4};
  std::vector<std::vector<int>> expect_vv = {{4, 3, 2, 1}};

  int i = 0;
  for (const auto& v : Solution2610::findMatrix(nums)) {
    EXPECT_THAT(v, UnorderedElementsAreArray(expect_vv[i]));
    ++i;
  }
}