class Solution {
public:
    int captureForts(vector<int>& f) {
        int ans = 0;
        for(int i = 0;i<f.size();i++)
        {
            if(f[i]==1)
            {
                int cl = 0;
            int j = i - 1;
            while(j>=0)
            {
                if(f[j]==0)
                {
                    cl++;
                    j--;
                }
                else if(f[j]==-1)
                {
                    break;
                }
                else
                {
                    cl = 0;
                    break;
                }
            }
            int cr = 0;
            int k = i+1;
            while(k<f.size())
            {
                if(f[k]==0)
                {
                    cr++;
                    k++;
                }
                else if(f[k]==-1) break;
                else
                {
                    cr = 0;
                    break;
                }
            }
            cl = (j >= 0) ? cl : 0;
            cr = (k<f.size()) ? cr:0;
            int temp = max(cl,cr);
            ans = max(ans,temp);
            }
        }
        return ans;
    }
};