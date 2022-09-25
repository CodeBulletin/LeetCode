class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1;
        for(vector<int> i: accounts) {
            int s = accumulate(i.begin(), i.end(), 0);
            if (s > max) {
                max = s;
            }
        }
        return max;
    }
};