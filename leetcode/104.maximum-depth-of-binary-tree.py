# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def recursiveTree(self, t: TreeNode, deepth: int) -> int:
        if t is None:
            return deepth
        deepth += max(
            self.recursiveTree(t.left, deepth),
            self.recursiveTree(t.right, deepth)
        )
        return deepth

    def maxDepth(self, root: TreeNode) -> int:
        if root is None:
            return 0
        return max(
            self.recursiveTree(root.left, 1), self.recursiveTree(root.right, 1)
        )
