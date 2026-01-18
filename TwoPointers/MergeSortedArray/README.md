 Merge Sorted Array (LeetCode #88)

Problem Statement
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums2 into nums1 so that the resulting array is also sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n.

## Approach: Reverse Two Pointers
Since nums1 has empty space at the end, we can avoid overwriting elements by filling the array backwards (from index m + n - 1 down to 0).

Algorithm:
1. Initialize three pointers:
   - i at m - 1 (Last valid element of nums1).
   - j at n - 1 (Last element of nums2).
   - p at m + n - 1 (Last index of nums1 capacity).
2. Compare nums1[i] and nums2[j]. Place the larger value at nums1[p].
3. Decrement p and the pointer of the chosen element (i or j).
4. Repeat until one array is exhausted.
5. If nums2 still has elements (because nums1 finished first), copy the rest of nums2 into nums1.
   - Note: If nums1 has elements left, we don't need to do anything because they are already in their correct sorted positions.

 Complexity Analysis
Time Complexity: O(m + n)
- We iterate through both arrays exactly once from back to front.

Space Complexity: O(1)
- We perform the merge in-placeusing the provided space in nums1. No extra data structures are used.
