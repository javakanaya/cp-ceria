class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if ransomNote in magazine:
            return True
        return False