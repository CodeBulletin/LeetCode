class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int CurrentIndex = 0;
        int CurrentValue = -101;
        
        for(int i = 0; i < nums.size(); i++) {
            if(CurrentValue != nums[i]) {
                CurrentValue = nums[i];
                nums[CurrentIndex] = CurrentValue;
                CurrentIndex += 1;
            }
        }
        return CurrentIndex;
    }
};