Same Tree (LeetCode#100)

Problem Statement
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Example:
Input: p = [1,2,3], q = [1,2,3]
Output: true

Input: p = [1,2], q = [1,null,2]
Output: false

Approach: Depth First Search (Recursion)
We can traverse both trees simultaneously and compare them node by node.

Algorithm:
1. Base Case (Match): If both p and q are NULL, the trees match at this position. Return true.
2. Base Case (Mismatch): If only one of them is NULL, or if their values (p->val vs q->val) are different, the trees do not match. Return false.
3. Recursive Step: If the current nodes match, recursively check if p->left is same as q->left AND p->right is same as q->right.

Complexity Analysis

Time Complexity: O(n)
We traverse every node in both trees exactly once to compare them. n is the minimum number of nodes in the two trees.

Space Complexity: O(h)
h is the height of the tree, used by the recursion stack.
In the worst case (skewed tree), this is O(n).
In the best case (balanced tree), this is O(log n).

