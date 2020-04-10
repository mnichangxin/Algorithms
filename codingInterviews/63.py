class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        
        if n == 0: return 0

        profit = 0
        price = float('inf')

        for i in range(0, n):
            price = min(price, prices[i])
            profit = max(profit, prices[i] - price)

        return profit
