from typing import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # initialize profit to 0
        profit = 0
        
        # iterate through the prices
        for i in range(0, len(prices) - 1):
            # if the price at the next day is greater than the price at the current day, 
            if prices[i + 1] > prices[i]:
                # calculate the profit
                profit += prices[i + 1] - prices[i] 
        
        # return the profit
        return profit