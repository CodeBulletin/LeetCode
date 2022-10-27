class Solution {
public:
    string defangIPaddr(string address) {
        string tmp, k; 
        stringstream ss(address);
        while(getline(ss, tmp, '.')){
            k += tmp + "[.]";
        }
        k.resize(k.size() - 3);
        return k;
    }
};