#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <string>
#include <vector>

#include "solution_307.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 307_example1)
{
  std::vector v { 1, 3, 5 };

  NumArray numArray(v);
  EXPECT_EQ(numArray.sumRange(0, 2), 9);  // return 1 + 3 + 5 = 9
  numArray.update(1, 2);                  // nums = [1, 2, 5]
  EXPECT_EQ(numArray.sumRange(0, 2), 8);  // return 1 + 2 + 5 = 8
}
