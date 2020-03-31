class CQueue:

    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def appendTail(self, value: int) -> None:
        return self.stack1.append(value)

    def deleteHead(self) -> int:
        if len(self.stack1) == 0:
            return -1

        while len(self.stack1) > 0:
            self.stack2.append(self.stack1.pop())

        head = self.stack2.pop()

        while len(self.stack2) > 0:
            self.stack1.append(self.stack2.pop())
        
        return head

# Your CQueue object will be instantiated and called as such:
# obj = CQueue()
# obj.appendTail(value)
# param_2 = obj.deleteHead()