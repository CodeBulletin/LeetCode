class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = nums[0];
        int ptr = 1, count = 0;
        
        for(int i = 1; i < nums.size(); i++) {
            if (!(current == nums[i])) {
                current = nums[i];
                nums[ptr] = current;
                ptr++;
                count = 0;
            } else if (!count) {
                nums[ptr] = current;
                ptr++;
                count++;
            }
        }
        
        return ptr;
    }
};