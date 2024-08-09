# https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75
# Sliding Sindow Solution

class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        s = 0
        for i in range(0, k):
            s += nums[i]
        avg = s / k
        for i in range(k, len(nums)):
            s += nums[i]
            s -= nums[i - k]
            avg = max(avg, s / k)
        return avg