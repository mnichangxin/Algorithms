class Solution:
    def maxSubArray(self, nums: 'List[int]') -> 'int':
        n = len(nums)
        dp = [None] * n
        dp[0] = nums[0]
        maxSum = dp[0]
        for i in range(1, n):
            dp[i] = max(nums[i], dp[i - 1] + nums[i])
        return max(dp)
