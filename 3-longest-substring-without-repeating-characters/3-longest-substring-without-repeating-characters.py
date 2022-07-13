class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_substr = 0 
        for j in range(len(s)):
            substr = ''
            out = 0
            for i in s[j:]:
                if i in substr:
                    break;
                substr += i
                out += 1
            if out > max_substr:
                max_substr = out
        return max_substr