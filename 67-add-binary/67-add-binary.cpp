class Solution {
public:
    int getValue(string& str, int pos) {
        if (str.size() > pos and pos >= 0) return str[pos] == '1' ? 1 : 0;
        else return 0;
    }
    
    string toStr(int val) {
        return val == 1 ? "1": "0";
    }
    
    string addBinary(string a, string b) {
        int Carry = 0;
        int n = max(a.size(), b.size());
        string c = "";
        
        for(int i = 0; i < n; i++) {
            int sum = Carry + getValue(a, a.size()-i-1) + getValue(b, b.size()-i-1);
            int Digit = sum%2;
            Carry = (sum - Digit) / 2;
            c = toStr(Digit) + c;
        }
        if(Carry == 1) c = "1" + c;
        return c;
    }
};