class Solution {
    static vector<vector<string>> mem;
    static int h;
public:
    void gen(vector<string>& ans, string& str, const int open, const int close, const int& max) {
        if (str.size() == max * 2) {
            ans.push_back(str);
            return;
        }
        if (open < max) {
            str += '(';
            gen(ans, str, open+1, close, max);
            str.resize(str.size() - 1);
        }
        if (close < open) {
            str.append(")");
            gen(ans, str, open, close+1, max);
            str.resize(str.size() - 1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string tmp = "";
        gen(ans, tmp, 0, 0, n);
        return ans;
    }
};