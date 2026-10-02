# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

Use a position variable to keep track of where the next non-zero element should be placed. Traverse the array and move all non-zero elements to the front. Fill the remaining positions with zeroes.

## Complexity

* Time: O(n)
* Space: O(1)

## Notes

The relative order of the non-zero elements must be maintained, and the array should be modified in-place.
