# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getKthFromEnd(self, head: ListNode, k: int) -> ListNode:
        if not head: return None

        count = 0

        p1 = head
        p2 = head

        while p1:
            p1 = p1.next
            count += 1

        count -= k

        while count > 0:
            p2 = p2.next
            count -= 1

        return p2