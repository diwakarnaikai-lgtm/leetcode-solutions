# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

Use two pointers, `left` and `right`, to define the search range. Find the middle element and compare it with the target. If the target is greater, search the right half; otherwise, search the left half.

## Complexity

* Time: O(log n)
* Space: O(1)

## Notes

The input array is sorted in ascending order.
