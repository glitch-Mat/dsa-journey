 Merge Two Sorted Lists (LeetCode #21)

 Problem Statement
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted linked list. The list should be made by splicing together the nodes of the first two lists.

 Approach: Iterative (Dummy Node)
We use a Dummy Node approach to simplify the logic. This eliminates the need to write separate logic for initializing the head of the new list.

Algorithm:
1. Create a dummy node on the stack. Initialize a pointer tail to &dummy.
2. Iterate while both list1 and list2 are not null:
   - Compare list1->val and list2->val.
   - Point tail->next to the smaller node.
   - Advance the pointer of the chosen list.
   - Advance tail.
3. After the loop, one list might still have nodes. Attach the non-null remainder to tail->next.
4. Return dummy.next (the actual head of the merged list).

Complexity Analysis

 Time Complexity: O(n + m)
- We iterate through both lists exactly once, where n and m are the lengths of the lists.

 Space Complexity: O(1)
- We only rearrange pointers. We do not create any new nodes (except for the temporary dummy node on the stack).

