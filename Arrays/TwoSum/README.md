 Two Sum (LeetCode Easy)
  Approach

The brute-force solution is O(n²), which is unacceptable. The optimal approach uses a Hash Map (C++ 'unordered_map') to reduce the time complexity to O(n).

  Logic

1. Iterate through the array once.
2. For each number ('nums[i]'), calculate the complement (p = target - nums[i]).
3. Check if the complement ('p') exists in the Hash Map.
     If yes, return the indices of the current number and the complement.
     If no, insert the current number and its index into the Hash Map.

 Time & Space Complexity

Time Complexity: O(n). We iterate over the array only once, and Hash Map operations (insert/lookup) are O(1) on average.
Space Complexity: O(n). In the worst case, we store all n elements in the Hash Map.