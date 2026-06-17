class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        int n = stockPrices.size();
        if (n == 1) return 0;

        sort(stockPrices.begin(), stockPrices.end());
        int count = 1;

        for (int i = 2; i < n; i++) {
            long long x1 = stockPrices[i][0], x2 = stockPrices[i - 1][0], x3 = stockPrices[i - 2][0];
            long long y1 = stockPrices[i][1], y2 = stockPrices[i - 1][1], y3 = stockPrices[i - 2][1];

            long long slope1 = (y3 - y2) * (x2 - x1);
            long long slope2 = (y2 - y1) * (x3 - x2);

            if (slope1 != slope2) count++;
        }

        return count;
    }
};