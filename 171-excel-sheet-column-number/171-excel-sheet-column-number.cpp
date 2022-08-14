class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int k = 0;
        for(int i = 0; i < n; i++) {
            k += (columnTitle[i]-'A'+1) * pow(26, n-i-1);
        }
        return k;
    }
};