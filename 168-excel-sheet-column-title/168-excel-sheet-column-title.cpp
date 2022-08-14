class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while ( columnNumber > 0) {
            int rem = columnNumber % 26;
            if ( rem == 0 ) {
                columnNumber = columnNumber - 26;
                rem = 26;
            } else {
                columnNumber = columnNumber - columnNumber%26;
            }
            ans = (char)(rem + 'A' - 1) + ans;
            columnNumber = columnNumber/26;
        }
        return ans;
    }
};