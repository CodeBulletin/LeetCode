class Solution {
public:
    int convolute(const vector<int>& a, const vector<int>& kernel, const int& x, const int& y) {
        int n = x - y;
        
        int max = 0;
        
        for(int i = 0; i <= n ; i++) {
            for(int j = 0; j <= n; j++) {
                int sum  = 0;
                for(int k = 0; k < y; k++) {
                    for(int l = 0; l < y; l++) {
                        sum += a[(i + k) * x + j + l] * kernel[k * y + l];
                    }
                }
                if(sum >= max) max = sum;
            }
        }
        
        return max;
    }
    int largestOverlap(const vector<vector<int>>& img1, const vector<vector<int>>& img2) {
        int n = img1.size();
        int x = n * 3 - 2;
        vector<int> im2(x * x, 0), im1(n * n);
        
        for(int i = 0; i < img2.size(); i++) {
            for(int j = 0; j < img2.size(); j++) {
                im2[(i + n - 1) * x + j + n - 1] = img2[i][j];
            } 
        }
        
        for(int i = 0; i < img1.size(); i++) {
            for(int j = 0; j < img1.size(); j++) {
                im1[i * n + j] = img1[i][j];
            } 
        }
        
        return convolute(im2, im1, x, n);
    }
};