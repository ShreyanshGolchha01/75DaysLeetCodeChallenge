class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        if(nums.size()==1) return 0;
        vector<int> pref(nums.size());
        pref[0] = nums[0];
        int maxi = nums[0];
        for(int i = 1;i<nums.size();i++)
        {
            maxi = max(maxi,nums[i]);
            pref[i] = gcd(maxi,nums[i]); 
        }
        sort(pref.begin(),pref.end());
        // if(nums.size()%2!=0) return pref[(nums.size()/2)];
        long long ans = 0;
        while(pref.size()>1)
        {
            ans = ans + gcd(pref.front(),pref.back());
            pref.erase(pref.begin());
            pref.pop_back();
        }
        return ans;
    }
};