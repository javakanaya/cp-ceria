def twoSumTwo(nums, target):
    l, r = 0, len(nums) - 1

    while l < r:
        if (nums[l] + nums[r]) > target:
            r -= 1
        elif (nums[l] + nums[r]) < target:
            l += 1
        else: 
            return [l + 1, r + 1]

test_nums = [1,3,4,5,7,11]
test_target = 9

print(twoSumTwo(test_nums,test_target))