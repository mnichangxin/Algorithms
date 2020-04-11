# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def dfs(self, A, B):
        if not B: return True
        if not A: return False
        return A.val == B.val and self.dfs(A.left, B.left) and self.dfs(A.right, B.right)

    def isSubStructure(self, A: TreeNode, B: TreeNode) -> bool:
        if not A or not B: return False
        return self.dfs(A, B) or self.isSubStructure(A.left, B) or self.isSubStructure(A.right, B)
