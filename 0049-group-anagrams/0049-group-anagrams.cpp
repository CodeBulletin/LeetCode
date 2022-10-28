class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strmap;
        int idx = 0;
        for(string s: strs) {
            sort(s.begin(), s.end());
            if(strmap.find(s) != strmap.end()) {
                strmap[s].push_back(strs[idx]);
            }
            else {
                strmap[s] = vector<string>(1, strs[idx]);
            }
            idx++;
        }
        vector<vector<string>> vecl;
        for(auto& i : strmap) {
            vecl.push_back(i.second);
        }
        return vecl;
    }
};