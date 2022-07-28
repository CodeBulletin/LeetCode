class Solution {
public:
    bool isPalindrome(string s) {
        std:: transform(s.begin(), s.end(), s.begin(), ::tolower);
        auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
            return !std::isalnum(c);
        });
        s.erase(it, s.end());
        string p = s;
        reverse(p.begin(), p.end());
        return p == s;
    }
};