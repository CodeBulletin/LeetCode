class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        else if(n == 2 or n == 3 or n == 0) return false;
        while(n >= 4) {
            if(n % 4 != 0 ) return false;
            n /= 4;
        }
        return n == 1;
    }
};