class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned long long int result=0;
        int i=32;
        while(i--)
        {
            result<<=1;
            result+=n&1;
            n>>=1;
        }
        return result;
    }
};