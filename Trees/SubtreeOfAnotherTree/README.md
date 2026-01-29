Subtree of Another Tree (LeetCode #572)

Problem Statement
Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values as subRoot, and false otherwise.
A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

Example:
Input: root = [3,4,5,1,2], subRoot = [4,1,2]
Output: true

Input: root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]
Output: false

Approach: Traversal with Structure Matching
This problem combines Tree Traversal (Day 10) with Tree Comparison (Day 11).
We treat the subRoot as a template. We visit every node in the main tree (root) and check if the subtree starting at that node matches the template.

Algorithm:
1. Helper Function (isSameTree): Checks if two specific trees are identical in structure and value.
2. Main Function (isSubtree):
   - If root is null, we have run out of tree to check, so return false.
   - Check if the current tree starting at root is identical to subRoot (using helper). If yes, return true.
   - Otherwise, recursively check the Left Child OR the Right Child to see if the match is found deeper down.

Complexity Analysis

Time Complexity: O(n * m)
In the worst case (a skewed tree), for every node in root (n), we might traverse all nodes in subRoot (m).
Average case is often much faster.

Space Complexity: O(h)
h is the height of the tree, used by the recursion stack.

Code Snippet

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;
    if (!p || !q || p->val != q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if (!root) return false;
    if (isSameTree(root, subRoot)) return true;
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}