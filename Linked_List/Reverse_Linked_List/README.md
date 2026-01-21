 Reverse Linked List (LeetCode#206)

Problem Statement
Given the head of a singly linked list, reverse the list, and return the reversed list.

Example:
Input: 1 -> 2 -> 3 -> NULL
Output: 3 -> 2 -> 1 -> NULL

Approach: Iterative (Three Pointers)
We cannot simply swap values; we must change the next pointers of the nodes. To do this without losing track of the list, we use three pointers:
1. curr: The node we are currently processing.
2. prev: The node behind us (which curr->next will point to).
3. next_node: A temporary storage for the rest of the list.

Algorithm:
1. Initialize prev to NULL and curr to head.
2. Iterate while curr is not NULL.
3. Inside the loop:
   - Save curr->next into next_node.
   - Point curr->next backwards to prev.
   - Advance prev to curr.
   - Advance curr to next_node.
4. Return prev (which is now the new head).

Complexity Analysis

Time Complexity: O(n)
- We visit every node exactly once.

Space Complexity: O(1)
- We only use three pointers (prev, curr, next_node) regardless of the list size.
