#include "../../include/leetcode/longest_substring.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// abcabcbb
// key = a, index = 0 insert
// key = b, index = 1 insert
// key = c, index = 2 insert
// key = a, index = 3 change (previously, we inserted `a` character's ascii code. so it'll put index number then we should change left (3 + 1))

int Solution::lengthOfLongestSubstring(const std::string& s) {
    /**
     * @attention lastIndex
     *     I used vector instead of hash map.
     *     lastIndex vector's index is character's ascii code.
     *     lastIndex vector's value `s` string's index.
     */
    std::vector<int> lastIndex(256, -1);
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); ++right) {
        unsigned char c = s[right];

        if (lastIndex[c] >= left) {
            left = lastIndex[c] + 1;
        }

        lastIndex[c] = right;
        maxLength = std::max(maxLength, right - left + 1);
    }
    
    return maxLength;
}