class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int anslen = 0;

        for (int i = 0; i < s.size(); i++) {
            // Odd length palindrome
            int l = i, r = i;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if ((r - l + 1) > anslen) {
                    ans = s.substr(l, r - l + 1);
                    anslen = r - l + 1;
                }
                l--;
                r++;
            }

            // Even length palindrome
            l = i, r = i + 1;
            while (l >= 0 && r < s.size() && s[l] == s[r]) {
                if ((r - l + 1) > anslen) {
                    ans = s.substr(l, r - l + 1);
                    anslen = r - l + 1;
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};

