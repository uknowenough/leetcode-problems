#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <string>
#include <vector>

#include "solution_792.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 792_example1)
{
  std::string s("abcde");
  std::vector<std::string> words { "a", "bb", "acd", "ace" };


  Solution792 sln;
  EXPECT_EQ(sln.nunMatchingSubseq(s, words), 3);
}

TEST(leetcode, 792_example2)
{
  std::string s("dsahjpjauf");
  std::vector<std::string> words { "ahjpjau", "ja", "ahbwzgqnuk", "tnmlanowax" };

  Solution792 sln;
  EXPECT_EQ(sln.nunMatchingSubseq(s, words), 2);
}

