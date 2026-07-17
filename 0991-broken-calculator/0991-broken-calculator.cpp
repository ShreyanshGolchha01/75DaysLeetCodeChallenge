class Solution {
public:
    int brokenCalc(int s, int t) {
       int op = 0;
       while(t>s)
       {
        if(t%2)
        {
            t++;
        }
        else t/=2;
        op++;
       }
       return op + (s-t);
    }
};