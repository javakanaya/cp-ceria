from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # set two pointers: l, r to track the buy and sell day
        # initialize profit to 0
        l, r, profit = 0, 1, 0

        # iterate through the prices
        while r < len(prices):
            # if the price at r is greater than the price at l, calculate the profit
            if prices[l] < prices[r]:
                # update the profit
                profit = max(profit, prices[r] - prices[l])
            # if the price at r is less than the price at l, update l to r
            else: 
                l = r

            # move r to the next day
            r += 1

        return profit
        