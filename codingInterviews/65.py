class Solution:
    def add(self, a: int, b: int) -> int:
        a &= 0xffffffff
        b &= 0xffffffff

        while b != 0:
            sum = a ^ b
            carray = ((a & b) << 1) & 0xffffffff
            a = sum
            b = carray
        
        if a < 0x80000000:
            return a
        else:
            return ~(a ^ 0xffffffff)