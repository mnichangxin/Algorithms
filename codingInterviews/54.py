# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def calcNum(self, root, k):
        if not root: return None

        self.calcNum(root.right, k)
        
        if self.num == 0: return

        self.num = self.num - 1

        if self.num == 0: self.res = root.val

        self.calcNum(root.left, k)

        return root

    def kthLargest(self, root: TreeNode, k: int) -> int:
        self.num = k
        self.calcNum(root, k)

        return self.res