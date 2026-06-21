class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int k = costs[0];
        for(int i = 0;i<costs.size();i++)
        {
            k = max(k,costs[i]);
        }
        vector<int> count(k+1, 0);
        for(int i = 0;i<costs.size();i++)
        {
            count[costs[i]]++;
        }
        for(int i = 1;i<k+1;i++)
        {
            count[i] = count[i-1]+count[i];
        }
        vector<int> sorted(costs.size(),0);
        for(int i = costs.size()-1;i>=0;i--)
        {
            int a = count[costs[i]];
            sorted[a-1] = costs[i];
            count[costs[i]]--;
        }
        int counted = 0;
        if(coins<sorted[0]) return 0;
        int i = 0;
        while(coins!=0 && i<sorted.size())
        {
            if(coins<sorted[i]) return counted;
            coins-=sorted[i];
            counted++;
            i++;
        }
        return counted;
    }
};