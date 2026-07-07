class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string s = to_string(n);
        string t = "";
        for(char c : s) {
            if(c != '0')
                t += c;
        }
        long long ans = stoll(t);
        int sum = 0;
        long long temp = ans;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        return ans * sum;
    }
};