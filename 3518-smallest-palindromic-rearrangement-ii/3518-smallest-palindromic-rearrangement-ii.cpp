class Solution {
public:
    string smallestPalindrome(string s, int k) {
        // Step 1: Count character frequencies
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        vector<int> halfFreq(26, 0);
        int oddCount = 0;
        char midChar = 0;

        // Step 2: Extract half-frequencies for the first half of the palindrome
        for (int i = 0; i < 26; i++) {
            halfFreq[i] = freq[i] / 2;
            if (freq[i] % 2 != 0) {
                oddCount++;
                midChar = (char)('a' + i);
            }
        }

        // Step 3: Check if k is within the total possible distinct permutations
        long long totalPerms = countPermutations(halfFreq, k);
        if (totalPerms < k) {
            return "";
        }

        string firstHalf = "";
        int m = s.length() / 2;

        // Step 4: Lexicographically build the first half
        for (int pos = 0; pos < m; pos++) {
            for (int ch = 0; ch < 26; ch++) {
                if (halfFreq[ch] == 0) continue;

                halfFreq[ch]--;
                long long cnt = countPermutations(halfFreq, k);

                if (k > cnt) {
                    k -= cnt;
                    halfFreq[ch]++; // Revert and try the next letter
                } else {
                    firstHalf += (char)('a' + ch);
                    break;          // Lock in the character
                }
            }
        }

        // Step 5: Assemble the final palindrome (First Half + Middle + Reversed First Half)
        string ans = firstHalf;
        if (oddCount == 1) {
            ans += midChar;
        }
        
        string revHalf = firstHalf;
        reverse(revHalf.begin(), revHalf.end());
        ans += revHalf;

        return ans;
    }

private:
    // Safely calculates permutations capped at cap to prevent integer overflow
    long long countPermutations(vector<int>& freq, long long cap) {
        long long ans = 1;
        int total = 0;
        
        for (int f : freq) {
            if (f == 0) continue;
            if (total == 0) {
                total += f;
                continue;
            }
            
            // Calculate combinations dynamically: C(total + f, f)
            int limit = min(f, total);
            int n = total + f;
            
            for (int i = 1; i <= limit; i++) {
                // Guaranteed to perfectly divide without truncation
                ans = ans * (n - i + 1) / i; 
                
                // Break early if we exceed our capacity requirement
                if (ans > cap) return cap + 1;
            }
            total += f;
        }
        
        return ans;
    }
};