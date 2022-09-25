class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> candies, int extraCandies) {
        vector<bool> vec(candies.size(), false);
        int max = -1;
        
        for (int i : candies) if (i > max) max = i;
        
        for (int i = 0; i < candies.size(); i++) {
            if ( max <= candies[i] + extraCandies ) vec[i] = true;
        }
        
        return vec;
    }
};