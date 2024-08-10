from typing import List

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        # set goal to the last index
        goal = len(nums) - 1

        # iterate through the nums in reverse (from the goal to the start)
        for i in range(goal -1, -1, -1):
            # if the current index + the value at the current index 
            # is greater than or equal to the goal, (that means we can reach the goal)
            # update the goal
            if i + nums[i] >= goal:
                goal = i
            
        # return True if goal is 0 (reach start), else False
        return True if goal == 0 else False


