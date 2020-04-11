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
                qHead = queue.pop(0)
                queue_tmp.append(qHead.val)
                if qHead.left: queue.append(qHead.left)
                if qHead.right: queue.append(qHead.right)

            res.append(queue_tmp if len(res) % 2 == 0 else queue_tmp[::-1])

        return res             