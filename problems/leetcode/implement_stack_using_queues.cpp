#include "../../include/leetcode/implement_stack_using_queues.hpp"
#include <iostream>

/**
 * @stack
 *      Last in First out. For example:
 *          std::stack<int> stack;
 *          stack.push(3);
 *          stack.push(4);
 *          stack.pop();
 *          [3, 4] -> [3]
 * @queue
 *      First in First out. For example:
 *          std::queue<int> queue;
 *          queue.push(3);
 *          queue.push(4);
 *          queue.pop();
 *          [3, 4] -> [4]
 */

/**
 * [3, 4, 5, 1] -> push(8) -> [3, 4, 5, 1, 8].
 * 
 * stack:  .pop() -> [3, 4, 5, 1].
 * queue:  .pop() -> [4, 5, 1, 8].
 */

void MyStack::push(int8_t val) {
    queue.push(val);
}

MyStack::MyStack() {};

int MyStack::pop() {
    if (queue.empty()) {
        throw std::runtime_error("stack is empty.");
    }
    std::queue<int> temp_queue;
    while (queue.size() > 1) {
        /* code */
        temp_queue.push(queue.front());
        queue.pop();
    }

    auto pop_el = queue.front();
    queue.pop();
    queue.swap(temp_queue);

    return pop_el;
};

int MyStack::top() {
    std::queue<int> temp_queue;
    while (queue.size() > 1) {
        /* code */
        temp_queue.push(queue.front());
        queue.pop();
    }

    auto topElement = queue.front();
    temp_queue.push(topElement);

    queue.pop();

    queue.swap(temp_queue);
    
    return topElement;
};

bool MyStack::empty() {
    return queue.empty();
};