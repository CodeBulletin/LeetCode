class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a1 = "", a2 = "";
        
        for(const string& str: word1) a1 += str;
        
        for(const string& str: word2) a2 += str;
        
        return a1 == a2;
    }
};