class Solution:
    def isPalindrome(self, x: int) -> bool:
        s = str(x)
        rev = "".join(reversed(s))

        return s == rev
