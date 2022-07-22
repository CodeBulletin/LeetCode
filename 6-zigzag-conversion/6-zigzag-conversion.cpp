class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length()==1 || numRows==1) {
            return s;
        }
        vector<string> v(numRows);
        for (int i=0; i<s.length(); ) {
            for (int k=0; k<numRows-1; k++) {
                if (i==s.length()) {
                    break;
                }
                v[k] += s[i];
                i++;
            }
            for(int k=numRows-1; k>0; k--) {
                if(i==s.length()) {
                    break;
                }
                v[k] += s[i];
                i++;
            }
            
        }
        string ans="";
        for(auto& it : v) {
            ans+= it;
        }
        
        return ans;
    }
};