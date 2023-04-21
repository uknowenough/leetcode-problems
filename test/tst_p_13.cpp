#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "solution_13.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 13_example1)
{
  Solution_13 sln;
  EXPECT_EQ(sln.romanToInt("III"), 3);
}

TEST(leetcode, 13_example2)
{
  Solution_13 sln;
  EXPECT_EQ(sln.romanToInt("LVIII"), 58);
}

TEST(leetcode, 13_example3)
{
  Solution_13 sln;
  EXPECT_EQ(sln.romanToInt("MCMXCIV"), 1994);
}
