class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;
        int broke = false;
        for(char& i : s) {
            if(i != ' ') {
                if(broke) {
                    size = 0;
                    broke = false;
                }
                size += 1;
            } else {
                broke=true;
            }
        }
        return size;
    }
};