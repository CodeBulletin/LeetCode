class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char& i : s) {
            if (i == '[' or i == '(' or i == '{') {
                st.push(i);
            }
            else {
                if (!st.empty()) {
                    if ((st.top() == '[' and i == ']') or (st.top() == '{' and i == '}') or (st.top() == '(' and i == ')')) {
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};