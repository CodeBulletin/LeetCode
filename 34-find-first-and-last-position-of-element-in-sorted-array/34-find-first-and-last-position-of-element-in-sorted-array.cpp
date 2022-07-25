class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v1 = {-1, -1};
        
        if(nums.size() == 0) return v1;
        
        int low = 0, high = nums.size() - 1;
        while (low < high) {
            int mid = (low + high) / 2;
            if (target <= nums[mid]) high = mid;
            else low = mid + 1;
        }
        if(nums[low] != target) return v1;
        
        v1[0] = low;
        high = nums.size() - 1;
        while (low < high) {
            int mid = (low + high) / 2 + 1;
            if (target < nums[mid]) high = mid - 1;
            else low = mid;
        }
        v1[1] = high;
        return v1;
    }
};