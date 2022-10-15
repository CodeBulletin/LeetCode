class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> vec;
        vec.push_back(first);
        for(int i = 0; i < encoded.size(); i++) {
            vec.push_back(encoded[i] ^ vec[vec.size() - 1]);
        }
        return vec; 
    }
};