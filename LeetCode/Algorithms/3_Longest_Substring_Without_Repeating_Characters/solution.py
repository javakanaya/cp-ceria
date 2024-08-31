class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # initialize a set to store the characters in the current window
        char_set = set()
        l = 0
        res = 0

        # iterate through the string
        for r in range(len(s)):
            # if the character is in the set, remove the leftmost character from the set
            while s[r] in char_set:
                char_set.remove(s[l])
                # increment the left pointer
                l += 1
                
            # add the character to the set
            char_set.add(s[r])
            
            # update the result
            res = max(res, r - l + 1)

        # return the result
        return res