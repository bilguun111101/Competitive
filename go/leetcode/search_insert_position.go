package leetcode

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}
func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

// nums := []int16{1, 3, 5, 6}
// 10

func SearchInsert(nums []int16, target int16) int {
	left, right := 0, len(nums)

	for i := 0; i < len(nums); i++ {
		mid := min(left+(right-left)/2, len(nums)-1)
		if nums[mid] < target {
			left = mid + 1
		} else {
			right = mid
		}
	}

	return left
}
