class Solution {
public:
    string restoreString(const string& s, const vector<int>& indices) {
        vector<char> vec(s.size());
        int i = 0;
        for(const int& k : indices) {
            vec[k] = s[i];
            i += 1;
        }
        return string(vec.begin(), vec.end());
    }
};