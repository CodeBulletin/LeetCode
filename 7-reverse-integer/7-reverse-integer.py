import math

class Solution:
    def reverse(self, x: int) -> int:
        if x == 0:
            return 0
        X = str(abs(x))
        y = int(round(x/abs(x)) * int(X[::-1]))
        if y >= -2147483648 and y <= 2147483647:
            return y
        else:
            return 0