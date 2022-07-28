#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <string>
#include <vector>

#include "solution_3.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 3_example1)
{
  std::string s("abcabcbb");

  Solution3 sln;
  EXPECT_EQ(sln.lengthOfLongestSubstring(s), 3);
}

TEST(leetcode, 3_example2)
{
  std::string s("bbbbb");

  Solution3 sln;
  EXPECT_EQ(sln.lengthOfLongestSubstring(s), 1);
}

TEST(leetcode, 3_example3)
{
  std::string s("pwwkew");

  Solution3 sln;
//  EXPECT_EQ(sln.lengthOfLongestSubstring(s), 3);
}

TEST(leetcode, 3_example4)
{
  std::string s("aab");

  Solution3 sln;
  EXPECT_EQ(sln.lengthOfLongestSubstring(s), 2);
}

TEST(leetcode, 3_example5)
{
  std::string s("dvdf");

  Solution3 sln;
  EXPECT_EQ(sln.lengthOfLongestSubstring(s), 3);
}

