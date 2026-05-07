class Solution {
public:
    int totalFruit(vector<int>& fruits1) {
        int last = -1, secondLast = -1;
        int lastCount = 0, curr = 0, maxfruits1 = 0;

        for (int fruit : fruits1) {
            if (fruit == last || fruit == secondLast) {
                curr++;
            } else {
                curr = lastCount + 1;
            }

            if (fruit == last) {
                lastCount++;
            } else {
                lastCount = 1;
                secondLast = last;
                last = fruit;
            }

            maxfruits1 = max(maxfruits1, curr);
        }

        return maxfruits1;
    }
};