class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> vec(60,0);
        for(auto& it: time){
            it=it%60;
            vec[it]++;
        }

long long cnt=0;
        cnt+=(long long) ( 1LL*vec[0] *(vec[0]-1))/2;
        for(int i=1;i<30;i++){
            cnt+=(long long) (vec[i]*vec[60-i]);
        }

        cnt += (long long)vec[30] * (vec[30] - 1) / 2;
        return (int)cnt;
    }


};