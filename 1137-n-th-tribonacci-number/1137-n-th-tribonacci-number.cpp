class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 or n == 2) return 1;
        n -= 2;
        
        int T1 = 0, T2 = 1, T3 = 1, tmp1, tmp2;
        
        for(int i = 0; i < n; i ++) {
            tmp2 = T3;
            tmp1 = T2;
            T3 += T2 + T1;
            T1 = tmp1;
            T2 = tmp2;
        }
        return T3;
    }
};