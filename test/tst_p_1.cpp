#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <string>
#include <vector>

#include "solution_1.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 1_example1)
{
  std::vector v { 2,7,11,15 };
  std::vector exp { 0, 1 };
  int target = 9;

  Solution1 sln;
  EXPECT_EQ(sln.twoSum(v, target), exp);
}

TEST(leetcode, 1_example2)
{
  std::vector v { 3,2,4 };
  std::vector exp { 1,2 };
  int target = 6;

  Solution1 sln;
  EXPECT_EQ(sln.twoSum(v, target), exp);
}

TEST(leetcode, 1_example3)
{
  std::vector v { 3,3 };
  std::vector exp { 0,1 };
  int target = 6;

  Solution1 sln;
  EXPECT_EQ(sln.twoSum(v, target), exp);
}
