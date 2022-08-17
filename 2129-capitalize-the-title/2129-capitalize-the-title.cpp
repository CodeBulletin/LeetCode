class Solution {
public:
    string capitalizeTitle(string& title) {
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        if(title.size() >= 3 and (title[1] != ' ' and title[2] != ' '))
            title[0] = toupper(title[0]);
        for(int i = 1; i < title.size(); i++) {
            if(title[i] == ' ' and (i+3 < title.size() and (title[i+3] != ' ' and title[i+2] != ' '))) {
                title[i+1] = toupper(title[i+1]);
                i+=2;
            }
        }
        return title;
    }
};