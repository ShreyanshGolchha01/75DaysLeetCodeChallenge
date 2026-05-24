class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int n = nums.size();
        // while(k!=1)
        // {
        //     auto mx = max_element(nums.begin(), nums.end());
        //     nums.erase(mx);
        //     k--;
        // }
        // int mx1 = *max_element(nums.begin(), nums.end());
        // return mx1;
        nth_element(nums.begin(), nums.begin() + (n - k), nums.end());
        return nums[n - k];
    }
};