class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        # initialize array to count the number of each character in magazine
        a = [0] * 26


        # loop through magazine and increment the count of each character
        for char in magazine:
            a[ord(char) - 97] += 1

        # loop through ransomNote and decrement the count of each character
        for char in ransomNote:
            a[ord(char) - 97] -= 1

        # if any count is less than 0, return False
        for count in a:
            if count < 0:
                return False
            
        # otherwise, return True
        return True
