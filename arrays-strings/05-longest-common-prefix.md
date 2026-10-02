# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

Start with the first string as the initial prefix. Compare it with each remaining string and shorten the prefix until it matches the beginning of that string. Continue until all strings have been checked.

## Complexity

* Time: O(n × m)
* Space: O(m)

## Notes

If there is no common prefix among the strings, return an empty string.
