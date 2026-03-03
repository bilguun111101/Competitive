#include "../../include/leetcode/longest_palindromic.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

// std::string Solution::longestPalindrome(std::string s) {
//     if (s.empty()) return "";

//     // It is for convert odd lenght (2n + 3)
//     std::string t = "^";
//     for (char c : s) {
//         t += "#" + std::string(1, c);
//     }
//     t += "#$";
//     // - Like babad to ^#b#a#b#a#d$.

//     std::vector<int> P(t.size(), 0);
//     int C = 0, R = 0;

//     for (int i = 1; i < t.size() - 1; i++) {
//         int mirror = 2 * C - i;
//         if (i < R) {
//             P[i] = std::min(R - i, P[mirror]);
//             std::cout << "P[i] - " << P[i] << std::endl;
//         }

//         while (t[i + 1 + P[i]] == t[i - 1 - P[i]]) P[i]++;
//         std::cout << "i: " << i << std::endl;
//         if (i + P[i] > R) {
//             std::cout << "i + P[i]: " << i + P[i] << std::endl;
//             C = i;
//             R = i + P[i];
//         }
//     }

//     int maxLen = 0, centerIndex = 0;
//     for (int i = 1; i < P.size() - 1; i++) {
//         if (P[i] > maxLen) {
//             maxLen = P[i];
//             centerIndex = i;
//         }
//     }

//     int start = (centerIndex - maxLen) / 2;
//     return s.substr(start, maxLen);
// }

std::string Solution::longestPalindrome(std::string s) {
    if (s.empty()) return "";
    auto t = std::string("^");
    for (char c : s) t += "#" + std::string(1, c);
    t += "#$";

    std::vector<int> P(t.size(), 0);
    int C = 0, R = 0;
    // ^#a#b#b#a#$

    for (int i = 1; i < t.size() - 1; i++) {
        int mirror = 2 * C - i;
        if (i < R) P[i] = std::min(R - i, P[mirror]);

        while (t[i + 1 + P[i]] == t[i - 1 - P[i]]) P[i]++;
        if (i + P[i] > R) {
            C = i;
            R = i + P[i];
        }
    }

    int maxLen = 0, centerIndex = 0;

    for (size_t i = 1; i < P.size() - 1; i++) {
        if (P[i] > maxLen) {
            maxLen = P[i];
            centerIndex = i;
        }
    }

    int startIndex = (centerIndex - maxLen) / 2;
    return s.substr(startIndex, maxLen);
}