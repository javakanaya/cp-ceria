from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l = 0
        r = 0

        while r < len(nums):
            # getting the count values for each number
            count = 1
            while r + 1 < len(nums) and nums[r] == nums[r + 1]:
                r += 1
                count += 1
            print(l, r)
            # slide the duplicate to the front
            for _ in range(min(2, count)):
                nums[l] = nums[r]
                l += 1
            r += 1

        return l
                
# Test Cases
solution = Solution()
nums = [0,0,1,1,1,1,2,3,3]
k = solution.removeDuplicates(nums)
print(nums[:k])
