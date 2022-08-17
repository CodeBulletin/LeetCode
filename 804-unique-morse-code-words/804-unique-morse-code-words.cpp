class Solution {
public:
    vector<string> map = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.",
                          "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> morse;
        for(const string& i : words) {
            string s = "";
            for(const char& c: i) {
                s += map[c - 'a'];
            }
            morse.insert(s);
        }
        return morse.size();
    }
};