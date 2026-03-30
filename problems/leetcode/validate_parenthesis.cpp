#include "../../include/leetcode/validate_parenthesis.hpp"
#include <iostream>

std::unordered_map<char, char> pairs = {
    {'[', ']'},
    {'{', '}'},
    {'(', ')'}
};

bool Solution::isValid(std::string s) {
    if (s.size() <= 1) return false;
    std::stack<char> stack;

    for (const char c : s) {
        auto pair = pairs.find(c);

        if (pair != pairs.end()) {
            stack.push(pair->second);
        } else {
            if (!stack.empty() && stack.top() == c) stack.pop();
            else {
                return false;
            }
        }
    }

    return stack.empty();
}