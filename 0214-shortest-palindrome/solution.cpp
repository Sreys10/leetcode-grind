class Solution {
public:
    string shortestPalindrome(string s) {
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());  // Reverse the original string

        // Create a new string by appending a special character '#' and the reversed string
        string new_s = s + "#" + rev_s;

        // Compute the KMP table (prefix function)
        int n = new_s.size();
        vector<int> lps(n, 0);  // lps array to store longest prefix suffix lengths

        // Fill the KMP table
        for (int i = 1; i < n; i++) {
            int j = lps[i - 1];
            while (j > 0 && new_s[i] != new_s[j]) {
                j = lps[j - 1];
            }
            if (new_s[i] == new_s[j]) {
                j++;
            }
            lps[i] = j;
        }

        // The lps value of the last position tells us the longest palindromic prefix
        int pal_len = lps[n - 1];

        // Append the necessary characters to the beginning of the original string
        string to_add = rev_s.substr(0, s.size() - pal_len);
        return to_add + s;
    }
};

