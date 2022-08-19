void hammingWeight(int& n) {
    int i = 0;
    while(n > 0) {
        if(n%2 != 0) i +=  1;
        n >>= 1;
    }
    n = i;
}

class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        unordered_set<int> s;
        for (int& i : nums)
            s.insert(i);
        nums.assign(s.begin(), s.end());
        for_each(nums.begin(), nums.end(), &hammingWeight);
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size()-1;
        long long count = 0;
        while(i <= j) {
            if(nums[j] + nums[i] >= k) {
                count += 2*(j-i) + 1;
                j--;
            }
            else i++;
        }
        return count;
    }
};