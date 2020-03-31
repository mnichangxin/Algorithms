class Solution:
    def findMin(self, nums: List[int]) -> int:
        l = 0
        r = len(nums) - 1
        while l < r:
            mid = ((r - l) >> 1) + l
            if nums[r] > nums[mid]:
                r = mid
            elif nums[r] < nums[mid]:
                l = mid + 1
            else:
                r -= 1
        return nums[l]