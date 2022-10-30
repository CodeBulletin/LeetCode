class Solution {
public:
    int xorOperation(int n, int start) {
        int Xor = start;
        for(int i = 1; i < n; i++) {
            Xor = Xor xor (start + 2 * i);
        }
        return Xor;
    }
};