#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "solution_2125.h"

using namespace testing;
using namespace leetcode;

// Input: bank = ["011001","000000","010100","001000"]
// Output: 8
// Explanation: Between each of the following device pairs, there is one beam.
// In total, there are 8 beams:
//  * bank[0][1] -- bank[2][1]
//  * bank[0][1] -- bank[2][3]
//  * bank[0][2] -- bank[2][1]
//  * bank[0][2] -- bank[2][3]
//  * bank[0][5] -- bank[2][1]
//  * bank[0][5] -- bank[2][3]
//  * bank[2][1] -- bank[3][2]
//  * bank[2][3] -- bank[3][2]
// Note that there is no beam between any device on the 0th row with any on the
// 3rd row. This is because the 2nd row contains security devices, which breaks
// the second condition.

TEST(leetcode, 2125_example1) {
  std::vector<string> bank{"011001", "000000", "010100", "001000"};
  EXPECT_EQ(Solution2125::numberOfBeams(bank), 8);
}

// Input: bank = ["000","111","000"]
// Output: 0
// Explanation: There does not exist two devices located on two different rows.

TEST(leetcode, 2125_example2) {
  std::vector<string> bank{"000", "111", "000"};
  EXPECT_EQ(Solution2125::numberOfBeams(bank), 0);
}