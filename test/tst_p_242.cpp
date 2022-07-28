#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <string>
#include <vector>

#include "solution_242.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 242_example1)
{
  std::string s("anagram");
  std::string t("nagaram");

  Solution242 sln;
  EXPECT_EQ(sln.isAnagram(s, t), true);
}

TEST(leetcode, 242_example2)
{
  std::string s("rat");
  std::string t("car");

  Solution242 sln;
  EXPECT_EQ(sln.isAnagram(s, t), false);
}
