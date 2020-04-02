class Solution:
    def movingCount(self, m: int, n: int, k: int) -> int:
        def sums(x):
            s = 0
            while x:
                s += x % 10
                x = x // 10
            return s

        def dfs(i, j):
            if i == m or j == n or sums(i) + sums(j) > k or (i, j) in marked:
                return
            marked.add((i, j))
            dfs(i + 1, j)
            dfs(i, j + 1)

        marked = set()

        dfs(0, 0)

        return len(marked)

        