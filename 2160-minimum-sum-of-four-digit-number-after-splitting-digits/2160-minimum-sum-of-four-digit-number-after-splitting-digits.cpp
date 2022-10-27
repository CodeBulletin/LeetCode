class Solution {
public:
    int minimumSum(int num) {
        int k[4];
        k[0] = num % 10;
        k[1] = (num / 10) % 10;
        k[2] = (num / 100) % 10;
        k[3] = (num / 1000) % 10;
        sort(&k[0], &k[4]);
        return (k[0] + k[1]) * 10 + k[2] + k[3];
    }
};