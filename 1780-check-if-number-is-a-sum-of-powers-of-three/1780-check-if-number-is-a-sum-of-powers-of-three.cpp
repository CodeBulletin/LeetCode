class Solution {
public:
    bool checkPowersOfThree(int& n) {
        int k = log2((double)n) / log2(3.0);
        while(k >= 0) {
            n = n - pow(3, k);
            if(n == 0) break;
            int k2 = log2((double)n) / log2(3.0);
            if(k2 >= k) return false;
            k = k2;
        }
        return n == 0;
    }
};