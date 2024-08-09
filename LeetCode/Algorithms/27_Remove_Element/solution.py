from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        leftBehind = 0

        for i in range(len(nums)):
            if nums[i] != val:
                nums[leftBehind] = nums[i]
                leftBehind += 1

        return leftBehind
    
# Test Cases
solution = Solution()
nums = [3, 2, 2, 3]
val = 3
k = solution.removeElement(nums, val)
print(nums[:k])
