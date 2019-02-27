# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def recursiveTreeDepth(self, t: TreeNode) -> bool:
        if t is None:
            return 0
        leftDepth = self.recursiveTreeDepth(t.left)
        rightDepth = self.recursiveTreeDepth(t.right)
        if leftDepth == -1 or rightDepth == -1:
            return -1
        if abs(leftDepth - rightDepth) > 1:
            return -1
        return max(leftDepth, rightDepth) + 1

    def isBalanced(self, root: TreeNode) -> bool:
        return self.recursiveTreeDepth(root) != -1
