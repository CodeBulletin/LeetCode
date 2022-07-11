class Solution(object):
    def threeSumClosest(self, nums, target):
        nums = sorted(nums)
        diff = float('inf')
        output = 0
        for i in range(len(nums)-2):
            if i>0 and nums[i] == nums[i-1]:
                continue
            l, r = i+1, len(nums)-1
            t= target-nums[i]
            while (l<r):
                a = nums[l]+nums[r]
                if a == t:
                    return target
                elif a < t:
                    if target-(a+nums[i]) < diff:
                        diff = target-(a+nums[i])
                        output = a+nums[i]
                    l += 1
                else:
                    if (a+nums[i])-target < diff:
                        diff = (a+nums[i])-target
                        output = a+nums[i]
                    r -= 1
        return output