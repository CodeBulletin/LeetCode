class Solution {
public:
    int numJewelsInStones(string& jewels, string& stones) {
        unordered_map<char, int> jcount;
        
        for(const char& i : jewels) jcount[i] = 0;
        
        for(const char& i: stones) if(jcount.find(i) != jcount.end()) jcount[i] += 1;
        
        int j = 0;
        for(const auto& i : jcount) {
            j += i.second;
        }
        return j;
    }
};