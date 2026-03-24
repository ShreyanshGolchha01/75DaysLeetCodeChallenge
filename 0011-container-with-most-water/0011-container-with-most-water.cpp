class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int right = h.size() - 1;
        int maxarea = 0;
        while(l<right)
        {
            int currentarea = min(h[l],h[right])*(right - l);
            maxarea = max(maxarea,currentarea);
            if(h[l]<h[right])
            {
                l++;
            }
            else
            {
                right--;
            }
        }
        return maxarea;
    }
};