class Solution {
public:
    string countAndSay(string& str) {
        string say = "";
        
        char last = str[0];
        int lastc = 1;
        
        for(int i = 1; i < str.size(); i++) {
            if(last != str[i]) {
                say += (char)(lastc + 48);
                say += last;
                last = str[i];
                lastc = 1;
            } else {
                lastc++;
            }
        }
        
        say += (char)lastc + 48;
        say += last;
        return say;
    }
    
    string countAndSay(int n) {
        string say = "1";
        for(int i = 1; i < n; i++) {
            say = countAndSay(say);
        }
        return say;
    }
};