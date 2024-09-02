from typing import List


class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        # initialize two pointers
        l, r = 0, len(numbers) - 1

        # loop until the two pointers meet
        while l < r:
            # if the sum of the two numbers is greater than the target, move the right pointer to the left
            if (numbers[l] + numbers[r]) > target:
                r -= 1
                
            # if the sum of the two numbers is less than the target, move the left pointer to the right
            elif (numbers[l] + numbers[r]) < target:
                l += 1
            
            # if the sum of the two numbers is equal to the target, return the two indices
            else: 
                return [l + 1, r + 1]
        