package leetcode

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func StrStr(haystack, needle string) int {
	if len(haystack) < len(needle) {
		return -1
	}
	left, right := 0, len(needle)

	for i := 0; i < len(haystack); i++ {
		if needle == haystack[left:right] {
			return left
		}
		left++
		right = min(right+1, len(haystack))
	}

	return -1
}
