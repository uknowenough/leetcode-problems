#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <vector>

#include "solution_1706.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 1706_example1)
{
  vector<vector<int>> v {
      { 1,1,1,-1,-1 },
      { 1,1,1,-1,-1 },
      { -1,-1,-1,1,1 },
      { 1,1,1,1,-1 },
      { -1,-1,-1,-1,-1 }
  };

  vector<int> expected { 1,-1,-1,-1,-1 };

  Solution1706 sln;
  EXPECT_EQ(sln.findBall(v) == expected, true);
}

TEST(leetcode, 1706_example2)
{
  vector<vector<int>> v {{ -1 }};

  vector<int> expected { -1 };

  Solution1706 sln;
  EXPECT_EQ(sln.findBall(v) == expected, true);
}

TEST(leetcode, 1706_example3)
{
  vector<vector<int>> v {
      { 1,1,1,1,1,1 },
      { -1,-1,-1,-1,-1,-1 },
      { 1,1,1,1,1,1 },
      { -1,-1,-1,-1,-1,-1 }
  };

  vector<int> expected { 0,1,2,3,4,-1 };

  Solution1706 sln;
  EXPECT_EQ(sln.findBall(v) == expected, true);
}
