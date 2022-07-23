class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans = {0, 0};
        int el = 0;
        for(int N:nums){
            el ^= N;
        }
        el &= (int)(-(long)el);
        for(int N:nums){
            if((N&el)==0){
                ans[0] ^= N;
            }
            else{
                ans[1] ^= N;
            }
        }
        return ans;
    }
};