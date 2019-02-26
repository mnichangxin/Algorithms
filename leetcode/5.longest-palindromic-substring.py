class Solution:
    def isPalindrome(self, s: 'str') -> 'bool':
        return s == s[::-1]

    def getPalindrome(self, s: 'str', i: 'int', j: 'int') -> 'str':
        return self.getPalindrome(s, i, j)

    def longestPalindrome(self, s: 'str') -> 'str':
        n = len(s)
        return self.getPalindrome(s, 0, 0)
