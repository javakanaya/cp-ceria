class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        # if s is empty, return True
        if len(s) == 0:
            return True

        # initialize the pointer for s
        p_s = 0
        
        # iterate through t
        for char in t:
            
            # if the character in t is the same as the character in s
            if char == s[p_s]:
                # move the pointer for s
                p_s += 1
                
            # if the pointer for s is at the end of s
            if p_s == len(s):
                # return True
                return True      

        # else return False
        return False
        