class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        bool negative = (dividend<0) ^ (divisor<0);
        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        long long result = 0;

        while(dvd>=dvs)
        {
            long long temp = dvs,mult = 1;
            while(dvd >= (temp<<1))
            {
                temp<<=1;
                mult<<=1;
            }
            dvd-=temp;
            result+=mult;
        }
        return negative?-result:result;
    }
};