# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrder(self, root: TreeNode) -> List[int]:
        if not root: return []
        
        res = []
        
        queue = [root]
        
        while queue:
            qhead = queue.pop(0)

            if qhead: 
                res.append(qhead.val)

                queue.append(qhead.left)
                queue.append(qhead.right)
        
        return res