class Solution {
public:
    bool isPowerOfThree(int& n) {
        if(n == 1) return true;
        else if(n == 2 or n == 0) return false;
        while(n >= 3) {
            if(n % 3 != 0 ) return false;
            n /= 3;
        }
        return n == 1;
    }
};