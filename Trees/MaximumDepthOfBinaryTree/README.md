Maximum Depth of Binary Tree (LeetCode#104)

Problem Statement
Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example:
Input: root = [3,9,20,null,null,15,7]
Output: 3

Approach: Depth First Search (Recursion)
We use a recursive "Bottom-Up" approach.
1.  Base Case: If a node is NULL, it contributes 0 to the depth.
2.  Recursive Step: For any node, we ask for the depth of its left child and right child.
3.  Calculation: The depth of the current node is 1 (itself) plus the maximum of the two children's depths.

Formula:
Depth(node) = 1 + max(Depth(left), Depth(right))

Complexity Analysis

Time Complexity: O(n)
- We visit every node exactly once to calculate its depth.

Space Complexity: O(h)
- h is the height of the tree. This space is used by the recursion stack.
- Worst case (skewed tree): O(n).
- Best case (balanced tree): O(log n).
