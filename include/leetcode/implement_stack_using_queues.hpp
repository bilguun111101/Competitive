#pragma once

#include <queue>

class MyStack {
    private:
        std::queue<int> queue;
    public:
        MyStack();
        void push(int8_t val);
        int pop();
        int top();
        bool empty();
};