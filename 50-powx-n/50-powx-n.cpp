class Solution {
    double power(double x, int n){
        if(n == 0){
            return 1;
        }
        double ans = power(x,n/2);
        if(n%2 == 0){
            return ans*ans;
        }
        else{
            return ans*ans*x;
        }
    }
public:
    double myPow(double x, int n) {
        if(n<0)
            return (1/power(x,n));
        else
            return  power(x,n);
    }
};