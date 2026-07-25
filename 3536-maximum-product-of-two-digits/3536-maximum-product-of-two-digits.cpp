class Solution {
public:
    int maxProduct(int n) {
        vector<int> a;
        while(n>0)
        {
            int digit = n%10;
            a.push_back(digit);
            n/=10;
        }
        int first = INT_MIN;
        int second = INT_MIN;
        for(int x:a)
        {
            if(x>first)
            {
                second = first;
                first = x;
            }
            else if(x>second)
            {
                second = x;
            }
        }
        return first * second;
    }
};