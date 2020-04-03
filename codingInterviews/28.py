# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def symmetricTree(self, left, right):
        if not left:
            return not right
        if not right:
            return False

        if left.val == right.val:
            return self.symmetricTree(left.left, right.right) and self.symmetricTree(left.right, right.left)

        return False

    def isSymmetric(self, root: TreeNode) -> bool:
        if not root: 
            return True
        return self.symmetricTree(root.left, root.right)
