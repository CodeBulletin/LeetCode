class Solution(object):
    def longestCommonPrefix(self, strs):
        prefix_length = len(strs[0])
        prefix = strs[0]
        
        for i in strs[1:]:
            if i[:prefix_length] == prefix:
                continue
            else:
                if len(i) < prefix_length:
                    prefix_length = len(i)
                    prefix = prefix[:prefix_length]
                    
                for j in range(prefix_length):
                    if i[j] != prefix[j]:
                        prefix_length = j
                        prefix = prefix[:prefix_length]
                        break
        return prefix
        