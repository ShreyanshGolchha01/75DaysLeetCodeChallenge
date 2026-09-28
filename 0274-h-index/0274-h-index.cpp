class Solution {
public:
    int hIndex(vector<int>& c) {
        int maxi = 0;
        int n = c.size();
        int h = 0;
        while(true)
        {
            h++;
            int count = 0;
            for(int i = 0;i<n;i++)
            {
                if(c[i]>=h) count++;
            }
            if(count>=h) maxi = max(h,maxi);
            else return maxi;
        }
        return maxi;
    }
};