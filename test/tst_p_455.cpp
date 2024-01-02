#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include <vector>

#include "solution_455.h"

using namespace testing;
using namespace leetcode;

// Input: g = [1,2,3], s = [1,1]
// Output: 1
// Explanation: You have 3 children and 2 cookies. The greed factors of 3
// children are 1, 2, 3. And even though you have 2 cookies, since their size
// is both 1, you could only make the child whose greed factor is 1 content.
// You need to output 1.

TEST(leetcode, 455_example1) {
  std::vector g{1, 2, 3};
  std::vector s{1, 1};

  EXPECT_EQ(Solution455::findContentChildren(g, s), 1);
}

// Input: g = [1,2], s = [1,2,3]
// Output: 2
// Explanation: You have 2 children and 3 cookies. The greed factors of 2
// children are 1, 2. You have 3 cookies and their sizes are big enough to
// gratify all of the children, You need to output 2.

TEST(leetcode, 455_example2) {
  std::vector g{1, 2};
  std::vector s{1, 2, 3};

  EXPECT_EQ(Solution455::findContentChildren(g, s), 2);
}