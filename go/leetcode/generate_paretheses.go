package leetcode

func GenerateParethesis(n int) []string {
	result := make([]string, 0, n)

	var backtracking func(s string, open, close int)
	backtracking = func(s string, open, close int) {
		if len(s) == n*2 {
			result = append(result, s)
			return
		}
		if open < n {
			backtracking(s+"(", open+1, close)
		}
		if close < open {
			backtracking(s+")", open, close+1)
		}
	}
	backtracking("", 0, 0)
	return result
}
