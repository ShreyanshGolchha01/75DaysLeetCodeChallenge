class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        map<int, vector<int>> mp;

        // row -> reserved seats
        for (auto &x : reservedSeats) {
            mp[x[0]].push_back(x[1]);
        }

        int ans = 0;

        // Rows jisme koi reserved seat nahi hai
        ans += (n - mp.size()) * 2;

        // Rows jisme reserved seats hain
        for (auto &p : mp) {
            
            vector<int> seats = p.second;

            bool left = true;   // 2,3,4,5
            bool middle = true; // 4,5,6,7
            bool right = true;  // 6,7,8,9

            for (int seat : seats) {
                
                if (seat >= 2 && seat <= 5)
                    left = false;

                if (seat >= 4 && seat <= 7)
                    middle = false;

                if (seat >= 6 && seat <= 9)
                    right = false;
            }

            if (left && right) {
                ans += 2;
            }
            else if (left || middle || right) {
                ans += 1;
            }
        }

        return ans;
    }
};