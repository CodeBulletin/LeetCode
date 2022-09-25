class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int kid_with_max_candies = *max_element(candies.begin(), candies.end());
        vector<bool> vec(candies.size(), false);
        
        for (int i = 0; i < candies.size(); i++) {
            if ( kid_with_max_candies <= candies[i] + extraCandies ) vec[i] = true;
        }
        
        return vec;
    }
};