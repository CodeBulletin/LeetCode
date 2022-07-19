class Solution {
public:
    double fact(int x) {
        return tgamma(x+1);
    }
    int NCR(int n, int r) {
        return round(fact(n)/(fact(r)*fact(n-r)));
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i = 0; i < numRows; i++) {
            v.push_back(vector<int>());
            for(int j = 0; j <= i; j++) {
                v[i].push_back(NCR(i, j));
            }
        }
        return v;
    }
};