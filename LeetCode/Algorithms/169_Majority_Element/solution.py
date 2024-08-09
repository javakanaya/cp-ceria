from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # set res and count variable
        res, count = 0, 0

        for i in nums:
            # set result to the element if count is 0
            if count == 0:
                res = i
            # increment count if i is equal to res, otherwise decrement count
            count += (1 if i == res else - 1)
        return res
        
# Test Cases
solution = Solution()
nums = [3, 2, 3, 2, 4, 5, 5, 5, 5, 5, 5]
print(solution.majorityElement(nums))