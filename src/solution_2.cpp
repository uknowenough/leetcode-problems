#include "solution_2.h"

namespace leetcode {

static ListNode<int>* f(ListNode<int>* l1, ListNode<int>* l2, ListNode<int>* result) {
  if (l1)
    result->val += l1->val;
  if (l2)
    result->val += l2->val;

  static bool register_overflow;
  register_overflow = false;

  if (result->val >= 10) {
    result->val -= 10;
    register_overflow = true;
  }

  ListNode<int>* l1_next_ptr = getNextNode(l1);
  ListNode<int>* l2_next_ptr = getNextNode(l2);

  if (l1_next_ptr || l2_next_ptr) {
    result->next = new ListNode<int>;
    if (register_overflow)
      result->next->val = 1;

    return f(l1_next_ptr, l2_next_ptr, result->next);
  } else {
    if (register_overflow)
      result->next = new ListNode<int>(1);
  }

  return result;
}

ListNode<int>* Solution2::addTwoNumbers(ListNode<int>* l1, ListNode<int>* l2)
{
  ListNode<int>* result = new ListNode<int>;
  f(l1, l2, result);
  return result;
}

} // namespace leetcode
