#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <vector>

#include "solution_766.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 766_example1)
{
  using std::vector;
  vector<vector<int>> matrix = {{ 1,2,3,4 },{ 5,1,2,3 }, { 9,5,1,2 }};

  Solution766 sln;
  EXPECT_EQ(sln.isToeplitzMatrix(matrix), true);
}

TEST(leetcode, 766_example2)
{
  using std::vector;
  vector<vector<int>> matrix = {{ 1,2 },{ 2,2 }};

  Solution766 sln;
  EXPECT_EQ(sln.isToeplitzMatrix(matrix), false);
}

// 11 74 00 93
// 40 11 74 07

TEST(leetcode, 766_example3)
{
  using std::vector;
  vector<vector<int>> matrix = {{ 11,74,0,93 },{ 40,11,74,7 }};

  Solution766 sln;
  EXPECT_EQ(sln.isToeplitzMatrix(matrix), false);
}

