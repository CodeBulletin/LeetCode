const float sqrt5 = sqrt(5);
const float phi = (sqrt5 + 1) / 2;
class Solution {
public:
    int fib(int& n) { 
        return round(pow(phi, n) / sqrt5);
    }
};