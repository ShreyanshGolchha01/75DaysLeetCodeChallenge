class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = k;
         for (int x : nums) {
            if (x == n) {
                n += k;
            }
            else if (x > n) {
                return n;
            }
        }
        return n;
        }
};