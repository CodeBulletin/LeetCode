class Solution {
public:
    string sortSentence(string s) {
        string tmp; 
        stringstream ss(s);
        vector<string> v(9, "");
        while(getline(ss, tmp, ' ')){
            int i = tmp[tmp.size() - 1] - '1';
            tmp.resize(tmp.size() - 1);
            v[i] = tmp;
        }
        tmp = "";
        for(const string& str: v) if(str != "") tmp += str + " ";
        tmp.resize(tmp.size() - 1);
        return tmp;
    }
};