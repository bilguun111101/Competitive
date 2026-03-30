#include "../../include/leetcode/validate_parenthesis_string.hpp"
#include <iostream>

bool Solution::checkValidString(std::string s) {
    int8_t low = 0, high = 0;
    for (const char c : s) {
        switch (c) {
        case '(':
            /* code */
            low++; high++;
            break;
        case ')':
            low--; high--;
            break;
        default:
            low--; high++;
            break;
        }
        if (high < 0) return false;
        if (low < 0) low = 0;
    }
    return low == 0;
}