from gettext import find


def search(nums, target):
    result = -1
    l, r = 0, len(nums) - 1 
    
    
    while l <= r:
        middle = (l + r) // 2
        if target == nums[middle]:
            return middle

        # left
        if nums[l] <= nums[middle]:
            if target > nums[middle] or target < nums[l]:
                l = middle + 1
            else:
                r = middle - 1

        # right
        else:
            if target < nums[middle] or target > nums[r]:
                r = middle - 1
            else :
                l = middle + 1
    
    return -1
