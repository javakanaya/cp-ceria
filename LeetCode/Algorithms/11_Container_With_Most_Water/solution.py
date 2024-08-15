from typing import List

class Solution:
    def maxArea(self, height: List[int]) -> int:
        
        # initialize left and right pointers, and maxWater
        l, r, maxWater = 0, len(height) - 1, 0

        # loop until left pointer is less than right pointer
        while l < r:
            
            # calculate the area and update maxWater, which is the maximum of the current maxWater and the area
            # the area is the width (r - l) times the minimum of the heights of the two pointers
            maxWater = max(maxWater, (r - l) * min(height[l], height[r]))
            
            # if the height of the left pointer is less than the height of the right pointer, increment the left pointer
            if height[l] < height[r]:
                l += 1
                
            # else, decrement the right pointer
            else:
                r -= 1
        
        # return the maximum area
        return maxWater

