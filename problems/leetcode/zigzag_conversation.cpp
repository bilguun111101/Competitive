#include "../../include/leetcode/zigzig_conversation.hpp"
#include <iostream>

std::string Solution::convert(std::string s, int numRows) {
    if (numRows == 1 || s.size() <= numRows) return s;
    std::vector<std::string> rows(numRows);
    int numIndex = 0;
    bool goingDown = false;
    for (char c : s) {
        rows[numIndex] += c;
        std::cout << rows[numIndex] << "\n";
        numIndex += !goingDown ? 1 : -1;
        if (numIndex == 0 || numIndex == (numRows - 1)) goingDown = !goingDown;
    }

    std::string result;
    for (const std::string& row : rows) result += row;
    return result;
}