package main

import (
	"competitive/leetcode"
	"fmt"
)

func main() {
	// nums := []int16{1, 3, 5, 7, 9, 11}
	// nums := []int16{1, 3, 5, 6}

	// result_index := leetcode.SearchInsert(nums, 10)
	// result_index := leetcode.SearchInsert(nums, 7)
	// fmt.Println("index: ", result_index)

	// result := leetcode.GenerateParethesis(3)
	// result := leetcode.CombinationSum([]int{2, 3, 6, 7}, 7)
	result := leetcode.LetterCombinations("2377")

	fmt.Println("string: ", result)

	// haystack := "sadbutsad"
	// needle := "sad"

	// result_index := leetcode.StrStr(haystack, needle)
	// fmt.Println("index: ", result_index)
}
