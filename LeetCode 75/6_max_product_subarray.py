# if all positive 
# [1,2,3,4,5] -> product is increasing

# if all negative
# [-1,-2,-3,-4,-5] - > the product gets smaller (if its is odd)
# but [-2,-3] is gets better products it is 6

# eventhough we only find the max product of subarray,
# but it also need to track the minimum as well
def maxProduct(nums):
    result = max(nums)
    cur_max, cur_min = 1, 1

    for n in nums:
        
        temp = cur_max * n # becase in line 16 the value of cur_max is changed, this is for line 17
        cur_max = max(cur_max * n, cur_min * n, n)
        cur_min = min(temp, cur_min * n, n)
        result = max(result, cur_max)

    return result
    

test_nums = [1, 2, -2, -1]

print(maxProduct(test_nums))