class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = -1;
        int p = nums.size() / 2;
        for(int& num: nums) {
            if(count == 0)
                candidate = num;
            else if (count > p) return candidate;
            count += num == candidate ? 1 : -1;
        }
        return candidate;
    }
};