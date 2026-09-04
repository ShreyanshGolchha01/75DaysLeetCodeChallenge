class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<k && k<n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[k++]);
        }
        return ans;
    }
};