class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int maxlen=1; //I will be updated after an iteration
        int currlen=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if((nums[i]-nums[i-1])==1){
                currlen++;
            }
            else{
                currlen=1;;
            }
            maxlen=max(maxlen,currlen); //for new index we may get new CONSECUTIVE length
        }
        return maxlen;
    }
};