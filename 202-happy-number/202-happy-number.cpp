class Solution {
public:
    bool isHappy(int n) {
        int sum = n;
        unordered_set<int> set;
        do {
            n = sum;
            sum = 0;
            while(n > 0) {
                int k = n%10;
                int m = (n - k)/10;
                n = m;
                sum += k * k;
            }
            if(set.find(sum) != set.end()) return false;
            set.insert(sum);
        } while(sum != 1);
        return true;
    }
};