from typing import List


class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l, r = 0, len(nums) - 1
        
        # reverse the whole list
        while l < r :
            nums[l], nums[r] = nums[r], nums[l]
            l, r = l + 1, r - 1

        # get the remainder of k divided by the length of the list
        k = k % len(nums)
        
        # reverse the 0 to k-1 elements
        l, r = 0, k - 1
        while l < r :
            nums[l], nums[r] = nums[r], nums[l]
            l, r = l + 1, r - 1

        # reverse the k to n-1 elements
        l, r = k, len(nums) - 1
        while l < r :
            nums[l], nums[r] = nums[r], nums[l]
            l, r = l + 1, r - 1
            
# Test Cases
solution = Solution()
nums = [1,2,3,4,5,6,7]
k = 3
solution.rotate(nums, k)
print(nums)