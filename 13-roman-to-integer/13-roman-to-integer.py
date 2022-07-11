SYMBOLS = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
NEG = [['I', 'V'], ['I', 'X'], ['X', 'L'], ['X', 'C'], ['C', 'D'], ['C', 'M']]
class Solution(object):
    def romanToInt(self, s):
        value = 0
        i = 0
        while i < len(s):
            curr = s[i]
            if i < len(s) - 1:
                nxt = s[i + 1]
            else:
                nxt = None
            
            if [curr, nxt] in NEG:
                value += SYMBOLS[nxt] - SYMBOLS[curr]
                i += 1
            else:
                value += SYMBOLS[curr]
            i += 1
        return value
        
        