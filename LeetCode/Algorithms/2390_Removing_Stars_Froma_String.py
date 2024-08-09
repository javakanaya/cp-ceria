# https://leetcode.com/problems/removing-stars-from-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def removeStars(self, s: str) -> str:
        result = ""
        for c in s:
            result += c
            if c == '*':
                result = result[:-2]
        return result   
        