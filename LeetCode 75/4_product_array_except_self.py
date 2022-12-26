def productExceptSelf(nums):
    result = [1] * len(nums)

    pre = 1
    pos = 1

    for i in range(len(nums)):
        result[i] = pre 
        pre *= nums[i]

    for i in range(len(nums) - 1, -1, -1):
        result[i] *= pos
        pos *= nums[i]

    return result

test_nums = [1, 2, 3, 4]
print(productExceptSelf(test_nums))
