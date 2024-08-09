# https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        freq = [num for num in Counter(arr).values()]
        return len(freq) == len(set(freq))