# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        if not preorder or not inorder:
            return None

        root = TreeNode(preorder.pop(0))

        rootInorderIndex = inorder.index(root.val)

        leftNode = self.buildTree(preorder, inorder[:rootInorderIndex])
        rightNode = self.buildTree(preorder, inorder[rootInorderIndex + 1:])
        
        root.left = leftNode
        root.right = rightNode

        return root