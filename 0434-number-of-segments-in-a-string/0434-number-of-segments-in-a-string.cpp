class Solution {
public:
    int countSegments(string s) {
        // int ans = 0;
        // int count = 0;
        // int space = 0;
        // for(int i = 0;i<s.length();i++)
        // {
        //     if(s[i]!=' ') count++;
        //     else if(s[i] == ' ') ;
        //     else
        //     {
        //         ans++;
        //         count = 0;
        //     }
        // }
        // if(count>0) ans++;
        // return ans;
        // string ans = "";
        // for(int i = 0;i<s.length();i++)
        // {
        //     if(s[i]!=' ')
        //     {
        //         ans.push_back(s[i]);
        //     }
        // }
        // if(ans.length() == 0) return 0;
        // if(ans.length()==s.length()) return 1;
        // return s.length() - ans.length()+1;
        int i = 0;
        int ans = 0;
        int count = 0;
        while(i < s.length())
        {
            while(i<s.length() && s[i]==' ')i++;
            while(i<s.length() && s[i]!=' ') {i++;count++;}
            if(count>0) ans++;
            count = 0;
        }
        return ans;
    }
};