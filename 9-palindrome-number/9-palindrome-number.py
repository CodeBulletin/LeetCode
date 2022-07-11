class Solution:
    def isPalindrome(self, x: int) -> bool:
        sx = str(x)
        return sx == sx[::-1]