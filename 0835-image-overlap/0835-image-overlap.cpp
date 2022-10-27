class Solution {
public:
    int convolute(const vector<int>& a, const vector<vector<int>>& kernel, int x) {
        int n = x - kernel.size();
        
        int max = 0;
        
        for(int i = 0; i <= n ; i++) {
            for(int j = 0; j <= n; j++) {
                int sum  = 0;
                for(int k = 0; k < kernel.size(); k++) {
                    for(int l = 0; l < kernel.size(); l++) {
                        sum += a[(i + k) * x + j + l] * kernel[k][l];
                    }
                }
                if(sum >= max) max = sum;
            }
        }
        return max;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int x = n * 3 - 2;
        vector<int> im2(x * x, 0);
        for(int i = 0; i < img2.size(); i++) {
            for(int j = 0; j < img2.size(); j++) {
                im2[(i + n - 1) * x + j + n - 1] = img2[i][j];
            } 
        }
        
        return convolute(im2, img1, x);
    }
};