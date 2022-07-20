// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1, high = n, cur;
        while (low <= high) {
            cur = (low+high)/2;
            if (isBadVersion(cur)) {
                if (!isBadVersion(cur-1)) {
                    break;
                }
                else {
                    high = cur-1;
                }
            }
            else {
                low = cur+1;
            }
        }
        return cur;
    }
};