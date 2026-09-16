class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int can = 0;
        for(int n:  nums)
        {
            if(c == 0) can = n;
            if(n == can) c++;
            else c--;
        }
        return can;
    }
};