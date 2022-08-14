class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int& target) {
        for(int i = 0; i < nums.size()-1; i++) {
            int ct = target - nums[i];
            for(int j = i+1; j < nums.size(); j++ )
                if(nums[j] == ct)
                    return {i, j};
        }
        return {0, 0};
    }
};