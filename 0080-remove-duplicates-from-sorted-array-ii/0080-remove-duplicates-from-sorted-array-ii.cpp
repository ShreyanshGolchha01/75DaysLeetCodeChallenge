class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;
        int a = nums[0];
        int k = 0;
        int c = 0;
        for(int i = 0;i<n;i++)
        {
            if(a==nums[i] && c>=2)
            {
                for(int j = i;j<n-1;j++)
                {
                    nums[j] = nums[j+1];
                }
                n--;
                i--;
            }
            else if(a==nums[i] && c<2)
            {
                k++;
                c++;
            }
            else if(a!=nums[i])
            {
                a = nums[i];
                c = 1;
                k++;
            }
        }
        return k;
    }
};