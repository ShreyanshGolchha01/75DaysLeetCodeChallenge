#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> res(n, 0);          // initialize with zeros
        vector<int> st;                // stack of indices

        for (int i = 0; i < n; ++i) {
            // while current temp is warmer than temp at index on top of stack
            while (!st.empty() && T[i] > T[st.back()]) {
                int idx = st.back();
                st.pop_back();
                res[idx] = i - idx;    // days to wait
            }
            st.push_back(i);
        }
        // remaining indices have no warmer day -> res already 0
        return res;
    }
};
