class Solution {
public:
    bool isPalindrome(string s) {
        int i1 = 0;
        int j = s.size() - 1;
        while(i1<j)
        {
            while(i1<j && !isalnum(s[i1])) i1++;
            while(i1<j && !isalnum(s[j])) j--;
            if(tolower(s[i1])!=tolower(s[j]))
            {
                return false;
            }
            i1++;
            j--;
        }
        return true;
    }
};