class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size() - 1;
        while (i <= j) {
            if (nums[i] == val) {
                while (i <= j && nums[j] == val) {
                    j--;
                }
                if (i <= j) {
                    nums[i] = nums[j];
                    j--;
                    i++;
                }
            } 
            else {
                i++;
            }
        }
        return i;
    }
};