class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        deque = []
        result = []

        for i in range(0, len(nums)):
            while deque and nums[i] > nums[deque[-1]]:
                deque.pop()
            
            deque.append(i)

            while i - deque[0] > k - 1:
                deque.pop(0)
            
            if i >= k - 1:
                result.append(nums[deque[0]])
        
        return result