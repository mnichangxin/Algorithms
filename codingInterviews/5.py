class Solution:
    def replaceSpace(self, s: str) -> str:
        replacedStr = ''
        N = len(s)
        for i in range(N):
            if s[i] == ' ':
                replacedStr += '%20'
            else:
                replacedStr += s[i]
        return replacedStr