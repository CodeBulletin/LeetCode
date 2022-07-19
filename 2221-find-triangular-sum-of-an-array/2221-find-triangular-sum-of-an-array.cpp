class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i = nums.size() - 1;
        for(; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                nums[j] = (nums[j+1]+nums[j])%10;
            }
        }
        return nums[0];
    }
};