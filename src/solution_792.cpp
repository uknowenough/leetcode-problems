#include "solution_792.h"

#include <map>

namespace leetcode {

int Solution792::nunMatchingSubseq(std::string s, std::vector<std::string> &words)
{
  int num = 0;

  std::map<std::string, bool> words_map;

  for (const auto& word : words) {
    if (words_map.count(word)) {
      if (words_map.at(word))
        num++;

      continue;
    }

    bool seq = false;
    size_t symbol_word = 0;
    for (const auto& symbol : s) {
      if (word.at(symbol_word) == symbol) {
        symbol_word++;
        if (symbol_word >= word.size()) {
          num++;
          seq = true;
          break;
        }
      }
    }

    words_map.insert({ word, seq });
  }

  return num;
}

} // namespace leetcode
