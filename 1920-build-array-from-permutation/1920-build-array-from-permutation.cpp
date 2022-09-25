class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> vec(nums.size(), 0);
        
        for (int i = 0; i < nums.size(); i++) {
            vec[i] = nums[nums[i]];
        }
        
        return vec;
    }
};