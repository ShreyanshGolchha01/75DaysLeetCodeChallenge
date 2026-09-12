class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i:nums)
        {
            if(i>maxi) maxi = i;
        } 
        vector<int>freq(maxi+1,0);
        vector<int>ans;

        for(int val:nums){
            freq[val]++;
        }

        for(int i = 0;i<nums.size();i++)
        {
            int ans1 = 0;
            for(int j = 0;j<nums[i];j++)
            {
                ans1 += freq[j];
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};