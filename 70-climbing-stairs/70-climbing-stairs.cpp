class Solution {
public:
    double Phi = (1+pow(5.0, 0.5)) / 2;
    double phi = (1-pow(5.0, 0.5)) / 2;
    int climbStairs(int n) {
        n = n+1;
        return (pow(Phi, n) - pow(phi, n))/pow(5.0, 0.5);
    }
};