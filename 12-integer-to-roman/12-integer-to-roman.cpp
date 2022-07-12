class Solution {
public:
    unordered_map<string, int> roman_value {
        {"I", 1}, {"IV", 4}, {"V", 5}, {"IX", 9}, {"X", 10},
        {"XL", 40}, {"L", 50}, {"XC", 90}, {"C", 100},
        {"CD", 400}, {"D", 500}, {"CM", 900}, {"M", 1000}
    };
    vector<string> roman_name = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    string intToRoman(int num) {
        string str = "";
        int roman;
        while(num != 0) {
            for(string& s: roman_name) {
                roman = roman_value[s];
                if(num >= roman) {
                    num -= roman;
                    str += s;
                    break;
                }
            }
        }
        return str;
    }
};