// #include "../include/leetcode/two_sum.hpp"
// #include "../include/leetcode/add_two_numbers.hpp"
// #include "../include/leetcode/longest_substring.hpp"
// #include "../include/leetcode/median_two_array.hpp"
// #include "../include/leetcode/longest_palindromic.hpp"
// #include "../include/leetcode/zigzig_conversation.hpp"
// #include "../include/leetcode/remove_element.hpp"
// #include "../include/leetcode/letter_combination.hpp"
// #include "../include/leetcode/validate_parenthesis_string.hpp"
// #include "../include/leetcode/validate_parenthesis.hpp"
#include "../include/leetcode/implement_stack_using_queues.hpp"
#include <iostream>

int main() {

    MyStack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    std::cout << "stack.top()_1: " << stack.top() << "\n";
    std::cout << "----------------------\n";

    stack.pop();

    std::cout << "stack.top()_2: " << stack.top() << "\n";

    return 0;
}