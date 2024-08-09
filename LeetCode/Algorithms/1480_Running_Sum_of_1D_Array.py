class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        idx = 0
        sum = 0
        for i in nums:
            sum += i
            nums[idx] = sum
            idx += 1
        return nums