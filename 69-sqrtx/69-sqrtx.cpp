class Solution {
public:
    int mySqrt(int x) {
        long long s=0,end =INT_MAX,ans = 0;
        while(s<=end){
            long long mid = s+(end-s)/2;
            long long int square = mid*mid;


            if(square <=x){
                ans = mid;
                s=mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};