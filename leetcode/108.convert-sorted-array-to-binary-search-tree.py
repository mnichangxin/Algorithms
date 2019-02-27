# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def recursiveArrayToBST(self, nums: List[int]) -> TreeNode:
        if not nums:
            return
        n = len(nums)
        mid = n // 2
        t = TreeNode(nums[mid])
        t.left = self.recursiveArrayToBST(nums[:mid])
        t.right = self.recursiveArrayToBST(nums[mid + 1:])
        return t

    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
        return self.recursiveArrayToBST(nums)
