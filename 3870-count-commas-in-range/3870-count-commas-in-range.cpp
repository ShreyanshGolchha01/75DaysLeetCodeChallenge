class Solution {
public:
    int countCommas(int n) {
        if(n>999 && n<100001) return n - 999;
        return 0;
    }
};