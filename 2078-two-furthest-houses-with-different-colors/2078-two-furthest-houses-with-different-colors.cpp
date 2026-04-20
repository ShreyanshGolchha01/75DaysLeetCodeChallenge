class Solution {
public:
    int maxDistance(vector<int>& c) {
        
        int d = 0;
        for(int i = 0;i<c.size();i++)
        {
            for(int j = c.size() - 1;j>i;j--)
            {
                if(c[i]!=c[j])
                {
                    d = max(d,abs(i-j));
                }
            }
            
        }
        return d;
    }
};