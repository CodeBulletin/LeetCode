class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n+1, 0);
        for (int i=1; i<=n; i++) {
            arr[i] = (i&1) ? arr[i-1]+1 : arr[i/2];
        }
        return arr;
    }
};