class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        bool odd = true;
        bool even = true;
        //odd one
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                bool check = false;
                for(int j = 0;j<nums.size();j++)
                {
                    if(j==i) continue;
                    if((nums[i]-nums[j])%2!=0) {check = true;break;}
                }
                if(check==false) odd = false; 
            }
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                bool check = false;
                for(int j = 0;j<nums.size();j++)
                {
                    if(j==i) continue;
                    if((nums[i]-nums[j])%2!=0) {check = true;break;}
                }
                if(check==false) even = false; 
            }
        }
        if(odd || even) return true;
        return false;
    }
};