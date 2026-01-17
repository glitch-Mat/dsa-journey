 Is Subsequence (LeetCode#392)

Problem Statement
Given two strings s and t, return true if s is a subsequence of t, o false otherwise.

A subsequenceis a new string formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters.

Approach: Two Pointers
We use a Two Pointer approach to solve this efficiently without nested loops.
1. Pointer j tracks our progress in the target string s.
2. Pointer i iterates through the source string t.

Algorithm:
- We iterate through t one character at a time.
- Whenever t[i] matches s[j], we increment j (meaning we found the next character we needed).
- Optimization: If j reaches the length of s, we stop immediately and return true (Early Exit).
- If the loop finishes and j has not reached the length of s, return false.

Complexity Analysis
 Time Complexity: O(n)
- Let $n$ be the length of string t.
- We iterate through t at most once.
- Inside the loop, we perform constant time operations.
- Therefore, the complexity is linear O(n).

Space Complexity: O(1)
- We only use two integer variables (i and j) to track indices.
- No extra data structures (like Hash Maps or Arrays) are used.

