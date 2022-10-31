#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>
#include <ostream>
#include <vector>

using std::vector;

namespace leetcode {

template<typename T>
struct ListNode
{
  T val;
  ListNode<T>* next;
  ListNode() : val(0), next(nullptr) {}
  explicit ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode<T>* next) : val(x), next(next) {}

  static bool isEqual(const ListNode<T>* l1, const ListNode<T>* l2) {
    auto l1_ref = l1;
    auto l2_ref = l2;

    while (l1_ref || l2_ref) {
      if (!l1_ref) return false;
      if (!l2_ref) return false;

      if (l1_ref->val != l2_ref->val) return false;

      l1_ref = l1_ref->next;
      l2_ref = l2_ref->next;
    }

    return true;
  }
};

template<typename T>
static ListNode<T>* getNextNode(ListNode<T>* l) {
  if (l && l->next) return l->next;
  return nullptr;
}

template<typename T>
static ListNode<T>* fillList(const vector<T>& data) {
  if (data.empty()) {
    std::cout << "Data is empty!" << std::endl;
    return nullptr;
  }

  size_t index = 0;
  ListNode<T>* root = new ListNode<T>(data.at(index));

  ListNode<T>* node = root;
  while (data.size() > ++index) {
    node->next = new ListNode<T>(data.at(index));
    node = node->next;
  }

  return root;
}

} // namespace leetcode

#endif // LISTNODE_H
