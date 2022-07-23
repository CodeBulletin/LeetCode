class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0, two=0, three=-1;
        for(int i=0; i<nums.size(); i++){
            int mask1 = one & nums[i];
            int mask2 = two & nums[i];
            int mask3 = three & nums[i];
            one = (one | mask3) & (~mask1);
            two = (two | mask1) & (~mask2);
            three = (three | mask2) & (~mask3);
        }
        return one;
    }
};