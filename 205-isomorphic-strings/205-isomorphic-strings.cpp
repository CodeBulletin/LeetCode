class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() == 1) return true;
        
        auto set = unordered_set<short int>();
        auto set1 = unordered_set<char>(s.begin(), s.end());
        auto set2 = unordered_set<char>(t.begin(), t.end());
        
        for(int i = 0; i < s.size(); i++) {
            short int value = (short int)s[i] + ((short int)t[i] << 8);
            set.insert(value);
        }
        
        return set1.size() == set.size() and set1.size() == set2.size();
    }
};