def twoSum(self, numbers: List[int], target: int) -> List[int]:
    l, r = 0, len(numbers) - 1

    while l < r:
        if (numbers[l] + numbers[r]) > target:
            r -= 1
        elif (numbers[l] + numbers[r]) < target:
            l += 1
        else: 
            return [l + 1, r + 1]

test_nums = [1,3,4,5,7,11]
test_target = 9

print(twoSumTwo(test_nums,test_target))