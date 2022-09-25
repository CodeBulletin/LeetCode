class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int num = 0;
        vector<int> vec(nums.size(), 0);
        
        for (int i = 0; i < nums.size(); i++) {
            num += nums[i];
            vec[i] = num;
        }
        
        return vec;
    }
};