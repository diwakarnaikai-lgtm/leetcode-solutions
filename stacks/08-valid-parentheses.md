# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets. When a closing bracket is found, check whether it matches the most recent opening bracket. If all brackets match correctly and the stack is empty at the end, the string is valid.

## Complexity

* Time: O(n)
* Space: O(n)

## Notes

The brackets must close in the correct order and each opening bracket must have a matching closing bracket.
