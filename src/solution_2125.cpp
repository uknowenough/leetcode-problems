/**
 * @file solution_2125.cpp
 * @author Vlad Palmanov (palmanov.work@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-01-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "solution_2125.h"

// 2125. Number of Laser Beams in a Bank
//
// Anti-theft security devices are activated inside a bank. You are given a
// 0-indexed binary string array bank representing the floor plan of the bank,
// which is an m x n 2D matrix. bank[i] represents the ith row, consisting of
// '0's and '1's. '0' means the cell is empty, while'1' means the cell has a
// security device.

// There is one laser beam between any two security devices if both conditions
// are met:

// The two devices are located on two different rows: r1 and r2, where r1 < r2.
// For each row i where r1 < i < r2, there are no security devices in the ith
// row. Laser beams are independent, i.e., one beam does not interfere nor join
// with another.

// Return the total number of laser beams in the bank.

namespace leetcode {

int Solution2125::numberOfBeams(vector<string>& bank) {
  int beams = 0;

  int t = 0;
  for (const auto& b : bank) {
    const auto devs =
        std::count_if(b.begin(), b.end(), [](char c) { return c == '1'; });
    if (devs) {
      beams += t * devs;
      t = devs;
    }
  }

  return beams;
}

}  // namespace leetcode