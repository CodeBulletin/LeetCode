class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> jcount;
        
        for(char i : jewels) jcount[i] = 0;
        
        for(char i: stones) if(jcount.find(i) != jcount.end()) jcount[i] += 1;
        
        int j = 0;
        for(auto i : jcount) {
            j += i.second;
        }
        return j;
    }
};