class Solution {
public:
    double fact(int x) {
        return tgamma(x+1);
    }
    int NCR(int n, int r) {
        return round(fact(n)/(fact(r)*fact(n-r)));
    }
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        for(int i = 0; i <= rowIndex; i++) {
            v.push_back(NCR(rowIndex, i));
        }
        return v;
    }
};