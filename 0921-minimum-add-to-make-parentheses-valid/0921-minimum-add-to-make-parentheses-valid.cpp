class Solution {
public:
    int minAddToMakeValid(string s) {
        int level = 0, lowest = 0;
        for (char ch : s) {
            level += ch == '(' ? 1 : -1;
            lowest = min(lowest, level);
        }
        return level - 2 * lowest;
    }
};