class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int& i : nums) {
            if(map[i] == NULL)
                map[i] = 1;
            else
                map[i]++;
            if(map[i] == 2){
                return true;
            }
        }
        return false;
    }
};