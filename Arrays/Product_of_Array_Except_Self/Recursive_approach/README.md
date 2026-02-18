Product of Array Except Self (LeetCode#238)
Problem Statement
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The algorithm must run in O(n) time and without using the division operation.

Example:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Approach 1: Recursive Prefix-Suffix Passing
We solve this by breaking the problem into two parts for every index i:

Prefix Product: The product of all numbers to the left (passed down the recursion).

Suffix Product: The product of all numbers to the right (returned up the recursion).

At each step, we compute result[i] = prefix * suffix.

Complexity Analysis
Time Complexity: O(N)

We visit every node exactly once.

Space Complexity: O(N)

The recursion stack depth is equal to the size of the array (N).

