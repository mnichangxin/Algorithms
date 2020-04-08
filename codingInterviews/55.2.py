# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def getDepth(self, root):
        if not root: return 0

        return max(self.getDepth(root.left), self.getDepth(root.right)) + 1

    def isBalanced(self, root: TreeNode) -> bool:
        if not root: return True

        leftDepth = self.getDepth(root.left)
        rightDepth = self.getDepth(root.right)

        if abs(leftDepth - rightDepth) > 1: return False

        return self.isBalanced(root.left) and self.isBalanced(root.right)