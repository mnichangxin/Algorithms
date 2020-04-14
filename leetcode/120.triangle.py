class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        m = len(triangle)

        if m == 0: return 0

        dp = [[0] * len(_) for _ in range(m)]

        dp[0][0] = triangle[0][0]

        for i in range(m):
            for j in range(len(i)):
                dp[i][j] = max(dp[i - 1])