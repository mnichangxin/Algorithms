class Solution:
    def findRepeatNumber(self, nums: List[int]) -> int:
        numberDict = {}
        N = len(nums)
        for i in range(N):
            if numberDict.get(nums[i]):
                return nums[i]
            else:
                numberDict[nums[i]] = 1
        return -1