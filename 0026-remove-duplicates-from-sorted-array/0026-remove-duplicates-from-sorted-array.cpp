class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s1;
        for(int i = 0;i<nums.size();i++)
        {
            s1.insert(nums[i]);
        }
        copy(s1.begin(),s1.end(),nums.begin());
        return s1.size();
    }
};