# Find Minimum in Rotated Sorted Array

#using min func in python
def findMin_a(nums):
     return min(nums)

# using binary search
def findMin_b(nums):
    res = nums[0]
    l = 0
    r = len(nums) - 1

    while l <= r:
        if nums[l] < nums[r]:
            res = min(res, nums[l])
            break

        mid = l + (r - l) // 2
        res = min(res, nums[mid])

        if nums[mid] >= nums[l]:
            l = mid + 1
        else : 
            r = mid - 1

    return res

test_num = [3,4,5,1,2]