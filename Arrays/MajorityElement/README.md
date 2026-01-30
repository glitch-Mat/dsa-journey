Majority Element (LeetCode#169)

Problem Statement
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.

Example:
Input: nums = [3,2,3]
Output: 3

Input: nums = [2,2,1,1,1,2,2]
Output: 2

Approach 1: Hash Map (Frequency Counting)
We can count the occurrences of each element using a Hash Map. Since the majority element appears more than n/2 times, it will strictly have the highest count in the map.

Algorithm:
1. Initialize an unordered_map to store the frequency of each number.
2. Iterate through the array.
3. For each number, increment its count in the map.
4. Track the number with the highest count seen so far.
5. Return the number with the highest count.

Complexity Analysis

Time Complexity: O(n)
We iterate through the array once. Hash map insertions and lookups take O(1) on average.

Space Complexity: O(n)
In the worst case, the map may store up to n - (n/2) distinct elements, which scales linearly with the input size.
