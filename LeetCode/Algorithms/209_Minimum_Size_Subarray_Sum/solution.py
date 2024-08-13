from typing import List

# O(n) solution
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        # initialize l for left pointer for the sliding window, 
        # total for tracking if the window already equal or greater with the target
        l, total = 0, 0
        
        # initialize res for infinity, for tracking the length of the window
        res = len(nums) + 1

        # iterate r pointer start also from 0 to the length of the array
        for r in range(len(nums)):
            
            # increment the total with the r value in array
            total += nums[r]
            
            # slide the left pointer window while the total is greater than the target
            while total >= target:
                # get the minimum length
                res = min(res, r - l + 1)
                
                # subtract the l value in array in the window
                total -= nums[l]
                
                # slide the l pointer
                l += 1
            


        return 0 if res == len(nums) + 1 else res
