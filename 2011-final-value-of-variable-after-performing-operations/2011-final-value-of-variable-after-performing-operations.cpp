class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x  = 0;
        for (string &str: operations) {
            if (str[0] == '+' or str[1] == '+') x++;
            else x--;
        }
        return x;
    }
};