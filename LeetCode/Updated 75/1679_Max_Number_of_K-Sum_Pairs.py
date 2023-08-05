# https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        my_dict = {}
        count = 0
        for i in nums:
            remain = k - i
            if remain in my_dict and my_dict[remain] > 0:
                my_dict[remain] -= 1
                count += 1
            else:
                if i in my_dict:
                    my_dict[i] += 1
                else:
                    my_dict[i] = 1
        return count