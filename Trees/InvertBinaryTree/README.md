Invert Binary Tree (LeetCode#226)

Problem Statement
Given the root of a binary tree, invert the tree, and return its root.
Inverting a tree means swapping the left and right children for every node in the tree.

Example:
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]

Input: root = [2,1,3]
Output: [2,3,1]

Approach: Depth First Search (Recursion)
We can solve this by visiting every node and swapping its left and right children.

Algorithm:
1. Base Case: If the current node (root) is NULL, return NULL.
2. Swap Step: Create a temporary pointer to hold the left child. Set the left child to the right child. Set the right child to the temporary pointer.
3. Recursive Step: Recursively call the function on the left child and the right child to continue the inversion down the tree.
4. Return: Return the root of the current subtree.

Complexity Analysis

Time Complexity: O(n)
We visit every node in the tree exactly once to perform the swap operation.

Space Complexity: O(h)
h is the height of the tree, used by the recursion stack.
In the worst case (skewed tree), this is O(n).
In the best case (balanced tree), this is O(log n).

