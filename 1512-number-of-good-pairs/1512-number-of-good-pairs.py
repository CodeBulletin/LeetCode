class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = 0
        j = len(nums) - 1
        while j >= 0:
            i = j - 1
            while i >= 0:
                if nums[i] == nums[j]:
                    l += 1
                i -= 1
            j -= 1
        return l
        
        