# https://leetcode.com/problems/determine-if-two-strings-are-close/description/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        counter1 = sorted(Counter(word1).values())
        counter2 = sorted(Counter(word2).values())

        set1 = set(word1)
        set2 = set(word2)

        if counter1 == counter2 and set1 == set2:
            return True

        return False