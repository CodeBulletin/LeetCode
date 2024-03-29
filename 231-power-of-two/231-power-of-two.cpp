class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        while(n > 0) {
            if(n%2 != 0) i += 1;
            if(i > 1) return false;
            n >>= 1;
        }
        return i == 1;
    }
};