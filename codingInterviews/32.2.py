# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if not root: return []
        
        res = []

        queue = [root]

        while queue:
            queue_tmp = []

            for i in range(len(queue)): 
                qhead = queue.pop(0)
                queue_tmp.append(qhead.val)
                if qhead.left: queue.append(qhead.left)
                if qhead.right: queue.append(qhead.right)

            res.append(queue_tmp)

        return res