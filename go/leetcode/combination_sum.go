package leetcode

import "fmt"

func CombinationSum(candidates []int, target int) [][]int {
	result := make([][]int, 0)
	path := make([]int, 0)

	var backtracking func(start, remaining int)
	backtracking = func(start, remaining int) {
		if remaining == 0 {
			fmt.Println("copy path: ", path)
			combo := make([]int, len(path))
			copy(combo, path)
			result = append(result, combo)
			return
		}
		if remaining < 0 {
			return
		}

		for i := start; i < len(candidates); i++ {
			fmt.Println("start at: ", i)
			path = append(path, candidates[i])
			fmt.Println("append path: ", path)
			backtracking(i, remaining-candidates[i])
			path = path[:len(path)-1]
			fmt.Println("remove path: ", path)
			fmt.Println("---------------------")
		}
	}

	backtracking(0, target)

	return result
}
