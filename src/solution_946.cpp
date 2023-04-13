#include "solution_946.h"

#include <iostream>

namespace leetcode {

bool Solution946::validateStackSequences(vector<int>& pushed, vector<int>& popped) {
  std::stack<int> stack;

  for (int i = 0, j = 0; i < pushed.size(); ++i) {
    stack.push(pushed[i]);
    while (!stack.empty() && stack.top() == popped[j]) {
      stack.pop();
      ++j;
    }
  }

  return stack.empty();
}

} // namespace leetcode
