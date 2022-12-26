def maxProfit(prices):
    l, r, profit = 0, 1, 0 #left = low, right = high

    while r < len(prices):
        if prices[l] < prices[r]:
            tempProfit = prices[r] - prices[l]
            profit = max(profit, tempProfit)
        else:
            l = r
        r += 1

    return profit

test_prices = [1,2,4,5,2,10,232]

print(maxProfit(test_prices))