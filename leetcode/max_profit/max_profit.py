from types import List


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        now_min_price = prices[0]
        min_price = prices[0]
        max_profit = 0

        for price in prices[1:]:
            if price < min_price:
                min_price = price

            if price - min_price > max_profit:
                max_profit = price - min_price

        return max_profit
