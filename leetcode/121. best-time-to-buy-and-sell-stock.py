class Solution:
    def maxProfit(self, prices: 'List[int]') -> 'int':
        profit = 0
        minPrice = float('inf')
        n = len(prices)
        for i in range(n):
            if prices[i] < minPrice:
                minPrice = prices[i]
            else:
                profit = max(profit, prices[i] - minPrice)
        return profit
