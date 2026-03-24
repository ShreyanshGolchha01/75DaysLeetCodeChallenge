class Solution {
public:
    int maxArea(vector<int>& h) {
        int left = 0;
        int right = h.size() - 1;
        int maxarea = 0;
        while(left<right)
        {
            int currentarea = min(h[left],h[right])*(right - left);
            maxarea = max(maxarea,currentarea);
            if(h[left]<h[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxarea;
    }
};