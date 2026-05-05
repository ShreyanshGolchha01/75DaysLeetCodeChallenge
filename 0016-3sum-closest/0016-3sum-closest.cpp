class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum = INT_MAX/2;
        for(int i = 0;i<nums.size()-2;i++)
        {
            int j = i+1;
            int k = nums.size() - 1;
            while(j<k)
            {
                int leastsum = nums[i]+nums[j]+nums[k];
                if(abs(leastsum - target)<abs(sum - target))
                {
                    sum = leastsum;
                }
                if(leastsum<target)
                {
                    ++j;
                }
                else if(target<leastsum)
                {
                    --k;
                }
                else{
                    return leastsum;
                }

            }
        }
        return sum;
    }
};