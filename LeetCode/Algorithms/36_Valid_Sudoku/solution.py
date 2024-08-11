from typing import List
from collections import defaultdict


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # initialize the hash table
        cols = defaultdict(set)
        rows = defaultdict(set)
        squares = defaultdict(set)

        # iterate through the board
        for r in range(0, 9):
            for c in range(0, 9):
                
                # if the cell is empty, skip
                if board[r][c] == '.' : 
                    continue

                # check if the number is already in the hash table
                if (board[r][c] in rows[r] or
                    board[r][c] in cols[c] or
                    board[r][c] in squares[(r // 3, c // 3)]):
                    # if it is, return False
                    return False
                
                # add the number to the hash table
                rows[r].add(board[r][c])
                cols[c].add(board[r][c])
                squares[(r // 3, c // 3)].add(board[r][c])
        
        # if the loop finishes, return True
        return True


        