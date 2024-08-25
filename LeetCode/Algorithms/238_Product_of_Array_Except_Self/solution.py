from typing import List


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # initialize the result list
        n = len(nums)
        res = [1] * n

        # calculate the prefix product
        prefix = 1
        for i in range(0, n):
            # res[i] = prefix product of nums[0] * nums[1] * ... * nums[i - 1]
            res[i] = prefix
            prefix *= nums[i]
            
        # calculate the postfix product
        postfix = 1
        for i in range(n - 1, -1, -1):
            # same as the prefix product but in reverse order (from the postfix)
            res[i] *= postfix
            postfix *= nums[i]

        # return the result
        return res
        