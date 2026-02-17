Majority Element (LeetCode#169)

Problem Statement
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times.

Approach 2: Boyer-Moore Voting Algorithm (Optimal)
We simulate a battle. We maintain a candidate and a count.
If count is 0, we pick the current number as the new candidate.
If the current number is the same as the candidate, we increment count (Reinforcements).
If the current number is different, we decrement count (They kill each other).

Since the Majority Element appears > n/2 times, it will survive all one-for-one cancellations and remain standing at the end.

Complexity Analysis
Time Complexity:O(n) - Single pass.
Space Complexity:O(1) - Only two variables used.
