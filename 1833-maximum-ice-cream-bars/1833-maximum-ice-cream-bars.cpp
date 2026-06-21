class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count = 0;
        if(coins<costs[0]) return 0;
        int i = 0;
        while(coins!=0 && i<costs.size())
        {
            if(coins<costs[i]) return count;
            coins-=costs[i];
            count++;
            i++;
        }
        return count;
    }
};