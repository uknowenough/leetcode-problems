#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <string>
#include <vector>

#include "solution_946.h"

using namespace testing;
using namespace leetcode;

TEST(leetcode, 946_example1) {
  vector<int> pushed = {1, 2, 3, 4, 5}, popped = {4, 5, 3, 2, 1};

  Solution946 sln;
  EXPECT_TRUE(sln.validateStackSequences(pushed, popped));
}

TEST(leetcode, 946_example2) {
  vector<int> pushed = {1, 0, 2}, popped = {2, 1, 0};

  Solution946 sln;
  EXPECT_FALSE(sln.validateStackSequences(pushed, popped));
}
