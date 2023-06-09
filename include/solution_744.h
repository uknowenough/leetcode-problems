#ifndef LEETCODE_SOLUTION744_H
#define LEETCODE_SOLUTION744_H

#include <vector>

using std::vector;

namespace leetcode {

/**
 * @brief 744. Find Smallest Letter Greater Than Target
 *   
 * You are given an array of characters letters that is sorted in non-decreasing order, 
 * and a character target. There are at least two different characters in letters.

 * Return the smallest character in letters that is lexicographically greater than target. 
 * If such a character does not exist, return the first character in letters.
 */
class Solution744
{
 public:
  char nextGreatestLetter(vector<char>& letters, char target);
};

} // namespace leetcode

#endif // LEETCODE_SOLUTION744_H
