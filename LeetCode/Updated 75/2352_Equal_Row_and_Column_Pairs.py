# https://leetcode.com/problems/equal-row-and-column-pairs/submissions/?envType=study-plan-v2&envId=leetcode-75

class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        column_starts_with = grid[0]
        print(column_starts_with)

        columns = [[] for _ in column_starts_with]

        for row in grid:
            for i, element in enumerate(row):
                columns[i].append(element)

        equal_pairs = 0

        for row in grid:
            for i, element in enumerate(column_starts_with):
                if row == columns[i]:
                    equal_pairs += 1

        return equal_pairs