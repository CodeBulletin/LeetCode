class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec(2*n, 0);
        
        for(int i = 0; i < n; i++) {
            vec[2*i] = nums[i];
            vec[2*i + 1] = nums[n + i];
        }
        
        return vec;
    }
};