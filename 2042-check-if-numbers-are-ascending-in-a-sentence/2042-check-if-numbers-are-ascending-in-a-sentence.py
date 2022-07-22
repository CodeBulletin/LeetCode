import re

class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        table = s.maketrans('abcdefghijklmnopqrstuvwxyz', '                          ')
        s = [int(i) for i in re.sub(' +', ' ', s.translate(table)).strip().split(' ')]
        for i in range(len(s) - 1):
            if s[i] >= s[i+1]:
                return False
        return True;