class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int Carry = 1;
        vector<int> vec;
        for(int i=0; i < digits.size(); i++) {
            int Sum = Carry + digits[digits.size()-i-1];
            int Digit = Sum % 10;
            Carry = (Sum - Digit) / 10;
            
            vec.push_back(Digit);
        }
        if(Carry != 0) vec.push_back(Carry);
        
        reverse(vec.begin(), vec.end());
        return vec;
    }
};