cmake_minimum_required(VERSION 3.22)
project(competitive LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add_executable(competitive 
#     problems/main.cpp 
#     problems/leetcode/two_sum.cpp
# )
add_executable(competitive 
    problems/main.cpp 
    # problems/leetcode/add_two_numbers.cpp
    # problems/leetcode/longest_substring.cpp
    # problems/leetcode/median_two_array.cpp
    problems/leetcode/longest_palindromic.cpp
)

target_include_directories(competitive PRIVATE include)

target_compile_options(competitive PRIVATE 
    -O2
    -Wall
    -Wextra
)

target_compile_definitions(competitive PRIVATE LOCAL)