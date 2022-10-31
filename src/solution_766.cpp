#include "solution_766.h"

#include <cstddef>

namespace leetcode {

bool Solution766::isToeplitzMatrix(std::vector<std::vector<int>>& matrix)
{
  if (matrix.size() <= 1
      || matrix[0].size() <= 1) return true;

  using std::size_t;

  for (size_t row = 0; row < matrix.size()-1; ++row) {
    for (size_t col = 0; col < matrix[row].size()-1; ++col) {
      if (matrix[row][col] != matrix[row+1][col+1]) {
        return false;
      }
    }
  }

  return true;
}

} // namespace leetcode
