class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            int temp = n;
            int pro = 1;
            while(temp!=0)
            {
                pro = pro * (temp%10);
                temp/=10;
            }
            if(pro%t==0) return n;
            n++;
        }
        return n;
    }
};