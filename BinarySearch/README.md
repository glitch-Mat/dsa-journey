Binary Search (LeetCode#704)

Problem Statement
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

Example:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

Approach: Divide and Conquer
Since the array is sorted, we use Binary Search to eliminate half of the remaining elements in each step.

Algorithm:
1. Initialize left to 0 and right to n - 1.
2. While left <= right:
   - Calculate `mid` safely: left + (right - left) / 2.
   - If nums[mid] equals target, return mid.
   - If nums[mid] is greater than target, discard the right half (right = mid - 1).
   - If nums[mid] is less than target, discard the left half (left = mid + 1).
3. If the loop terminates, the target is not present. Return -1.

Complexity Analysis

Time Complexity: O(log n)
- The search space is halved in every iteration. For an array of size N, the maximum number of iterations is log2(N).

Space Complexity: O(1)
- We use a constant amount of extra space (left, right, mid) regardless of the input size.

