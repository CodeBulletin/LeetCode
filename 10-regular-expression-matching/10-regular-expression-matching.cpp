class Solution {
public:
    bool isMatch(string s, string p) {
        bool dp[21][31] = { true };
        for (int i = 0; i <= s.length(); i++) 
            for (int j = 1; j <= p.length(); j++) 
                dp[i][j] = 
                    p[j-1] == '*' ?
                        dp[i][j-2] || i-1 >= 0 && dp[i-1][j] && (p[j-2] == s[i-1] || p[j-2] == '.') :
                        i-1 >= 0 && dp[i-1][j-1] && (p[j-1] == '.' || p[j-1] == s[i-1]); 
                    
        return dp[s.size()][p.size()];
    }
};