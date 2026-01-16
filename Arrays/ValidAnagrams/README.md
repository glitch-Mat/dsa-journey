Valid Anagram (LeetCode#242)
Problem Statement
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Approach: Frequency Array
Since the inputs are constrained to lowercase English letters, we can use a Fixed-Size Frequency Array (size 26) instead of a Hash Map. This allows us to map each character 'a'-'z' to an index 0-25 directly using ASCII values.

Algorithm:
1. Check if lengths of s and t are equal. If not, return false.
2. Initialize a vector of size 26 with zeros.
3. Iterate through string s and increment counts for each character.
4. Iterate through string t and decrement counts for each character.
5. Finally, check if the frequency array contains only zeros. If any value is non-zero, the strings are not anagrams.

 Complexity Analysis

 Time Complexity: O(n)
 We iterate through the strings (length $n$) twice and the fixed-size array (size 26) once.
 Total operations approx 2n + 26.
 In Big O notation, this simplifies to linear time O(n).

 Space Complexity: O(1)
 We use a vector of fixed size 26, regardless of the input string size.
 Since the space required does not grow with input size n, this is Constant Space O(1).

