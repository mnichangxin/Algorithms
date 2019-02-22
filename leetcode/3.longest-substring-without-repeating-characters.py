class Solution:
    def lengthOfLongestSubstring(self, s: 'str') -> 'int':
        strSet = set()
        ans = 0
        i = 0
        j = 0
        n = len(s)
        while i < n and j < n:
            if s[j] not in strSet:
                strSet.add(s[j])
                j += 1
                ans = max(ans, j - i)
            else:
                strSet.remove(s[i])
                i += 1
        return ans
