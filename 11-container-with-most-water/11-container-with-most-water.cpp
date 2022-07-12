class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = -1;
        int n = height.size();

        int a = 0, b = n-1;
        int cArea;
        while (a < b) {
            cArea = (b - a) * min(height[a], height[b]);
            if(cArea > area) {
                area = cArea;
            }
            if (height[a] < height[b]) ++a;
            else if (height[a] > height[b]) --b;
            else {
                ++a;
                --b;
            }
        }
        return area;
    }
};