class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        if len(s) == 0 or s[0] not in '+-0123456789':
            return 0
        if len(s) == 1 and s[0] in '+-':
            return 0
        if len(s) > 1 and s[0] in '+-' and s[1] not in '0123456789':
            return 0;
        return max(-2147483648, min(int(re.findall('[+-]?[\d]+', s)[0]), 2147483647))