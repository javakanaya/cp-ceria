from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        # initialize the triangle
        if numRows == 0:
            return []

        # initialize the triangle with the first row
        triangle = [[1]]

        # iterate through the number of rows
        for i in range(1, numRows):
            # get the previous row
            prev_row = triangle[-1]
            
            # initialize the new row
            new_row = [1]

            # iterate through the previous row
            for j in range(1, len(prev_row)):
                # append the sum of the previous row
                new_row.append(prev_row[j-1] + prev_row[j])

            # append 1 to the new row
            new_row.append(1)
            
            # append the new row to the triangle
            triangle.append(new_row)
        
        # return the triangle
        return triangle
        