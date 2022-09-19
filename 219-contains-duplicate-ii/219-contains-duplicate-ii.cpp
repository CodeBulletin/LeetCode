class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        auto set = unordered_set<int>();
        
        int ptr = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if (i - ptr > k) {
                set.erase(set.find(nums[ptr]));
                ptr++;
            }
            if (set.find(nums[i]) != set.end()) {
                return true;
            }
            else set.insert(nums[i]);
        }
        return false;
    }
};