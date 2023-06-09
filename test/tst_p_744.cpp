#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <vector>

#include "solution_744.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 744_example1)
{
  std::vector<char> letters = {'c','f','j'};
  char target = 'a';

  Solution744 sln;
  EXPECT_EQ(sln.nextGreatestLetter(letters, target), 'c');
}

TEST(leetcode, 744_example2)
{
  std::vector<char> letters = {'c','f','j'};
  char target = 'c';

  Solution744 sln;
  EXPECT_EQ(sln.nextGreatestLetter(letters, target), 'f');
}

TEST(leetcode, 744_example3)
{
  std::vector<char> letters = {'x','x','y','y'};
  char target = 'z';

  Solution744 sln;
  EXPECT_EQ(sln.nextGreatestLetter(letters, target), 'x');
}