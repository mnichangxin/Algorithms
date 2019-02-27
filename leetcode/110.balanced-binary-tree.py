# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def recursiveTreeDepth(self, t: TreeNode, leftDepth: int, rightDepth: int) -> bool:
        if t.left is not None:
            leftDepth += 1
            self.recursiveTreeDepth(t.left, leftDepth, rightDepth)
        if t.right is not None:
            rightDepth += 1
            self.recursiveTreeDepth(t.right, leftDepth, rightDepth)
        return abs(leftDepth - rightDepth) <= 1

    def isBalanced(self, root: TreeNode) -> bool:
        if root is None:
            return False
        return self.recursiveTreeDepth(root, 0, 0)
