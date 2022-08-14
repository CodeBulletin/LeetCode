class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = 0;
        while(n > 0) {
            if(n%2 != 0) i +=  1;
            n >>= 1;
        }
        return i;
    }
};