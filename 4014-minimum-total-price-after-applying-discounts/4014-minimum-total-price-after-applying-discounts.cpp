class Solution {
public:
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.rbegin(),p.rend());
        sort(d.rbegin(),d.rend());
        double ans = 0;
        for (int i = 0; i < p.size(); i++) {
            if (i < d.size()) {
                ans += p[i] * (100 - d[i]) / 100.0;
            } else {
                ans += p[i];
            }
        }
        return ans;
    }
};