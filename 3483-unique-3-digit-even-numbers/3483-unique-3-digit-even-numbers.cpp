class Solution {
public:
    int totalNumbers(vector<int>& a) {
        set<int> st;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 0) continue;
            for (int j = 0; j < a.size(); j++) {
                if (j == i) continue;

                for (int k = 0; k < a.size(); k++) {
                    if (k == i || k == j) continue;

                    int num = a[i] * 100 + a[j] * 10 + a[k];
                    if(num%2==0) st.insert(num);
                }
            }
        }
        return st.size();
    }
};