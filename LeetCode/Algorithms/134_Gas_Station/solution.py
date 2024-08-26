from typing import List

class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        # initialize variables
        totalGas, totalCost, total, start = 0, 0, 0, 0
        # totalGas and totalCost are used to check if the total gas is enough to cover the total cost
        # total is to check if the current gas is enough to cover the current cost
        # start is the starting point of the path
        
        # iterate through the gas and cost lists
        for i in range(0, len(gas)):
            
            # get the sum of gas and cost
            totalGas += gas[i]
            totalCost += cost[i]
            
            # increment the total by the difference between gas and cost
            total += gas[i] - cost[i]

            # if the total is less than 0, reset the total to 0 and set the start to the next index
            # because it is guarantee that there is a unique solution, if the totalGas is greater than totalCost
            # so we don't need to check the previous path (iterate loop back from start)
            if total < 0:
                total = 0
                start = i + 1

        # if the totalGas is less than totalCost, return -1
        if totalGas < totalCost:
            return -1
        
        # otherwise, return the start
        return start

