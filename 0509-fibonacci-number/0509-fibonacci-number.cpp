class Solution {
    const float phi = (sqrt(5) + 1) / 2; 
    const float sqrt5 = sqrt(5);
public:
    int fib(int n) {
        return round(pow(phi, n) / sqrt5);
    }
};