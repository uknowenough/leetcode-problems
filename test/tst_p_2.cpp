#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <memory>
#include <vector>

#include "utils/listnode.h"
#include "solution_2.h"

using namespace testing;
using namespace leetcode;

using ListNodePtr = std::unique_ptr<ListNode<int>>;

// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.

TEST(leetcode, 2_example1)
{
  Solution2 sln;

  const auto& v1 = vector<int>{ 2,4,3 };
  const auto& v2 = vector<int>{ 5,6,4 };
  const auto& v3 = vector<int>{ 7,0,8 };

  ListNodePtr l1(fillList<int>(v1));
  ListNodePtr l2(fillList<int>(v2));
  ListNodePtr exprected_list(fillList<int>(v3));

  ListNodePtr result(sln.addTwoNumbers(l1.get(), l2.get()));

  EXPECT_EQ(ListNode<int>::isEqual(exprected_list.get(), result.get()), true);
}

// Input: l1 = [0], l2 = [0]
// Output: [0]

TEST(leetcode, 2_example2)
{
  Solution2 sln;

  const auto& v1 = vector<int>{ 0 };
  const auto& v2 = vector<int>{ 0 };
  const auto& v3 = vector<int>{ 0 };

  ListNodePtr l1(fillList<int>(v1));
  ListNodePtr l2(fillList<int>(v2));
  ListNodePtr exprected_list(fillList<int>(v3));

  ListNodePtr result(sln.addTwoNumbers(l1.get(), l2.get()));

  EXPECT_EQ(ListNode<int>::isEqual(exprected_list.get(), result.get()), true);
}

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]

TEST(leetcode, 2_example3)
{
  Solution2 sln;

  const auto& v1 = vector<int>{ 9,9,9,9,9,9,9 };
  const auto& v2 = vector<int>{ 9,9,9,9 };
  const auto& v3 = vector<int>{ 8,9,9,9,0,0,0,1 };

  ListNodePtr l1(fillList<int>(v1));
  ListNodePtr l2(fillList<int>(v2));
  ListNodePtr exprected_list(fillList<int>(v3));

  ListNodePtr result(sln.addTwoNumbers(l1.get(), l2.get()));

  EXPECT_EQ(ListNode<int>::isEqual(exprected_list.get(), result.get()), true);
}
