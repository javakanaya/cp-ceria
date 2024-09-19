import collections
from typing import List


class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        # define the number of rows and columns
        rows, cols = len(grid), len(grid[0])
        
        # visit set to keep track of visited nodes
        visit = set()
        
        # number of islands
        islands = 0

        # breadth first search
        def bfs(r, c):
            # initialize the queue and add the node to the visit set
            q = collections.deque()
            visit.add((r, c))
            
            # append the node to the queue
            q.append((r, c))

            # iterate through the queue
            while q:
                # pop the node from the queue (because it is a bfs algorithm)
                row, col = q.popleft()
                
                # iterate through the directions
                directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

                for dr, dc in directions:
                    # get the current row and column
                    curr_r, curr_c = row + dr, col + dc
                    
                    # check if the current row and column is in the grid
                    if (curr_r in range(rows) and
                        curr_c in range(cols) and
                        # check if the current node is land and not visited
                        grid[curr_r][curr_c] == "1" and
                        (curr_r, curr_c) not in visit):
                        # append the node to the queue and add it to the visit set
                        q.append((curr_r, curr_c))
                        visit.add((curr_r, curr_c))

        # depth first search
        # basically the same as breadth first search, BUT
        def dfs(r, c):
            q = collections.deque()
            visit.add((r, c))
            q.append((r, c))

            while q:
                # instead of popping from the left, we pop from the right
                row, col = q.pop()
                directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]

                for dr, dc in directions:
                    curr_r, curr_c = row + dr, col + dc
                    if (curr_r in range(rows) and
                        curr_c in range(cols) and
                        grid[curr_r][curr_c] == "1" and
                        (curr_r, curr_c) not in visit):
                        q.append((curr_r, curr_c))
                        visit.add((curr_r, curr_c))

        # iterate through the grid
        for r in range(rows):
            for c in range(cols):
                # if the node is land and not visited
                if grid[r][c] == "1" and (r, c) not in visit:
                    # call the bfs or dfs sfunction
                    bfs(r, c)
                    # increment the number of islands
                    islands += 1
        # return the number of islands
        return islands