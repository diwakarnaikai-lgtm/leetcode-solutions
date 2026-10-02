# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

Use a frequency array of size 26 to count the characters in both strings. If the strings have different lengths, they cannot be anagrams. Compare the character frequencies to determine whether they are anagrams.

## Complexity

* Time: O(n)
* Space: O(1)

## Notes

The solution assumes the strings contain lowercase English letters.
