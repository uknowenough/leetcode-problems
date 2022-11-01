#include "solution_1706.h"

#include <cstddef>

using std::size_t;

namespace leetcode {

vector<int> Solution1706::findBall(vector<vector<int> >& grid)
{
  vector<int> result(grid.at(0).size());
  for (int i = 0; i < result.size(); i++)
    result[i] = i;

  const size_t rows = grid.size();
  const size_t cols = grid.at(0).size();

  for (int i = 0; i < cols; i++) {
    int j = 0;
    auto& k = result[i];
    while (j < rows) {
      if (grid[j][k] == 1) { // 1
        if (k >= cols-1
            || grid[j][k+1] == -1) {
          result[i] = -1;
          break;
        } // wall

        ++k; ++j;
      } else { // -1
        if (k == 0
            || grid[j][k-1] == 1) {
          result[i] = -1;
          break;
        } // wall

        --k; ++j;
      }
    }
  }

  return result;
}

} // namespace leetcode
