class Solution {
public:
    void getsum(int& n) {
        int sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    int addDigits(int num) {
        while(num > 9) {
            getsum(num);
        }
        return num;
    }
};