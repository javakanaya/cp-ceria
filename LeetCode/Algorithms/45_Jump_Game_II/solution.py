from typing import List

class Solution:
    def jump(self, nums: List[int]) -> int:
        # initialize the result, left and right pointers
        res = 0
        l = r = 0

        # while the right pointer is less than the last index
        while r < len(nums) - 1:
            # initialize the farthest index
            farthest = 0
            # get the farthest index that can be reached from the current l to r range
            for i in range (l, r + 1):
                farthest = max(farthest, i + nums[i])
            
            # update the left with the right + 1 
            l = r + 1

            # right with the farthest index
            r = farthest
            
            # increment the jump
            res += 1

        # return the jump count
        return res
        