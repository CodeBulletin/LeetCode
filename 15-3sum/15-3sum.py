class Solution(object):
    def threeSum(self, nums):
        nums.sort()
        d = {}
        for i, num in enumerate(nums):
            d[num] = i

        length = len(nums)
        result = set()
		
        # Traverse the list, ensure i < j < target index, skip duplicate
        for i in range(length - 2):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            else:
                for j in range(i + 1, length- 1):
                    target = - (nums[i] + nums[j])
                    if target in d and d[target] > j:
                        result.add( (nums[i], nums[j], target))
        return result