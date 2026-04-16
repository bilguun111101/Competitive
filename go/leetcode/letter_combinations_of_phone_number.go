package leetcode

func LetterCombinations(digits string) []string {
	result := make([]string, 0)
	digitsLetters := map[string]string{
		"2": "abc",
		"3": "def",
		"4": "ghi",
		"5": "jkl",
		"6": "mno",
		"7": "pqrs",
		"8": "tuv",
		"9": "wxyz",
	}

	digits_length := len(digits)
	var backtracking func(combination_letters string, currentIndex int)

	backtracking = func(combination_letters string, currentIndex int) {
		if len(combination_letters) >= digits_length {
			result = append(result, combination_letters)
			return
		}

		digit := string(digits[currentIndex])
		letters := digitsLetters[digit]

		for i := 0; i < len(letters); i++ {
			backtracking(combination_letters+string(letters[i]), currentIndex+1)
		}
	}

	backtracking("", 0)

	return result
}
