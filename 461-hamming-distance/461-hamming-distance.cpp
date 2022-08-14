class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y;
        int i = 0;
        while(n > 0) {
            if(n%2 != 0) i +=  1;
            n >>= 1;
        }
        return i;
    }
};