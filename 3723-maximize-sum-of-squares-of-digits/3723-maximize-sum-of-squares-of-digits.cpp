class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        return string(sum / 9, '9') + (sum % 9 > 0 ? to_string(sum % 9) : "") + string(num - (sum + 8) / 9, '0');
    }
};