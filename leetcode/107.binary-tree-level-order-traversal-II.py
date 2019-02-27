# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        queue = []
        resultList = []
        if root is not None:
            queue.append(root)
        else:
            return []
        while len(queue) > 0:
            valList = []
            for node in queue:
                valList.append(node.val)
            resultList.append(valList)
            for _ in range(len(queue)):
                t = queue.pop(0)
                if t.left is not None:
                    queue.append(t.left)
                if t.right is not None:
                    queue.append(t.right)
        return resultList[::-1]
