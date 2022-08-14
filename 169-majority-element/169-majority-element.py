class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        return max(set(nums),key=nums.count)