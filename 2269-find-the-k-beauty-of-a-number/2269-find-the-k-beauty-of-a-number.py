class Solution:
    def divisorSubstrings(self, num: int, k: int) -> int:
        num = str(num)
        j = 0
        for i in range(0, len(num) - k + 1):
            substr = int(num[i:i+k]);
            if substr != 0 and int(num) % substr == 0:
                j+=1
        return j
        