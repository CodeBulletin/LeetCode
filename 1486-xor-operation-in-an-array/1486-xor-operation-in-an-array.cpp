class Solution {
public:
    int xorOperation(const int& n, const int& start) {
        int Xor = start;
        for(int i = 1; i < n; i++) {
            Xor ^= (start + 2 * i);
        }
        return Xor;
    }
};