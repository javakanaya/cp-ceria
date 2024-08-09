class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        count = 0
        for i in range(0, k):
            if s[i] == 'a' or s[i] == 'i' or s[i] == 'u' or s[i] == 'e' or s[i] == 'o':
                count += 1
        maxCount = count
        for i in range(k, len(s)):
            if s[i] == 'a' or s[i] == 'i' or s[i] == 'u' or s[i] == 'e' or s[i] == 'o':
                count += 1
            if s[i - k] == 'a' or s[i - k] == 'i' or s[i - k] == 'u' or s[i - k] == 'e' or s[i - k] == 'o':
                count -= 1
            maxCount = max(maxCount, count)
        return maxCount