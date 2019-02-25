# class Solution:
#     '''
#     memoization
#     '''
#     def takeSteps(self, i, n, memo):
#         if i > n:
#             return 0
#         if i == n:
#             return 1
#         if memo[i] > 0:
#             return memo[i]
#         memo[i] = self.takeSteps(i + 1, n, memo) + \
#           self.takeSteps(i + 2, n, memo)
#         return memo[i]

#     def climbStairs(self, n: 'int') -> 'int':
#         memo = [0] * n
#         return self.takeSteps(0, n, memo)


class Solution:
    '''
    dynamic programming
    '''
    def climbStairs(self, n: 'int') -> 'int':
        if n == 1:
            return 1
        dp = [None] * (n + 1)
        dp[1] = 1
        dp[2] = 2
        for i in range(3, n + 1):
            dp[i] = dp[i - 1] + dp[i - 2]
        return dp[n]

solution = Solution()
print(solution.climbStairs(500))
