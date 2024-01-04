#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "solution_2870.h"

using namespace testing;
using namespace leetcode;

// Input: nums = [2,3,3,2,2,4,2,3,4]
// Output: 4
// Explanation: We can apply the following operations to make the array empty:
// - Apply the first operation on the elements at indices 0 and 3. The resulting
// array is nums = [3,3,2,4,2,3,4].
// - Apply the first operation on the elements at indices 2 and 4. The resulting
// array is nums = [3,3,4,3,4].
// - Apply the second operation on the elements at indices 0, 1, and 3. The
// resulting array is nums = [4,4].
// - Apply the first operation on the elements at indices 0 and 1. The resulting
// array is nums = []. It can be shown that we cannot make the array empty in
// less than 4 operations.

TEST(leetcode, 2870_example1) {
  std::vector nums{2, 3, 3, 2, 2, 4, 2, 3, 4};
  EXPECT_EQ(Solution2870::minOperations(nums), 4);
}

// Input: nums = [2,1,2,2,3,3]
// Output: -1
// Explanation: It is impossible to empty the array.

TEST(leetcode, 2870_example2) {
  std::vector nums{2, 1, 2, 2, 3, 3};
  EXPECT_EQ(Solution2870::minOperations(nums), -1);
}