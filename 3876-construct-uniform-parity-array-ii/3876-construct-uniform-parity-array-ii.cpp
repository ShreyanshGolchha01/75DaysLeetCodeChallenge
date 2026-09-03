class Solution {
public:
     bool uniformArray(vector<int>& nums) {
        int minOdd = INT_MAX;
        int minEven = INT_MAX;
        for (int x : nums) {
            if (x % 2)
                minOdd = min(minOdd, x);
            else
                minEven = min(minEven, x);
        }
        if (minOdd < minEven)
            return true;
        if (minOdd == INT_MAX)
            return true;

        return false;
    }
};