class NumArray:
    def __init__(self, nums):
        self.dp = self.mapDp(nums)

    def mapDp(self, nums):
        n = len(nums)
        dp = [None] * n
        if n > 0:
            dp[0] = nums[0]
        for i in range(1, n):
            dp[i] = dp[i - 1] + nums[i]
        return dp

    def sumRange(self, i: int, j: int) -> int:
        dp = self.dp
        if i == 0:
            return dp[j]
        else:
            return dp[j] - dp[i - 1]
