class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        // Create a set for fast lookup of dictionary words
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        
        // DP array to store the minimum number of leftover characters for each index
        vector<int> dp(n + 1, 0);  // dp[i] will hold the minimum leftover characters considering the first i characters
        
        // Loop through each character in the string s
        for (int i = 1; i <= n; ++i) {
            // Assume the current character is left as extra (not part of any valid word)
            dp[i] = dp[i - 1] + 1;
            
            // Try all substrings ending at the current index
            for (int j = 0; j < i; ++j) {
                string substr = s.substr(j, i - j);
                // If the substring exists in the dictionary, update dp[i]
                if (dict.count(substr)) {
                    dp[i] = min(dp[i], dp[j]);
                }
            }
        }
        
        // The value at dp[n] gives the minimum number of leftover characters for the whole string
        return dp[n];
    }
};

