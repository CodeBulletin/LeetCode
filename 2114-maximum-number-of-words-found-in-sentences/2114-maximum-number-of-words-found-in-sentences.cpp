int countWordsInString(std::string const& str) {
    std::stringstream stream(str);
    return std::distance(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>());
}

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = -1;
        
        for (string& str: sentences) {
            int count = countWordsInString(str);
            if (count > max) {
                max = count;
            }
        }
        
        return max;
    }
};