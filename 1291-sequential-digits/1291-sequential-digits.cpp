class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for (int len = to_string(low).size();
             len <= to_string(high).size();
             len++) {

            for (int start = 1; start + len - 1 <= 9; start++) {
                string l = "";

                for (int i = 0; i < len; i++) {
                    l += (start + i) + '0';
                }

                int dig = stoi(l);

                if (dig >= low && dig <= high)
                    ans.push_back(dig);
            }
        }

        return ans;
    }
};