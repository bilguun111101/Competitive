package leetcode

// nums := []int16{1, 3, 5, 7, 9, 11}
// target := 6
// target := 4
func SearchInsert(nums []int16, target int16) int {
	left, right := 0, len(nums)

	var mid int

	for i := 0; i < len(nums); i++ {
		mid = left + (right-left)/2
		if nums[mid] < target {
			left = mid + 1
		} else {
			right = mid
		}
	}

	return left
}
