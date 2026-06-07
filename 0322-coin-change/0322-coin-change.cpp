class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1 , INT_MAX-1);
        dp[0]=0; //if amount is 0 then no coin needed.

        for(auto it : coins){

            if(it>amount)continue; //Never be used...

            dp[it]=1;
            for(int i=it+1 ; i<=amount ; i++){
                dp[i]=min(dp[i-it]+1 , dp[i]);
            }

        }
        if(dp[amount]==INT_MAX-1)return -1; //No result found.
        return dp[amount];
    }
};