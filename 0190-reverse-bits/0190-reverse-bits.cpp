class Solution {
public:
    int reverseBits(int n) {
        string result = "";
    for (int i = 31; i >= 0; i--) {
        result += ((n >> i) & 1) ? '1' : '0';
    }
        reverse(result.begin(),result.end());
        int num = stoi(result, nullptr, 2);
        return num;
    }
};