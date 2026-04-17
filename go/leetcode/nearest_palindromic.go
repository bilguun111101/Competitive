package leetcode

import (
	"strconv"
)

func pow10(n int) int64 {
	result := int64(1)
	for i := 0; i < n; i++ {
		result *= 10
	}
	return result
}
func reverse(s string) string {
	b := []byte(s)
	for i, j := 0, len(b)-1; i < j; i, j = i+1, j-1 {
		b[i], b[j] = b[j], b[i]
	}
	return string(b)
}

func abs(x int64) int64 {
	if x < 0 {
		return -x
	}
	return x
}

func palindromic(n string) int {
	s := make([]byte, len(n))
	for i := 0; i < len(n); i++ {
		s[i] = n[len(n)-1-i]
	}
	result, err := strconv.Atoi(string(s))
	if err != nil {
		return 0
	}
	return result
}

func NearestPalindromic(n string) string {
	length := len(n)

	// Edge case: single digit
	if length == 1 {
		num, _ := strconv.Atoi(n)
		return strconv.Itoa(num - 1)
	}

	candidates := make(map[int64]bool)

	// Edge cases:
	// 10^len + 1  → 100...001
	// 10^(len-1) - 1 → 99...9
	candidates[pow10(length)+1] = true
	candidates[pow10(length-1)-1] = true

	// Get prefix
	prefixLen := (length + 1) / 2
	prefix, _ := strconv.Atoi(n[:prefixLen])

	// Generate palindromes from prefix-1, prefix, prefix+1
	for _, p := range []int{prefix - 1, prefix, prefix + 1} {
		s := strconv.Itoa(p)

		var pal string
		if length%2 == 0 {
			pal = s + reverse(s)
		} else {
			pal = s + reverse(s[:len(s)-1])
		}

		val, _ := strconv.ParseInt(pal, 10, 64)
		candidates[val] = true
	}

	self, _ := strconv.ParseInt(n, 10, 64)

	var best int64 = -1

	for cand := range candidates {
		if cand == self {
			continue
		}

		if best == -1 ||
			abs(cand-self) < abs(best-self) ||
			(abs(cand-self) == abs(best-self) && cand < best) {
			best = cand
		}
	}

	return strconv.FormatInt(best, 10)
}
