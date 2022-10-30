class Solution {
public:

    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        for(int i=0; i < n; i++){
            int s = n - i;
            int e = i + 1;
            sum += ((s*e + 1)/2) *arr[i];
        }
        return sum;
    }
};