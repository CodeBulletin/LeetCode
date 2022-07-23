class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int max_sum = nums.size() * (nums.size() + 1) / 2;
        return max_sum - sum;
    }
};