class Solution {
public:
    string decodeMessage(const string& key, const string& message) {
        unordered_map<char, char> keymap;
        int i = 0;
        for(const char& k : key) {
            if(k != ' ' && keymap.find(k) == keymap.end()) {
                keymap[k] = i + 'a';
                i++;
            }
        }
        keymap[' '] = ' ';
        
        string str;
        for(const char& c: message) {
            str += keymap[c];
        }
        
        return str;
    }
};