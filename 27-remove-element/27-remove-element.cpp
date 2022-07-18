class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int swapAt = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                if(swapAt < i) nums[swapAt] = nums[i];
                swapAt += 1;
            }
        }
        return swapAt;
    }
};