from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int: 
        countUnique = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                nums[countUnique] = nums[i]
                countUnique += 1

        return countUnique

        
        
# Test Cases
solution = Solution()
nums = [0,0,1,1,1,2,2,3,3,4]
k = solution.removeDuplicates(nums)
print(nums[:k])