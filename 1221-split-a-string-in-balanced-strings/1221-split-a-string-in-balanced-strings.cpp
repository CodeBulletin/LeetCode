class Solution {
public:
    int balancedStringSplit(const string& s) {
        int b = 0;
        int n = 0;
        for(const char& c: s) {
            if(c == 'R') b++;
            else b--;     
            if(b == 0) n++;
        }
        return n;
    }
};