# https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
# sliding window

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if len(haystack) < len(needle):
            return -1
        
        for i in range(0, len(haystack) - len(needle) + 1):
            j = 0
            while(j < len(needle) and haystack[i + j] == needle[j]):
                j += 1
            if j == len(needle):
                return i
        
        return -1
