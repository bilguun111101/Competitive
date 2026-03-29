#include "../../include/leetcode/letter_combination.hpp"

#include <unordered_map>
#include <iostream>

std::unordered_map<char, std::string> _digits = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

std::vector<std::string> Solution::letterCombinations(std::string digits) {
    std::vector<std::string> vector; 

    std::vector<std::string> digits_string;
    for (const char digit : digits) {
        /* code */
        auto it = _digits.find(digit);
        if (it != _digits.end()) digits_string.push_back(it->second);
    }

    for (size_t i = 0; i < digits_string.size(); i++) {
        // std::string letter = digits_string[i];
        std::string curr = digits_string[i];
        for (size_t j = 0; j < curr.size(); j++) {
            std::string dummy = "" + curr[j];
            std::cout << "curr[j]: " << curr[j] << "\n" ;
            // for (size_t o = 0; o < digits_string.size(); o++) {
            //     std::string _other = digits_string[o];
            //     if (o != j && (_other.size() - 1 <= j)) {
            //         dummy += _other[j];
            //     }
            // }
            // vector.push_back(dummy);
            // dummy = "";
        }
    }
    

    // for (size_t i = 0; i < digits.size(); i++) {
    //     auto it = _digits.find(digits[i]);
    //     if (it != _digits.end()) {
    //         std::string dummy = "";
    //         for (size_t c = 0; c < it->second.size(); c++) {
    //             dummy += it->second[c];
    //             for (size_t j = 0; j < digits.size(); j++) {
    //                 if (j != i) {
    //                     auto _it = _digits.find(digits[j]);
    //                     if (_it != _digits.end()) {
    //                         if (_it->second.size() - 1 <= c) dummy += _it->second[c];
    //                     }
    //                 }
    //             }
    //         }
    //         vector.push_back(dummy);
    //         dummy = "";
    //     }
    // }

    return vector;
}