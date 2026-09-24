class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++)
        {
            int sum = 0;
            int num1 = nums[i];
            while(num1!=0)
            {
                sum+=num1%10;
                num1/=10;
            }
            if(sum == i) return i;
        }
        return -1;
    }
};