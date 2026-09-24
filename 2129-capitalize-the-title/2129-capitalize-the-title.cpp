class Solution {
public:
    string capitalizeTitle(string s) {

        int i = 0;
        int n = s.length();

        while (i < n) {
            int j = i;
            while (j < n && s[j] != ' ') {
                j++;
            }
            int length = j - i;
            if (length < 3) {
                while (i < j) {
                    s[i] = tolower(s[i]);
                    i++;
                }
            } else {
                s[i] = toupper(s[i]);
                i++;
                while (i < j) {
                    s[i] = tolower(s[i]);
                    i++;
                }
            }
            i++;
        }
        return s;
    }
};