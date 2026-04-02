package main

import (
	"competitive/leetcode"
	"fmt"
)

func main() {
	nums := []int16{1, 3, 5, 7, 9, 11}

	result_index := leetcode.SearchInsert(nums, 6)
	fmt.Println("index: ", result_index)
}
