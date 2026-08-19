class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int n = s.size();
        int i = 0;
        for (auto x : s) {
            nums[i] = x;
            i++;
        }
        return n;
    }
};