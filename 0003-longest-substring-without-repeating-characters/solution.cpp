#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int i = 0, j = 0, maxLength = 0;
        
        while (j < s.length()) {
            if (seen.find(s[j]) == seen.end()) {
                // If s[j] is not in the set, insert it and update the window size
                seen.insert(s[j]);
                maxLength = max(maxLength, j - i + 1);
                j++;
            } else {
                // If s[j] is in the set, remove s[i] from the set and move i
                seen.erase(s[i]);
                i++;
            }
        }
        return maxLength;
    }
};


