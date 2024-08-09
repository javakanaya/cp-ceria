class Solution:
    def isPalindrome(self, s: str) -> bool:
        # set l and r pointers
        l = 0
        r = len(s)-1
        
        # loop through the string
        while l < r:
            # check if the character is alphanumeric
            if s[l].isalnum() == False:
                l += 1
                continue
            if s[r].isalnum() == False:
                r -= 1
                continue
            
            # check if the characters are equal
            if s[l].lower() != s[r].lower():
                return False

            # move the pointers
            r -= 1
            l += 1

        return True
    
# Test Cases
solution = Solution()
print(solution.isPalindrome("A man, a plan, a canal: Panama")) # True
print(solution.isPalindrome("race a car")) # False
print(solution.isPalindrome(" ")) # True