# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        if len(preorder) == 0:
            return None

        root = TreeNode(preorder[0])

        rootPreOrderIndex = preorder.index(root.val)
        rootInorderIndex = inorder.index(root.val)

        nextPreorder = preorder[rootPreOrderIndex + 1:]

        leftInorder = inorder[:rootInorderIndex]
        rightInorder = inorder[rootInorderIndex:]

        leftNode = self.buildTree(nextPreorder, leftInorder)
        rightNode = self.buildTree(nextPreorder, rightInorder)
        
        root.left = leftNode
        root.right = rightNode

        return root