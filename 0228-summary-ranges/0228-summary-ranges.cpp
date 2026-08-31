class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty()) return ans;

        int temp = nums[0];
        for (int i = 1; i <= nums.size(); ++i) {
            if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                if (temp == nums[i - 1]) {
                    ans.push_back(to_string(temp));
                } else {
                    ans.push_back(to_string(temp) + "->" + to_string(nums[i - 1]));
                }
                if (i < nums.size()) temp = nums[i];
            }
        }
        return ans;
    }
};