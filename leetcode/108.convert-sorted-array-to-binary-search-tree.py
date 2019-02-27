# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

# [-10, -3, 0, 5, 9]

# [-10, -3]
# 0
# [5, 9]

# [-10]
# -3

# [5]
# 9

import math


class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        n = len(nums)
        if n == 0:
            return []
        mid = int(math.ceil(n // 2))
        t = TreeNode(nums[mid])
        t.left = self.sortedArrayToBST(nums[0:mid])
        t.right = self.sortedArrayToBST(nums[mid + 1:])
        return t
