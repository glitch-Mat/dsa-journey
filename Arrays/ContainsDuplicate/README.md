Contains Duplicate (LeetCode#217)

 Problem Statement
Given an integer array 'nums', return 'true' if any value appears at least twice in the array, and return 'false' if every element is distinct.

 Approach: Hash Set
To solve this problem efficiently, we need a data structure that supports fast lookups. A Hash Set (std::unordered_set in C++) is ideal because it provides average O(1) time complexity for insertion and search operations.

 Algorithm:
1. Initialize an empty Hash Set.
2. Iterate through the input array 'nums'.
3. For each number:
   - Check if it already exists in the Hash Set.
   - If it exists, we have found a duplicate; return 'true'.
   - If not, insert the number into the Hash Set.
4. If the loop completes without finding duplicates, return 'false'.

 Complexity Analysis

 Time Complexity: O(n)
- We iterate through the array of size 'n' exactly once.
- Hash Set lookups and insertions take O(1) time on average.
- Therefore, the total time complexity is O(n).

Space Complexity: O(n)
- In the worst case (where all elements are distinct), we store all n elements in the Hash Set.
- Therefore, the space complexity is O(n).
