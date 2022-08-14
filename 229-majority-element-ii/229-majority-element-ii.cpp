class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0;
        int cd1 = -1, cd2 = -1;
        int n3 = nums.size() / 3;
        for(int& i : nums) {
            if(cd1 == i) c1 += 1;
            else if(cd2 == i) c2 += 1;
            else if(c1 == 0) {
                cd1 = i;
                c1 += 1;
            }
            else if(c2 == 0) {
                cd2 = i;
                c2 += 1;
            }
            else {
                c1--;
                c2--;
            }
            if(c1 > n3 and c2 > n3) return {cd1, cd2};
        }
        c1 = 0; c2 = 0;
        for(int& i: nums) {
            if(cd1 == i) c1 += 1;
            else if(cd2 == i) c2 += 1;
            if(c1 > n3 and c2 > n3) return {cd1, cd2};
        }
        if(c1 > n3) return {cd1};
        else if(c2 > n3) return {cd2};
        return {};
    }
};