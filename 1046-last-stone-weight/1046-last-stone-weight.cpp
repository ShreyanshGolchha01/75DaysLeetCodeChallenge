class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq;

        for (int x : s) {
            pq.push(x);
        }

        int y,x;
        while(pq.size()!=1)
        {
            y = pq.top();
            pq.pop();
            x = pq.top();
            pq.pop();
            if(x==y) pq.push(0);
            if(x!=y) pq.push(y-x);
        }
        return pq.top();
    }
};