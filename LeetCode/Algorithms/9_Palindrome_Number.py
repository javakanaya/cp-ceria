class Solution:
    def isPalindrome(self, x: int) -> bool:
        xToStr = str(x)
        reverseX = xToStr[::-1]
        if (reverseX == xToStr):
            return True
        return False