/**
 * @file solution_455.cpp
 * @author Vlad Palmanov (palmanov.work@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-01-02
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solution_455.h"

#include <algorithm>

/// 455. Assign Cookies
///
/// Assume you are an awesome parent and want to give your children some
/// cookies. But, you should give each child at most one cookie.
///
/// Each child i has a greed factor g[i], which is the minimum size of a cookie
/// that the child will be content with; and each cookie j has a size s[j]. If
/// s[j] >= g[i], we can assign the cookie j to the child i, and the child i
/// will be content. Your goal is to maximize the number of your content
/// children and output the maximum number.

namespace leetcode {

int Solution455::findContentChildren(vector<int>& g, vector<int>& s) {
  int res = 0;

  std::sort(g.begin(), g.end());
  std::sort(s.begin(), s.end());

  for (auto s_it = s.crbegin(), g_it = g.crbegin();
       s_it != s.crend() && g_it != g.crend(); ++g_it) {
    if (*s_it >= *g_it) {
      ++res;
      ++s_it;
    }
  }

  return res;
}

};  // namespace leetcode