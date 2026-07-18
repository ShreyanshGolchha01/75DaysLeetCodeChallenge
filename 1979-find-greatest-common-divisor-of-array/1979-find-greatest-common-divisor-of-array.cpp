class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = nums[0];
        int l = nums[0];
        int n = nums.size();
        for(int i = 1;i<n;i++)
        {
            if(nums[i]>l) l = nums[i];
            if(nums[i]<s) s=nums[i];
        }
        return gcd(s,l);
    }
};