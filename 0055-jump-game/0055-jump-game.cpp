class Solution {
public:
    bool canJump(vector<int>& a) {
        int maxi = a[0];
        for(int i = 0;i<a.size();i++)
        {
            if(maxi>=a.size() - 1) return true;
            if(a[i] == 0 && maxi == i) return false;
            if(i + a[i] > maxi) maxi = i+a[i];
        }
        return true;
    }
};