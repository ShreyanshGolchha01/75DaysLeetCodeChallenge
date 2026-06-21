class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int k = costs[0];
        for(int x : costs)
            k = max(k, x);
        vector<int> count(k + 1, 0);
        for(int x : costs)
            count[x]++;
        for(int i = 1; i <= k; i++)
            count[i] += count[i - 1];
        vector<int> sorted(costs.size());
        for(int i = costs.size()-1; i>=0; i--)
        {
            sorted[count[costs[i]] - 1] = costs[i];
            count[costs[i]]--;
        }
        int ans = 0;
        for(int x : sorted)
        {
            if(coins < x)
                break;
            coins -= x;
            ans++;
        }
        return ans;
    }
};