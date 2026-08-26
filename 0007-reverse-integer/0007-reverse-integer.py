class Solution:
    def reverse(self, x: int) -> int:
        if x < 0:
            sign = -1
            x = -x
        else:
            sign = 1
        ans = 0
        while x > 0:
            n = x % 10
            x //= 10
            ans = ans * 10 + n

        
        if ans < -2147483648 or ans > 2147483647:
            return 0


        return  sign * ans
