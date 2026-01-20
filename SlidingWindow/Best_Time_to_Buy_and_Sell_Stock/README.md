 Best Time to Buy and Sell Stock (LeetCode#121)

 Problem Statement
You are given an array prices where prices[i] is the price of a given stock on the i-th day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Approach: One Pass (Dynamic Tracking)
We use a single pass approach (Time: O(n)) to track two values dynamically:
1. Minimum Price: The lowest price seen so far.
2. Maximum Profit: The highest difference between the current price and the minimum price seen so far.

As we iterate through the prices:
- If we find a price lower than our current min_price, we update min_price.
- If the current price is higher, we calculate the potential profit (current_price - min_price) and update max_profit if it exceeds our record.

This effectively simulates a Sliding Window where the left bound is the buy day (minimum price) and the right bound is the current day.

 Complexity Analysis

 Time Complexity: O(n)
- We iterate through the prices array exactly once.

 Space Complexity: O(1)
- We only use two integer variables (min_price and max_profit) for storage.
