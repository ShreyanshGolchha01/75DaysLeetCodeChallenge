class Solution {
public:
    bool isAnagram(string s1, string t) {
        sort(s1.begin(),s1.end());
        sort(t.begin(),t.end());
        if(s1==t) return true;
        else return false;
        return false;
    }
};