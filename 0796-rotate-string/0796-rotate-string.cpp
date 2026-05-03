class Solution {
public:
    bool rotateString(string s, string goal) {
        int i = 0;
        while(i<(int)s.size())
        {
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.begin()+1);
            reverse(s.begin()+1,s.end());
            if(s==goal) return true;
            i++;
        }
        return false;
    }
};