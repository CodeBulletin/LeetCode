class Solution {
public:
    bool detectCapitalUse(string& word) {
        bool islower = true, iscaptial = true, isonlyfirstcaptial = true;
        for(int i = 0; i < word.size(); i++) {
            if(word[i] == toupper(word[i])) {
                islower = false;
                if(i != 0) isonlyfirstcaptial = false;
            }
            else {
                iscaptial = false;
                if(i == 0) isonlyfirstcaptial = false;
            }
        }
        return islower || iscaptial || isonlyfirstcaptial;
    }
};