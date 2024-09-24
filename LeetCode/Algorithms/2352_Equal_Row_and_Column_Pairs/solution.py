from typing import List

class Solution:
  def equalPairs(self, grid: List[List[int]]) -> int:
    # Get the first row to get the number of columns 
    column_starts_with = grid[0]

    # Create a list of lists to store the columns
    columns = [[] for _ in column_starts_with]

    # Transpose the grid
    for row in grid:
      for i, element in enumerate(row):
        columns[i].append(element)

    # Count the number of equal pairs
    equal_pairs = 0

    # Check if the row is equal to the column
    for row in grid:
      for i, element in enumerate(column_starts_with):
        # Check if the row is equal to the column
        if row == columns[i]:
          # Increment the equal pairs
          equal_pairs += 1

    # Return the number of equal pairs
    return equal_pairs