# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum stock price seen so far. For each price, calculate the possible profit by selling at that price. Update the maximum profit whenever a higher profit is found.

## Complexity

* Time: O(n)
* Space: O(1)

## Notes

The stock must be bought before it is sold. If no profit is possible, return 0.
